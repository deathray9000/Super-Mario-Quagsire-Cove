/**
 * Behavior for bhvPiranhaPlant.
 * This controls Piranha Plants, which alternate between sleeping, attacking,
 * and dying, primarily depending on Mario's proximity and interaction state.
 */

/**
 * Reset the Piranha Plant back to a sleeping animation, no matter what state
 * it was in previously, and make it intangible. If Mario is close, transition
 * directly to the sleeping state.
 */
void piranha_plant_act_idle(void) {
    cur_obj_become_intangible();
    cur_obj_init_animation_with_sound(PIRANHA_PLANT_ANIM_SLEEPING);

    /**
     * This call is necessary because a Piranha Plant may enter this state
     * with a scale below 1, which would cause it to appear shrunken. See
     * documentation for, and calls to, piranha_plant_reset_when_far().
     */
    cur_obj_scale(1.0f);

    if (o->oDistanceToMario < 1200.0f) {
        o->oAction = PIRANHA_PLANT_ACT_SLEEPING;
    }
}

/**
 * Check if the player has interacted with the Piranha Plant. If the Piranha
 * Plant was attacked, move it to the dying state. If the player interacted
 * with it through some other means (e.g. by running into it), move it to the
 * woken up state.
 *
 * @return TRUE if the player interacted with the Piranha Plant, FALSE otherwise
 */
s32 piranha_plant_check_interactions(void) {
    s32 i;

    if (o->oInteractStatus & INT_STATUS_INTERACTED) {
        stop_secondary_music(50);
        if (o->oInteractStatus & INT_STATUS_WAS_ATTACKED) {
            cur_obj_play_sound_2(SOUND_OBJ2_PIRANHA_PLANT_DYING);

            // Spawn 20 intangible purple particles that quickly dissipate.
            for (i = 0; i < 20; i++) {
                spawn_object(o, MODEL_PURPLE_MARBLE, bhvPurpleParticle);
            }
            o->oAction = PIRANHA_PLANT_ACT_ATTACKED;
        } else {
            o->oAction = PIRANHA_PLANT_ACT_WOKEN_UP;
        }
        o->oInteractStatus = INT_STATUS_NONE;
    } else {
        return FALSE;
    }

    return TRUE;
}

#define PIRANHA_PLANT_SLEEP_MUSIC_PLAYING 0

/**
 * Make the Piranha Plant sleep. If Mario moves too quickly, move the Piranha
 * Plant to the woken up state. Otherwise, play the lullaby if Mario is close
 * enough. If the player interacts with the Piranha Plant, it will act according
 * to piranha_plant_check_interactions().
 */
void piranha_plant_act_sleeping(void) {
    cur_obj_become_tangible();
    o->oInteractType = INTERACT_BOUNCE_TOP;

    cur_obj_init_animation_with_sound(PIRANHA_PLANT_ANIM_SLEEPING);

    cur_obj_set_hitbox_radius_and_height(250.0f, 200.0f);
    cur_obj_set_hurtbox_radius_and_height(150.0f, 100.0f);

    /**
     * Make Piranha Plants harmless, but tangible, while they sleep.
     */
    o->oDamageOrCoinValue = 0;

    if (o->oDistanceToMario < 400.0f) {
        if (mario_moving_fast_enough_to_make_piranha_plant_bite()) {
            o->oAction = PIRANHA_PLANT_ACT_WOKEN_UP;
        }
    } else if (o->oDistanceToMario < 1000.0f) {
        play_secondary_music(SEQ_EVENT_PIRANHA_PLANT, 0, 255, 1000);
        o->oPiranhaPlantSleepMusicState = PIRANHA_PLANT_SLEEP_MUSIC_PLAYING;
    } else if (o->oPiranhaPlantSleepMusicState == PIRANHA_PLANT_SLEEP_MUSIC_PLAYING) {
        o->oPiranhaPlantSleepMusicState++;
        stop_secondary_music(50);
    }
    piranha_plant_check_interactions();
}

/**
 * Make the Piranha Plant wake up and stop the lullaby. After a few frames, move
 * to the biting state.
 */
void piranha_plant_act_woken_up(void) {
    /**
     * Make Piranha Plants damage the player while awake.
     */
    o->oDamageOrCoinValue = 3;
    if (o->oTimer == 0) {
        stop_secondary_music(50);
    }

    if (!piranha_plant_check_interactions() && o->oTimer > 10) {
        o->oAction = PIRANHA_PLANT_ACT_BITING;
    }
}

/**
 * If the Piranha Plant is far from the player, move it to the idle state.
 *
 * This fixes an issue where a player where could unload a Piranha Plant
 * during another state, then re-enter its activation radius to resume it from
 * that state.
 *
 * For example, if one exits the Piranha Plant's activation radius while it is
 * dying:
 *   - In the JP version, it will continue its animation where it left off,
 *     leading to a potentially confusing player experience if the player had
 *     been away for a long time.
 *   - In the US version, it will respawn intact when you re-enter its
 *     activation radius. One could then kill it again to receive its blue coin.
 */
void piranha_plant_reset_when_far(void) {
    if (o->activeFlags & ACTIVE_FLAG_FAR_AWAY) {
        o->oAction = PIRANHA_PLANT_ACT_IDLE;
    }
}

/**
 * Make the Piranha Plant play a falling-over animation and move to the dying
 * state.
 */
void piranha_plant_attacked(void) {
    cur_obj_become_intangible();
    cur_obj_init_animation_with_sound(PIRANHA_PLANT_ANIM_FALLING_OVER);
    o->oInteractStatus = INT_STATUS_NONE;
    if (cur_obj_check_if_near_animation_end()) {
        o->oAction = PIRANHA_PLANT_ACT_SHRINK_AND_DIE;
    }
    piranha_plant_reset_when_far(); // see this function's comment
}

/**
 * Make the Piranha Plant play a sound of defeat, shrink, and then spawn a
 * blue coin. Then, move it to the waiting state.
 */
void piranha_plant_act_shrink_and_die(void) {
    if (o->oTimer == 0) {
        cur_obj_play_sound_2(SOUND_OBJ_ENEMY_DEFEAT_SHRINK);
        o->oPiranhaPlantScale = 1.0f;
    }

    /**
     * Note that this if-statement occurs unconditionally after the above if-
     * statement. Since the Piranha Plant's scale is 1.0f by default, perhaps
     * this was intentional. However, it is equally plausible that the
     * programmers meant to type `else if`.
     */
    if (o->oPiranhaPlantScale > 0.0f) {
        // Shrink by 0.04f per frame.
        o->oPiranhaPlantScale = o->oPiranhaPlantScale - 0.04f;
    } else {
        o->oPiranhaPlantScale = 0.0f;
        cur_obj_spawn_loot_blue_coin();
        o->oAction = PIRANHA_PLANT_ACT_WAIT_TO_RESPAWN;
    }

    cur_obj_scale(o->oPiranhaPlantScale);

    piranha_plant_reset_when_far(); // see this function's comment
}

/**
 * Wait for Mario to move far away, then respawn the Piranha Plant.
 */
void piranha_plant_act_wait_to_respawn(void) {
    if (FALSE) {
        o->oAction = PIRANHA_PLANT_ACT_RESPAWN;
    }
}

/**
 * Set the Piranha Plant to the sleeping animation and unshrink it. When fully-
 * grown, set it to the idle state.
 */
void piranha_plant_act_respawn(void) {
    cur_obj_init_animation_with_sound(PIRANHA_PLANT_ANIM_SLEEPING);
    if (o->oTimer == 0) {
        o->oPiranhaPlantScale = 0.3f;
    }

    /**
     * This state only occurs after PIRANHA_PLANT_ACT_WAIT_TO_RESPAWN, which
     * in turn only occurs after PIRANHA_PLANT_ACT_SHRINK_AND_DIE. The latter
     * sets the Piranha Plant's scale to 0, therefore the Piranha Plant will
     * grow from the ground unconditionally when in this state.
     */
    if (o->oPiranhaPlantScale < 1.0f) {
        // Grow by 0.02f per frame.
        o->oPiranhaPlantScale += 0.02f;
    } else {
        o->oPiranhaPlantScale = 1.0f;
        o->oAction = PIRANHA_PLANT_ACT_IDLE;
    }
    cur_obj_scale(o->oPiranhaPlantScale);
}

/**
 * The frames of the Piranha Plant's biting animation on which to play a bite
 * sound.
 */
static s8 sPiranhaPlantBiteSoundFrames[] = { 12, 28, 50, 64, -1 };

/**
 * Make the Piranha Plant bite in the direction of the player. If the player
 * moves far away, move it to the stopped biting state. If the player is wearing
 * the Metal Cap and touches the Piranha Plant while it is attacking, the
 * Piranha Plant will move to the attacked state.
 */
void piranha_plant_act_biting(void) {
    s32 animFrame = o->header.gfx.animInfo.animFrame;

    cur_obj_become_tangible();

    o->oInteractType = INTERACT_DAMAGE;

    cur_obj_init_animation_with_sound(PIRANHA_PLANT_ANIM_BITE);

    cur_obj_set_hitbox_radius_and_height(150.0f, 100.0f);
    cur_obj_set_hurtbox_radius_and_height(150.0f, 100.0f);

    // Play a bite sound effect on certain frames.
    if (is_item_in_array(animFrame, sPiranhaPlantBiteSoundFrames)) {
        cur_obj_play_sound_2(SOUND_OBJ2_PIRANHA_PLANT_BITE);
    }

    // Move to face the player.
    o->oMoveAngleYaw = approach_s16_symmetric(o->oMoveAngleYaw, o->oAngleToMario, 0x400);

    if (o->oDistanceToMario > 500.0f && cur_obj_check_if_near_animation_end()) {
        o->oAction = PIRANHA_PLANT_ACT_STOPPED_BITING;
    }

    // If the player is wearing the Metal Cap and interacts with the Piranha
    // Plant, the Piranha Plant will die.
    if ((o->oInteractStatus & INT_STATUS_INTERACTED) && (gMarioState->flags & MARIO_METAL_CAP)) {
        o->oAction = PIRANHA_PLANT_ACT_ATTACKED;
    }
}

/**
 * Check whether the player is moving fast enough to cause the Piranha Plant to
 * start biting.
 *
 * This is called from both the "stopped biting" state and the "sleeping" state.
 */
s32 mario_moving_fast_enough_to_make_piranha_plant_bite(void) {
    return gMarioState->vel[1] > 10.0f || gMarioState->forwardVel > 10.0f;
}

/**
 * Make the Piranha Plant quickly nod to indicate that it has stopped biting.
 * If the player has drawn closer during this short animation, make the Piranha
 * Plant start biting again. Otherwise, make it go back to sleep.
 */
void piranha_plant_act_stopped_biting(void) {
    cur_obj_become_intangible();
    cur_obj_init_animation_with_sound(PIRANHA_PLANT_ANIM_STOP_BITING);

    if (cur_obj_check_if_near_animation_end()) {
        o->oAction = PIRANHA_PLANT_ACT_SLEEPING;
    }

    /**
     * Note that this state only occurs initially when the player goes further
     * than 500.0f units from the Piranha Plant while it is biting. This if-
     * statement activates only when the player has drawn within 400.0f units
     * of the Piranha Plant during the short time the Piranha Plant's nod
     * animation plays.
     */
    if (o->oDistanceToMario < 400.0f && mario_moving_fast_enough_to_make_piranha_plant_bite()) {
        o->oAction = PIRANHA_PLANT_ACT_BITING;
    }
}

/**
 * Table of functions corresponding to the actions the Piranha Plant can take.
 */
ObjActionFunc TablePiranhaPlantActions[] = {
    piranha_plant_act_idle,            // PIRANHA_PLANT_ACT_IDLE,
    piranha_plant_act_sleeping,        // PIRANHA_PLANT_ACT_SLEEPING,
    piranha_plant_act_biting,          // PIRANHA_PLANT_ACT_BITING,
    piranha_plant_act_woken_up,        // PIRANHA_PLANT_ACT_WOKEN_UP,
    piranha_plant_act_stopped_biting,  // PIRANHA_PLANT_ACT_STOPPED_BITING,
    piranha_plant_attacked,            // PIRANHA_PLANT_ATTACKED,
    piranha_plant_act_shrink_and_die,  // PIRANHA_PLANT_ACT_SHRINK_AND_DIE,
    piranha_plant_act_wait_to_respawn, // PIRANHA_PLANT_ACT_WAIT_TO_RESPAWN,
    piranha_plant_act_respawn,         // PIRANHA_PLANT_ACT_RESPAWN
};

/**
 * Main loop for bhvPiranhaPlant.
 */
void bhv_piranha_plant_loop(void) {
    cur_obj_call_action_function(TablePiranhaPlantActions);
#ifdef ENABLE_VANILLA_LEVEL_SPECIFIC_CHECKS
    // In WF, hide all Piranha Plants once high enough up.
    if (gCurrLevelNum == LEVEL_WF) {
        COND_BIT((gMarioObject->oPosY > 3400.0f), o->header.gfx.node.flags, GRAPH_RENDER_INVISIBLE);
    }

#endif
    o->oInteractStatus = INT_STATUS_NONE;
}

static struct ObjectHitbox sPlanter = {
    /* interactType:      */ INTERACT_DAMAGE,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 2,
    /* health:            */ 0,
    /* numLootCoins:      */ 2,
    /* radius:            */ 100,
    /* height:            */ 80,
    /* hurtboxRadius:     */ 120,
    /* hurtboxHeight:     */ 90,
};

void bhv_normal_piranha_init(void) {
    obj_set_hitbox(o, &sPlanter);
    cur_obj_init_animation(0);
};

void bhv_normal_piranha_loop(void) {
    s16 Turn = o->oFaceAngleYaw - (o->oAngleToMario + 0x4000);
    s8 Timer = o->oVelY;

    if (o->oVelX == 1) {
        switch (Timer) {
            case 0:
                cur_obj_init_animation(1);
                break;
            case 10:
                cur_obj_play_sound_2(SOUND_OBJ2_PIRANHA_PLANT_BITE);
                break;
            case 21:
                cur_obj_play_sound_2(SOUND_OBJ2_PIRANHA_PLANT_BITE);
                cur_obj_init_animation(2);
                break;
            case 28:
                o->oPosX -= 18 * coss(o->oFaceAngleYaw);
                o->oPosZ += 18 * sins(o->oFaceAngleYaw);
                break;
            case 30:
                o->oPosX -= 18 * coss(o->oFaceAngleYaw);
                o->oPosZ += 18 * sins(o->oFaceAngleYaw);
                break;
            case 32:
                o->oPosX -= 18 * coss(o->oFaceAngleYaw);
                o->oPosZ += 18 * sins(o->oFaceAngleYaw);
                break;
            case 34:
                o->oPosX -= 18 * coss(o->oFaceAngleYaw);
                o->oPosZ += 18 * sins(o->oFaceAngleYaw);
                break;
            case 36:
                cur_obj_play_sound_2(SOUND_OBJ2_PIRANHA_PLANT_BITE);
                break;
            case 53:
                o->oVelX = 1;
                cur_obj_init_animation(3);
                o->oPosX = o->oHomeX;
                o->oPosZ = o->oHomeZ;
                break;
            case 74:
                o->oVelX = 0;
                o->oVelY = 0;
                cur_obj_init_animation(0);
        }
        o->oVelY++;
    } else if (o->oVelX == 2) {
        if (o->oTimer <= 3) {
            o->header.gfx.scale[1] -= 0.2;
        }
        o->oVelY++;

        if (o->oVelY == 20) {
            obj_spawn_loot_yellow_coins(o, o->oNumLootCoins, 5.0f);
            obj_mark_for_deletion(o);
        }
    } else if (o->oVelX == 3) {
        if (o->oTimer >= 40) {
            o->header.gfx.scale[0] -= 0.04;
            o->header.gfx.scale[1] -= 0.04;
            o->header.gfx.scale[2] -= 0.04;
        }

        if (o->oTimer == 40) {
            cur_obj_play_sound_2(SOUND_OBJ_ENEMY_DEFEAT_SHRINK);
        }

        if (o->oTimer == 65) {
            obj_spawn_loot_yellow_coins(o, o->oNumLootCoins, 5.0f);
            obj_mark_for_deletion(o);
        }
    } else {
        if (o->oDistanceToMario < 800.0f) {
            o->oVelY += 1;

            if(Turn < -600) {
                o->oFaceAngleYaw += 750;
            } else if(Turn > 600) {
                o->oFaceAngleYaw -= 750;
            } else {
                o->oFaceAngleYaw = o->oAngleToMario + 0x4000;
            }

            if (o->oVelY >= 120 && Turn >= -0x1000 && Turn <= 0x1000) {
                o->oVelX = 1;
                o->oVelY = 0;
            }
        } else {
            o->oVelY = 0;
        }
    }

    if (o->oInteractStatus & INT_STATUS_HIT_MINE) {
        cur_obj_init_animation(4);
        o->oVelX = 3;
        o->oVelY = 0;
        o->oTimer = 0;
        o->oInteractStatus = 1;
    } else if (o->oInteractStatus & INT_STATUS_WAS_ATTACKED) {
        o->oVelX = 2;
        o->oVelY = 0;
        o->oTimer = 0;
        o->oInteractStatus = 1;
    } else if (o->oInteractStatus == 1) {
        o->oInteractStatus = 1;
    } else {
        o->oInteractStatus = 0;
    }
}