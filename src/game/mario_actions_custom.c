#include <PR/ultratypes.h>

#include "sm64.h"
#include "mario_actions_moving.h"
#include "mario_actions_object.h"
#include "mario_actions_airborne.h"
#include "mario.h"
#include "audio/external.h"
#include "engine/math_util.h"
#include "engine/surface_collision.h"
#include "mario_step.h"
#include "area.h"
#include "interaction.h"
#include "memory.h"
#include "behavior_data.h"
#include "object_list_processor.h"
#include "rumble_init.h"
#include "game_init.h"
#include "mario_coop.h"
#include "ingame_menu.h"
#include "seq_ids.h"
#include "sound_init.h"

#include "config.h"

#define DEAD_ZONE 16 // minimum controller distance to be registered as equal to a D pad down
#define SMW_WALK_SPEED 12 // speed while walking without B button
#define SMW_RUN_SPEED 24 // speed while running with B button
#define SMW_P_SPEED 30 // speed while running with B button and max P Speed
#define SMW_JUMP_FORCE 60.0f // speed while running with B button and max P Speed

void update_P_speed(struct MarioState *m, s8 change) {
    if ((ABS(m->forwardVel) < (SMW_RUN_SPEED - 1)) && change >= 0) {
        change = -1;
    }

    s8 new_speed = change + m->PMeter;

    if (new_speed < 20) {
        new_speed = 20;
    } else if (new_speed > 112) {
        new_speed = 112;
    }
    m->PMeter = new_speed;
}

void smw_left_right_movement(struct MarioState *m, f32 max_speed) {
    f32 target_speed = 0;
    s8 direction = 1;
    s8 change_amount = max_speed / 6;

    // ensure a D-pad priority when D-pad and stick are held at the same time
    // this also creates a left priority on controllers where left d-pad and right d-pad can be pressed at the same time
    if ((m->controller->buttonDown & R_JPAD || m->controller->stickX > DEAD_ZONE) && !(m->controller->buttonDown & L_JPAD)) {
        target_speed = max_speed;
    } else if (m->controller->buttonDown & L_JPAD || m->controller->stickX < -DEAD_ZONE) {
        target_speed = -max_speed;
        direction = -1;
    }

    if (m->forwardVel != target_speed) { // if speed is already at target_speed, don't do anything more.
        if (target_speed == 0) { // if no direction is held, determine what direction mario should go to slow down
            if (m->forwardVel < 0) {
                direction = -1;
            }
            change_amount = 2;
        }
    
        if ((direction * m->forwardVel) > (direction * target_speed)) { // if mario is faster then target, slow down
            m->forwardVel -= (change_amount * direction);
        } else {
            m->forwardVel += (change_amount * direction);
        }
    
        if (m->forwardVel <= target_speed + 2 && m->forwardVel >= target_speed - 2) {// if marios speed is close enough to the target, clamp him to it
            m->forwardVel = target_speed;
        } else if (m->forwardVel != ABS(m->forwardVel) * direction) {
            if (m->action == ACT_SMW_WALK) {
                update_P_speed(m, -3);
                set_mario_action(m, ACT_SMW_SKID, 0);
            }
        }

        if (m->action == ACT_SMW_SKID && m->forwardVel == ABS(m->forwardVel) * direction) {
            set_mario_action(m, ACT_SMW_WALK, 0);
        }
    }

    m->vel[0] = m->forwardVel * coss(m->faceAngle[0]) * sins(m->faceAngle[1]);
    m->vel[2] = m->forwardVel * coss(m->faceAngle[0]) * coss(m->faceAngle[1]);
}

s32 act_SMW_duck(struct MarioState *m) {
    if (!(m->controller->buttonDown & (D_JPAD) || m->controller->stickY < -DEAD_ZONE || m->controller->buttonDown & Z_TRIG)) {
        return set_mario_action(m, ACT_SMW_WALK, 0);
    }

    if (m->forwardVel != 0) {
        m->particleFlags |= PARTICLE_DUST;
    }

    smw_left_right_movement(m, 0);

    update_P_speed(m, -1);

    if (m->controller->buttonPressed & R_TRIG) {
        m->vel[1] = SMW_JUMP_FORCE + get_additive_y_vel_for_jumps() + ABS(m->forwardVel) * 0.25f;
        play_sound(SOUND_CUSTOM_SMW_SPIN, m->marioObj->header.gfx.cameraToObject);
        return set_mario_action(m, ACT_SMW_SPIN_JUMP, 0);
    } else if (m->controller->buttonPressed & (A_BUTTON)) {
        play_sound(SOUND_CUSTOM_SMW_JUMP, m->marioObj->header.gfx.cameraToObject);
        m->vel[1] = SMW_JUMP_FORCE + get_additive_y_vel_for_jumps() + ABS(m->forwardVel) * 0.25f;
        return set_mario_action(m, ACT_SMW_DUCK_JUMP, 0);
    }

    switch (perform_ground_step(m)) {
        case GROUND_STEP_HIT_WALL:
            mario_set_forward_vel(m, 0.0f);
            break;
        case GROUND_STEP_LEFT_GROUND:
            m->vel[1] = 0;
            update_P_speed(m, -10);
            set_mario_action(m, ACT_SMW_DUCK_JUMP, 0);
            break;
    }

    

    // #TODO if not in air, update speed based on slope
    return FALSE;
}

s32 act_SMW_walk(struct MarioState *m) {
    if (m->action == ACT_SMW_SKID) {
        m->particleFlags |= PARTICLE_DUST;
    }

    if ((m->controller->buttonDown & (D_JPAD) || m->controller->stickY < -DEAD_ZONE || m->controller->buttonDown & Z_TRIG)) {
        set_mario_action(m, ACT_SMW_DUCK, 0);
    }

    if (m->controller->buttonDown & (B_BUTTON)) {
        update_P_speed(m, 2);
        if (m->PMeter >= 112) {
            smw_left_right_movement(m, SMW_P_SPEED);
        } else {
            smw_left_right_movement(m, SMW_RUN_SPEED);
        }
    } else {
        update_P_speed(m, -1);
        smw_left_right_movement(m, SMW_WALK_SPEED);
    }

    if (m->controller->buttonPressed & R_TRIG) {
        play_sound(SOUND_CUSTOM_SMW_SPIN, m->marioObj->header.gfx.cameraToObject);
        m->vel[1] = SMW_JUMP_FORCE + get_additive_y_vel_for_jumps() + ABS(m->forwardVel) * 0.25f;
        return set_mario_action(m, ACT_SMW_SPIN_JUMP, 0);
    } else if (m->controller->buttonPressed & (A_BUTTON)) {
        m->vel[1] = SMW_JUMP_FORCE + get_additive_y_vel_for_jumps() + ABS(m->forwardVel) * 0.25f;
        play_sound(SOUND_CUSTOM_SMW_JUMP, m->marioObj->header.gfx.cameraToObject);
        return set_mario_action(m, ACT_SMW_JUMP, 0);
    }

    switch (perform_ground_step(m)) {
        case GROUND_STEP_HIT_WALL:
            mario_set_forward_vel(m, 0.0f);
            break;
        case GROUND_STEP_LEFT_GROUND:
            update_P_speed(m, -10);
            m->vel[1] = 0;
            set_mario_action(m, ACT_SMW_JUMP, 0);
            break;
    }

    // #TODO update speed based on slope
    
    return FALSE;
}

s32 act_SMW_jump(struct MarioState *m) {
    m->flags |= MARIO_JUMPING;
    if (m->controller->buttonDown & (B_BUTTON)) {
        if (m->PMeter >= 112) {
            smw_left_right_movement(m, SMW_P_SPEED);
        } else {
            smw_left_right_movement(m, SMW_RUN_SPEED);
        }
    } else {
        smw_left_right_movement(m, SMW_WALK_SPEED);
    }

    switch (perform_air_step(m, 0)) {
        case AIR_STEP_LANDED:

            if (m->actionArg == 69) { 
                set_mario_action(m, ACT_SMW_TEXT, 0);
            } else if (m->action == ACT_SMW_DUCK_JUMP && 
               (m->controller->buttonDown & (D_JPAD) || m->controller->stickY < -DEAD_ZONE || m->controller->buttonDown & Z_TRIG)) {
                set_mario_action(m, ACT_SMW_DUCK, 0);
            } else {
                set_mario_action(m, ACT_SMW_WALK, 0);
            }
            break;
        case AIR_STEP_HIT_WALL:
            mario_set_forward_vel(m, 0.0f);
            break;
    }
    return FALSE;
}

s32 act_SMW_pipe(struct MarioState *m) {
    m->marioObj->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;
    if (m->actionState == 10) {
        play_sound(SOUND_MENU_ENTER_PIPE, m->marioObj->header.gfx.cameraToObject);
        m->marioObj->header.gfx.pos[1] -= 10;
    }

    if (m->actionState > 10) {
        m->marioObj->header.gfx.pos[1] -= 10;
    }

    if (m->actionState >= 25) {
        if (m->actionArg) {
            m->actionArg--;
            if ((m->actionArg & 0xFFFF) == 0) {
                level_trigger_warp(m, m->actionArg >> 16);
            }
        } else {
            m->pos[0] = m->usedObj->oObjF4->oPosX;
            m->pos[1] = m->usedObj->oObjF4->oPosY+160;
            m->pos[2] = m->usedObj->oObjF4->oPosZ;

            m->marioObj->header.gfx.pos[0] = m->usedObj->oObjF4->oPosX;
            m->marioObj->header.gfx.pos[1] = m->usedObj->oObjF4->oPosY;
            m->marioObj->header.gfx.pos[2] = m->usedObj->oObjF4->oPosZ;
            
            set_mario_action(m, ACT_EXIT_PIPE, 0);
            return FALSE;
        }
    }
    m->actionState += 1;
    return FALSE;
}

s32 act_SMW_death(struct MarioState *m) {
    if (m->actionTimer > 50) {
        m->isDead = TRUE;
        save_file_set_power_up(gCurrSaveFileNum - 1, 0, 0);

        //if (!coop_delete_mario(m)) {
            level_trigger_warp(m, 18);
        //}
    }
    return FALSE;
}

s32 act_SMW_text(struct MarioState *m) {
    return FALSE;
}

s32 act_SMW_star_fall(struct MarioState *m) { 
    m->forwardVel = 0;
    m->vel[0] = 0;
    m->vel[2] = 0;
    if (perform_air_step(m, AIR_STEP_CHECK_LEDGE_GRAB) == AIR_STEP_LANDED) {
        play_mario_landing_sound(m, SOUND_ACTION_TERRAIN_LANDING);
        set_mario_action(m, ACT_SMW_VICTORY, m->actionArg);
    }
    return FALSE;
}

s32 act_SMW_victory(struct MarioState *m) { 
    struct Object *celebStar = NULL;

    if (m->actionState == ACT_STATE_STAR_DANCE_CUTSCENE) {
        switch (++m->actionTimer) {
            case 1:
                celebStar = spawn_object(m->marioObj, MODEL_STAR, bhvCelebrationStar);
                celebStar->oFaceAngleYaw -= 0x4000;

                lower_background_noise(2);
                play_music(SEQ_PLAYER_ENV, SEQ_EVENT_CUTSCENE_COLLECT_STAR, 0);
                break;

            case 42:
                play_sound(SOUND_MARIO_HERE_WE_GO, m->marioObj->header.gfx.cameraToObject);
                break;

            case 80:
                enable_time_stop();
                create_dialog_box_with_response(14);
                m->actionState = ACT_STATE_STAR_DANCE_DO_SAVE;
                break;
        }
    } else if (m->actionState == ACT_STATE_STAR_DANCE_DO_SAVE && gDialogResponse != DIALOG_RESPONSE_NONE) {
        if (gDialogResponse == DIALOG_RESPONSE_YES || gDialogResponse == DIALOG_RESPONSE_IGNORED) {
            save_file_do_save(gCurrSaveFileNum - 1);
        }
        m->actionState = ACT_STATE_STAR_DANCE_RETURN;
    } else if (m->actionState == ACT_STATE_STAR_DANCE_RETURN && is_anim_at_end(m)) {
        disable_time_stop();
        raise_background_noise(2);
        set_mario_action(m, ACT_SMW_WALK, 0);
    }
    return FALSE;
}

s32 mario_execute_custom_action(struct MarioState *m, u8 controlled) {
    s32 cancel = FALSE;

    /* clang-format off */
    if (controlled) {
        switch (m->action) {
            case ACT_SMW_SKID:                  cancel = act_SMW_walk(m);                  break;
            case ACT_SMW_SPIN_JUMP:             cancel = act_SMW_jump(m);                  break;
            case ACT_SMW_JUMP:                  cancel = act_SMW_jump(m);                  break;
            case ACT_SMW_DUCK_JUMP:             cancel = act_SMW_jump(m);                  break;
            case ACT_SMW_WALK:                  cancel = act_SMW_walk(m);                  break;
            case ACT_SMW_DUCK:                  cancel = act_SMW_duck(m);                  break;
            case ACT_SMW_TEXT:                  cancel = act_SMW_text(m);                  break;
            case ACT_SMW_FALL_AFTER_STAR_GRAB:  cancel = act_SMW_star_fall(m);             break;
            case ACT_SMW_VICTORY:               cancel = act_SMW_victory(m);               break;
        }
        
    }

    switch (m->action) {
        case ACT_SMW_DEATH:                     cancel = act_SMW_death(m);                 break;
        case ACT_SMW_PIPE:                      cancel = act_SMW_pipe(m);                  break;
    }
    /* clang-format on */

    if (!cancel && (m->input & INPUT_IN_WATER)) {
        m->particleFlags |= PARTICLE_WAVE_TRAIL;
        m->particleFlags &= ~PARTICLE_DUST;
    }

    return cancel;
}
#undef SMW_WALK_SPEED 
#undef SMW_RUN_SPEED 
#undef SMW_P_SPEED
#undef SMW_JUMP_FORCE
#undef DEAD_ZONE