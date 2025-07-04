// king_bobomb.inc.c

// Copy of geo_update_projectile_pos_from_parent

/*Requirements*/
/*
-start: stand in middle untill talked to
-Next: jump back x amount
- attack: throw 3 volleys of 3-4 bubbombs twards mario
***sub requirements bobombs: explode on contact with ground, mario can hit midair to throw back to king
- attack 2: throw big bomb
***sub requirement: mario can punch bubomb back to king bob
if hit by big bomb get stunned and able to be thrown once thrown jump to random pos
else jump to random location
return to attack 1
*/
Bool8 FindNearestBomb(){
    f32 dist;
    struct Object *mine = cur_obj_find_nearest_object_with_behavior(bhvBomb, &dist);
    if(mine == NULL){
        return FALSE;
    }
    if(dist < 200 && mine->oInteractStatus == 2){
        mine->oInteractStatus = 1;
        return TRUE;        
    }
    return FALSE;
}


Gfx *geo_update_held_mario_pos(s32 callContext, UNUSED struct GraphNode *node, Mat4 mtx) {
    if (callContext == GEO_CONTEXT_RENDER) {
        struct Object *obj = (struct Object *) gCurGraphNodeObject;
        if (obj->prevObj != NULL) {
            obj_update_pos_from_parent_transformation(mtx, obj->prevObj);
            obj_set_gfx_pos_from_pos(obj->prevObj);
        }
    }

    return NULL;
}

void bhv_bobomb_anchor_mario_loop(void) {
    common_anchor_mario_behavior(50.0f, 50.0f, INT_STATUS_MARIO_DROPPED_BY_OBJ);
}

void king_bobomb_act_inactive(void) { // act 0
    o->oForwardVel = 0.0f;
    o->oVelY = 0.0f;

    if (o->oSubAction == KING_BOBOMB_SUB_ACT_INACTIVE_INIT) {
        cur_obj_become_intangible();
        gSecondCameraFocus = o;
        cur_obj_init_animation_with_sound(KING_BOBOMB_ANIM_IDLE);
        cur_obj_set_pos_to_home();
        o->oHealth = 3;

        if (cur_obj_can_mario_activate_textbox_2(500.0f, 100.0f)) {
            o->oSubAction++;
            seq_player_lower_volume(SEQ_PLAYER_LEVEL, 60, 40);
        }
    } else if (cur_obj_update_dialog_with_cutscene(MARIO_DIALOG_LOOK_UP,
        DIALOG_FLAG_TURN_TO_MARIO, CUTSCENE_DIALOG, DIALOG_017)) {
        o->oAction = KING_BOBOMB_ACT_ACTIVE;
        o->oFlags |= OBJ_FLAG_HOLDABLE;
    }
}

s32 mario_is_far_below_object(f32 min) {
    return min < o->oPosY - gMarioObject->oPosY;
}

void king_bobomb_act_active(void) { // act 2
    cur_obj_become_tangible();
    if (cur_obj_check_grabbed_mario()) {
        o->oAction = KING_BOBOMB_ACT_GRABBED_MARIO;
    }

    o->oAction = KING_BOBOMB_ACT_JUMP;
    /*
    if (o->oPosY - o->oHomeY < -100.0f) { // Thrown off hill
        o->oAction = KING_BOBOMB_ACT_RETURN_HOME;
        cur_obj_become_intangible();
    }

    if (o->oKingBobombShouldStomp == 0) {
        if (cur_obj_check_anim_frame(15)) {
            cur_obj_shake_screen(SHAKE_POS_SMALL);
        }

        if (cur_obj_init_animation_and_check_if_near_end(KING_BOBOMB_ANIM_STOMP)) {
            o->oKingBobombShouldStomp++;
        }
    } else {
        if (o->oKingBobombShouldStomp == 1) {
            cur_obj_init_animation_and_anim_frame(KING_BOBOMB_ANIM_WALKING, 7);
            o->oKingBobombShouldStomp = 2;
        } else {
            cur_obj_init_animation_with_sound(KING_BOBOMB_ANIM_WALKING);
        }

        if (o->oKingBobombPlayerGrabEscapeCooldown == 0) {
            o->oForwardVel = 3.0f;
            cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x100);
        } else {
            o->oForwardVel = 0.0f;
            o->oKingBobombPlayerGrabEscapeCooldown--;
        }
    }

    if (cur_obj_check_grabbed_mario()) {
        o->oAction = KING_BOBOMB_ACT_GRABBED_MARIO;
    }

    if (mario_is_far_below_object(1200.0f)) {
        o->oAction = KING_BOBOMB_ACT_INACTIVE;
        stop_background_music(SEQUENCE_ARGS(4, SEQ_EVENT_BOSS));
    }
    */
    
}

void king_bobomb_act_grabbed_mario(void) { // act 3
    if (o->oSubAction == KING_BOBOMB_SUB_ACT_GRABBED_MARIO_GRAB) {
        o->oForwardVel = 0.0f;
        o->oKingBobombStationaryTimer = 0;
        o->oKingBobombPlayerGrabEscapeActions = 0;

        if (o->oTimer == 0) {
            cur_obj_play_sound_2(SOUND_OBJ_GRAB_MARIO);
        }

        if (cur_obj_init_animation_and_check_if_near_end(KING_BOBOMB_ANIM_GRAB_MARIO)) {
            o->oSubAction++;
            cur_obj_init_animation_and_anim_frame(KING_BOBOMB_ANIM_HOLDING_MARIO, 0);
        }
    } else if (o->oSubAction == KING_BOBOMB_SUB_ACT_GRABBED_MARIO_HOLDING) {
        cur_obj_init_animation_with_sound(KING_BOBOMB_ANIM_HOLDING_MARIO);
        o->oKingBobombPlayerGrabEscapeActions += player_performed_grab_escape_action();

        print_debug_bottom_up("%d", o->oKingBobombPlayerGrabEscapeActions);

        if (o->oKingBobombPlayerGrabEscapeActions > 10) {
            o->oKingBobombHoldingMarioState = HELD_DROPPED;
            o->oAction = KING_BOBOMB_ACT_ACTIVE;
            o->oKingBobombPlayerGrabEscapeCooldown = 35;
            o->oInteractStatus &= ~(INT_STATUS_GRABBED_MARIO);
        } else {
            o->oForwardVel = 3.0f;

            if (o->oKingBobombStationaryTimer > 20 && cur_obj_rotate_yaw_toward(0x0, 0x400)) {
                o->oSubAction++;
                cur_obj_init_animation_and_anim_frame(KING_BOBOMB_ANIM_THROW_MARIO, 22);
            }
        }

        o->oKingBobombStationaryTimer++;
    } else {
        cur_obj_init_animation_with_sound(KING_BOBOMB_ANIM_THROW_MARIO);

        if (cur_obj_check_anim_frame(31)) {
            o->oKingBobombHoldingMarioState = HELD_THROWN;
            cur_obj_play_sound_2(SOUND_OBJ_RELEASE_MARIO);
        } else if (cur_obj_check_if_near_animation_end()) {
            o->oAction = KING_BOBOMB_ACT_ACTIVATE;
            o->oInteractStatus &= ~(INT_STATUS_GRABBED_MARIO);
        }
    }
}

void king_bobomb_act_activate(void) { // act 1
    o->oForwardVel = 0.0f;
    o->oVelY = 0.0f;

    cur_obj_init_animation_with_sound(KING_BOBOMB_ANIM_WALKING);

    //o->oMoveAngleYaw = approach_s16_symmetric(o->oMoveAngleYaw, o->oAngleToMario, 0x200);

    if (o->oDistanceToMario < 2500.0f) {
        o->oAction = KING_BOBOMB_ACT_THROW_BOMBS;
    }

    if (mario_is_far_below_object(1200.0f)) {
        o->oAction = KING_BOBOMB_ACT_INACTIVE;
        stop_background_music(SEQUENCE_ARGS(4, SEQ_EVENT_BOSS));
    }
}

void king_bobomb_act_hit_ground(void) { // act 6
    if (o->oSubAction == KING_BOBOMB_SUB_ACT_HIT_GROUND_HIT) {
        if (o->oTimer == 0) {
            o->oKingBobombStationaryTimer = 0;

            cur_obj_play_sound_2(SOUND_OBJ_KING_BOBOMB);
            cur_obj_play_sound_2(SOUND_OBJ2_KING_BOBOMB_DAMAGE);
            cur_obj_shake_screen(SHAKE_POS_SMALL);
            spawn_mist_particles_variable(0, 0, 100.0f);

            o->oInteractType = INTERACT_DAMAGE;

            cur_obj_become_tangible();
        }

        if (cur_obj_init_animation_and_check_if_near_end(KING_BOBOMB_ANIM_HIT_GROUND)) {
            o->oKingBobombStationaryTimer++;
        }

        if (o->oKingBobombStationaryTimer > 3) {
            o->oSubAction++; // KING_BOBOMB_SUB_ACT_HIT_GROUND_STAND_UP
        }
    } else if (o->oSubAction == KING_BOBOMB_SUB_ACT_HIT_GROUND_STAND_UP) {
        if (cur_obj_init_animation_and_check_if_near_end(KING_BOBOMB_ANIM_STAND_UP)) {
            o->oSubAction++; // KING_BOBOMB_SUB_ACT_HIT_GROUND_START_WALKING
            o->oInteractType = INTERACT_GRABBABLE;

            cur_obj_become_intangible();
        }
    } else {
        cur_obj_init_animation_with_sound(KING_BOBOMB_ANIM_IDLE);

        if (cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x800)) {
            o->oAction = KING_BOBOMB_ACT_ACTIVE;
        }
    }
}

void king_bobomb_act_death(void) { // act 7
    cur_obj_init_animation_with_sound(KING_BOBOMB_ANIM_HIT_GROUND);
    if (cur_obj_update_dialog_with_cutscene(MARIO_DIALOG_LOOK_UP,
        DIALOG_FLAG_TEXT_DEFAULT, CUTSCENE_DIALOG, DIALOG_116)) {
        create_sound_spawner(SOUND_OBJ_KING_WHOMP_DEATH);

        cur_obj_hide();
        cur_obj_become_intangible();

        spawn_mist_particles_variable(0, 0, 200.0f);
        spawn_triangle_break_particles(20, MODEL_DIRT_ANIMATION, 3.0f, TINY_DIRT_PARTICLE_ANIM_STATE_YELLOW);
        cur_obj_shake_screen(SHAKE_POS_SMALL);

        cur_obj_spawn_star_at_y_offset(2000.0f, 4500.0f, -4500.0f, 200.0f);

        o->oAction = KING_BOBOMB_ACT_STOP_MUSIC;
    }
}

void king_bobomb_act_stop_music(void) { // act 8
    if (o->oTimer == 60) {
        stop_background_music(SEQUENCE_ARGS(4, SEQ_EVENT_BOSS));
    }
}

void king_bobomb_act_jump(void){
    int radius = 1500;
    if(o->oTimer == 0){
        o->oKingBobombOldPosX = o->oPosX;
        o->oKingBobombOldPosZ = o->oPosZ;
        
    }
    if (cur_obj_check_grabbed_mario()) {
        cur_obj_init_animation_and_extend_if_at_end(KING_BOBOMB_ANIM_JUMP);
        o->oAction = KING_BOBOMB_ACT_GRABBED_MARIO;
    }
    
    o->oPosX = (o->oKingBobombOldPosX*(1-2*(o->oTimer/100.0f)))+(o->oHomeX + sinf(o->oBuoyancy)*radius)*2*(o->oTimer/100.0f);
    o->oPosZ = (o->oKingBobombOldPosZ*(1-2*(o->oTimer/100.0f)))+(o->oHomeZ + cosf(o->oBuoyancy)*radius)*2*(o->oTimer/100.0f);
    o->oPosY = o->oHomeY + (25-((0.2 * o->oTimer-5)*(0.2 * o->oTimer-5)))*20;

    if(o->oTimer == 50){
        o->oAction = KING_BOBOMB_ACT_THROW_BOMBS;
        cur_obj_init_animation_with_sound(KING_BOBOMB_ANIM_T_POSE);
    }
    
}

void king_bobomb_act_throw_bombs(void){
    o->oMoveAngleYaw = o->oAngleToMario;
    if (o->oTimer == 30 || o->oTimer == 60 || o->oTimer == 90){
        cur_obj_init_animation_and_extend_if_at_end(KING_BOBOMB_ANIM_THROW_MARIO);
        struct Object *bomb1 = spawn_object(o, MODEL_BLACK_BOBOMB,bhvBomb);
        struct Object *bomb2 = spawn_object(o, MODEL_BLACK_BOBOMB,bhvBomb);
        struct Object *bomb3 = spawn_object(o, MODEL_BLACK_BOBOMB,bhvBomb);
        bomb1->oMoveAngleYaw = o->oMoveAngleYaw - DEGREES(30);
        bomb2->oMoveAngleYaw = o->oMoveAngleYaw;
        bomb3->oMoveAngleYaw = o->oMoveAngleYaw + DEGREES(30);
        
    } else if (o->oTimer == 120){
        struct Object *bomb4 = spawn_object(o, MODEL_BLACK_BOBOMB,bhvBomb);
        bomb4->oBehParams = 1;
    } else if (o->oTimer == 280) {
        o->oBuoyancy = o->oPosX+o->oPosZ;
        o->oAction = KING_BOBOMB_ACT_JUMP;
    }
    if(o->oDistanceToMario < 500){
        o->oBuoyancy += 3;
        o->oAction = KING_BOBOMB_ACT_JUMP;
    }
    if (cur_obj_check_grabbed_mario()) {
        o->oAction = KING_BOBOMB_ACT_GRABBED_MARIO;
    }

}

void king_bobomb_act_been_thrown(void) { // act 4
    if (o->oPosY - o->oHomeY > -100.0f) { // not thrown off hill
        if (o->oMoveFlags & OBJ_MOVE_LANDED) {
            o->oHealth--;

            o->oForwardVel = 0.0f;
            o->oVelY = 0.0f;

            cur_obj_play_sound_2(SOUND_OBJ_KING_BOBOMB);

            o->oAction = o->oHealth ? KING_BOBOMB_ACT_HIT_GROUND : KING_BOBOMB_ACT_DEATH;
        }
    } else if (o->oSubAction == KING_BOBOMB_SUB_ACT_THROWN_FALL) {
        if (o->oMoveFlags & OBJ_MOVE_ON_GROUND) {
            o->oForwardVel = 0.0f;
            o->oVelY = 0.0f;

            o->oSubAction++; // KING_BOBOMB_SUB_ACT_THROWN_STAND_UP
        } else if (o->oMoveFlags & OBJ_MOVE_LANDED) {
            cur_obj_play_sound_2(SOUND_OBJ_KING_BOBOMB);
        }
    } else {
        if (cur_obj_init_animation_and_check_if_near_end(10)) {
            o->oAction = KING_BOBOMB_ACT_RETURN_HOME; // Go back to top of hill
        }

        o->oSubAction++; // KING_BOBOMB_SUB_ACT_THROWN_END
    }
}

void king_bobomb_act_return_home(void) { // act 5
    switch (o->oSubAction) {
        case KING_BOBOMB_SUB_ACT_RETURN_HOME_JUMP:
            if (o->oTimer == 0) {
                cur_obj_play_sound_2(SOUND_OBJ_KING_BOBOMB_JUMP);
            }

            o->oKingBobombIsJumping = TRUE;

            cur_obj_init_animation_and_extend_if_at_end(KING_BOBOMB_ANIM_JUMP);
            o->oMoveAngleYaw = cur_obj_angle_to_home();

            if (o->oPosY < o->oHomeY) {
                o->oVelY = 100.0f;
            } else {
                arc_to_goal_pos(&o->oHomeX, &o->oPosVec, 100.0f, -4.0f);
                o->oSubAction++; // KING_BOBOMB_SUB_ACT_RETURN_HOME_LANDING
            }
            break;

        case KING_BOBOMB_SUB_ACT_RETURN_HOME_LANDING:
            cur_obj_init_animation_and_extend_if_at_end(KING_BOBOMB_ANIM_JUMP);

            if (o->oVelY < 0 && o->oPosY < o->oHomeY) {
                o->oPosY = o->oHomeY;
                o->oVelY = 0;
                o->oForwardVel = 0;
                o->oGravity = -4.0f;

                o->oKingBobombIsJumping = FALSE;

                cur_obj_init_animation_with_sound(KING_BOBOMB_ANIM_T_POSE);
                cur_obj_play_sound_2(SOUND_OBJ_KING_BOBOMB);
                cur_obj_shake_screen(SHAKE_POS_SMALL);

                o->oSubAction++; // KING_BOBOMB_SUB_ACT_RETURN_HOME_LANDING_END
            }
            break;

        case KING_BOBOMB_SUB_ACT_RETURN_HOME_LANDING_END:
            if (cur_obj_init_animation_and_check_if_near_end(KING_BOBOMB_ANIM_T_POSE)) {
                o->oSubAction++; // KING_BOBOMB_SUB_ACT_RETURN_HOME_WAIT_FOR_DIALOG
            }
            break;

        case KING_BOBOMB_SUB_ACT_RETURN_HOME_WAIT_FOR_DIALOG:
            if (mario_is_far_below_object(1200.0f)) {
                o->oAction = KING_BOBOMB_ACT_INACTIVE;
                stop_background_music(SEQUENCE_ARGS(4, SEQ_EVENT_BOSS));
            }

            if (cur_obj_can_mario_activate_textbox_2(500.0f, 100.0f)) {
                o->oSubAction++; // KING_BOBOMB_SUB_ACT_RETURN_HOME_DIALOG
            }
            break;

        case KING_BOBOMB_SUB_ACT_RETURN_HOME_DIALOG:
            if (cur_obj_update_dialog_with_cutscene(MARIO_DIALOG_LOOK_UP,
                DIALOG_FLAG_TURN_TO_MARIO, CUTSCENE_DIALOG, DIALOG_128)) {
                o->oAction = KING_BOBOMB_ACT_ACTIVE;
            }
            break;
    }
}

ObjActionFunc sKingBobombActions[] = {
    king_bobomb_act_inactive,
    king_bobomb_act_activate,
    king_bobomb_act_active,
    king_bobomb_act_grabbed_mario,
    king_bobomb_act_been_thrown,
    king_bobomb_act_return_home,
    king_bobomb_act_hit_ground,
    king_bobomb_act_death,
    king_bobomb_act_stop_music,
    king_bobomb_act_throw_bombs,
    king_bobomb_act_jump
};

struct SoundState sKingBobombSoundStates[] = {
    { 0, 0, 0, NO_SOUND },
    { 1, 1, 20, SOUND_OBJ_KING_BOBOMB_POUNDING1_HIGHPRIO },
    { 0, 0, 0, NO_SOUND },
    { 0, 0, 0, NO_SOUND },
    { 1, 15, -1, SOUND_OBJ_KING_BOBOMB_POUNDING1_HIGHPRIO },
    { 0, 0, 0, NO_SOUND },
    { 0, 0, 0, NO_SOUND },
    { 0, 0, 0, NO_SOUND },
    { 0, 0, 0, NO_SOUND },
    { 1, 33, -1, SOUND_OBJ_KING_BOBOMB_POUNDING1_HIGHPRIO },
    { 0, 0, 0, NO_SOUND },
    { 1, 1, 15, SOUND_OBJ_KING_BOBOMB_POUNDING1_HIGHPRIO },
};

void king_bobomb_move(void) {
    cur_obj_call_action_function(sKingBobombActions);

    if(FindNearestBomb()){
        o->oHealth--;
        o->oAction = o->oHealth ? KING_BOBOMB_ACT_HIT_GROUND : KING_BOBOMB_ACT_DEATH;
    }
    // cur_obj_update_floor_and_walls();

    // if (!o->oKingBobombIsJumping) {
    //     cur_obj_move_standard(-78);
    // } else {
    //     cur_obj_move_using_fvel_and_gravity();
    // }

    // cur_obj_call_action_function(sKingBobombActions);
    // exec_anim_sound_state(sKingBobombSoundStates);

    if (o->oDistanceToMario < 5000.0f) { //! oDrawingDistance?
        cur_obj_enable_rendering();
    } else {
        cur_obj_disable_rendering();
    }
}

void bhv_king_bobomb_loop(void) {
    //o->oInteractionSubtype |= INT_SUBTYPE_GRABS_MARIO;
    switch (o->oHeldState) {
        case HELD_FREE:

            king_bobomb_move();
            break;
        case HELD_HELD:
            cur_obj_unrender_set_action_and_anim(6, 1);
            break;
        case HELD_THROWN:
            o->oAction = o->oHealth ? KING_BOBOMB_ACT_HIT_GROUND : KING_BOBOMB_ACT_DEATH;
            break;
        case HELD_DROPPED:
            cur_obj_get_thrown_or_placed(20.0f, 50.0f, 4);
            cur_obj_become_intangible();
            o->oPosY += 20.0f;
            break;
    }

    o->oInteractStatus = INT_STATUS_NONE;
    curr_obj_random_blink(&o->oKingBobombBlinkTimer);
}
