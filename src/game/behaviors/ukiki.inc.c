
/**
 * @file Contains behavior for the ukiki objects.
 *
 * Cap ukiki is the ukiki that steals Mario's cap.
 * Cage ukiki is the ukiki that triggers the cage star.
 */

/**
 * Sets the cap ukiki to its home if Mario is far away
 * or makes him wait to respawn if in water.
 */
void handle_cap_ukiki_reset(void) {
    if (o->oBehParams2ndByte == UKIKI_BP_CAP) {
        if (cur_obj_mario_far_away()) {
            cur_obj_set_pos_to_home_and_stop();
            o->oAction = UKIKI_ACT_IDLE;
        } else if (o->oMoveFlags & OBJ_MOVE_MASK_IN_WATER) {
            o->oAction = UKIKI_ACT_WAIT_TO_RESPAWN;
        }
    }
}

/**
 * Returns TRUE if Mario has his cap and ukiki is
 * the cap ukiki.
 */
s32 is_cap_ukiki_and_mario_has_normal_cap_on_head(void) {
    return o->oBehParams2ndByte == UKIKI_BP_CAP && does_mario_have_normal_cap_on_head(gMarioState);
}

/**
 * Unused copy of geo_update_projectile_pos_from_parent. Perhaps a copy paste mistake.
 */
Gfx *geo_update_projectile_pos_from_parent_copy(s32 callContext, UNUSED struct GraphNode *node, Mat4 mtx) {

    if (callContext == GEO_CONTEXT_RENDER) {
        // TODO: change global type to Object pointer
        struct Object *obj = (struct Object *) gCurGraphNodeObject;

        if (obj->prevObj != NULL) {
            obj_update_pos_from_parent_transformation(mtx, obj->prevObj);
            obj_set_gfx_pos_from_pos(obj->prevObj);
        }
    }

    return NULL;
}

/**
 * Chooses random idle taunts and loops them a random number of times.
 */
void idle_ukiki_taunt(void) {
    o->oForwardVel = 0.0f;

    if (o->oSubAction == UKIKI_SUB_ACT_TAUNT_NONE) {
        // Subaction is between 1 and 4.
        o->oSubAction = (s32)(random_float() * 4.0f + 1.0f);

        // Counter keeps track of the iterations done, while ToBeDone
        // is the count of iterations to be done (between 2 and 5).
        o->oUkikiTauntCounter = 0;
        o->oUkikiTauntsToBeDone = (s16)(random_float() * 4.0f + 2.0f);
    }

    // Switch goes from 1-4.
    switch (o->oSubAction) {
        case UKIKI_SUB_ACT_TAUNT_ITCH:
            cur_obj_init_animation_with_sound(UKIKI_ANIM_ITCH);

            if (cur_obj_check_if_near_animation_end()) {
                o->oSubAction = UKIKI_SUB_ACT_TAUNT_NONE;
            }
            break;

        case UKIKI_SUB_ACT_TAUNT_SCREECH:
            cur_obj_init_animation_with_sound(UKIKI_ANIM_SCREECH);

            if (cur_obj_check_if_near_animation_end()) {
                o->oUkikiTauntCounter++;
            }

            if (o->oUkikiTauntCounter >= o->oUkikiTauntsToBeDone * 2) {
                o->oSubAction = UKIKI_SUB_ACT_TAUNT_NONE;
            }
            break;

        case UKIKI_SUB_ACT_TAUNT_JUMP_CLAP:
            cur_obj_init_animation_with_sound(UKIKI_ANIM_JUMP_CLAP);

            if (cur_obj_check_if_near_animation_end()) {
                o->oUkikiTauntCounter++;
            }

            if (o->oUkikiTauntCounter >= o->oUkikiTauntsToBeDone) {
                o->oSubAction = UKIKI_SUB_ACT_TAUNT_NONE;
            }
            break;

        case UKIKI_SUB_ACT_TAUNT_HANDSTAND:
            cur_obj_init_animation_with_sound(UKIKI_ANIM_HANDSTAND);

            if (cur_obj_check_if_near_animation_end()) {
                o->oSubAction = UKIKI_SUB_ACT_TAUNT_NONE;
            }
            break;
    }
}

/**
 * Ukiki's general idle action. This is for when ukiki is doing nothing else and
 * standing around.
 */
void ukiki_act_idle(void) {
    idle_ukiki_taunt();

    if (is_cap_ukiki_and_mario_has_normal_cap_on_head()) {
        if (o->oDistanceToMario > 700.0f && o->oDistanceToMario < 1000.0f) {
            o->oAction = UKIKI_ACT_RUN;
        } else if (o->oDistanceToMario <= 700.0f && o->oDistanceToMario > 200.0f) {
            if (abs_angle_diff(o->oAngleToMario, o->oMoveAngleYaw) > 0x1000) {
                o->oAction = UKIKI_ACT_TURN_TO_MARIO;
            }
        }
    } else if (o->oDistanceToMario < 300.0f) {
        o->oAction = UKIKI_ACT_RUN;
    }

    if (o->oUkikiTextState == UKIKI_TEXT_GO_TO_CAGE) {
        o->oAction = UKIKI_ACT_GO_TO_CAGE;
    }

    // Jump away from Mario after stealing his cap.
    if (o->oUkikiTextState == UKIKI_TEXT_STOLE_CAP) {
        o->oMoveAngleYaw = gMarioObject->oMoveAngleYaw + 0x8000;

        if (check_if_moving_over_floor(50.0f, 150.0f)) {
            o->oAction = UKIKI_ACT_JUMP;
        } else {
            o->oMoveAngleYaw = gMarioObject->oMoveAngleYaw + 0x4000;

            if (check_if_moving_over_floor(50.0f, 150.0f)) {
                o->oAction = UKIKI_ACT_JUMP;
            } else {
                o->oMoveAngleYaw = gMarioObject->oMoveAngleYaw - 0x4000;
                if (check_if_moving_over_floor(50.0f, 150.0f)) {
                    o->oAction = UKIKI_ACT_JUMP;
                }
            }
        }

        o->oUkikiTextState = UKIKI_TEXT_HAS_CAP;
    }

    if (o->oBehParams2ndByte == UKIKI_BP_CAP) {
        if (o->oPosY < -1550.0f) {
            o->oAction = UKIKI_ACT_RETURN_HOME;
        }
    }
}

/**
 * Ukiki attempts to run home, which is often impossible depending on terrain.
 * Only used for the cap ukiki.
 */
void ukiki_act_return_home(void) {
    cur_obj_init_animation_with_sound(UKIKI_ANIM_RUN);
    o->oMoveAngleYaw = cur_obj_angle_to_home();
    o->oForwardVel = 10.0f;

    // If ukiki somehow walked home, go back to the idle action.
    if (o->oPosY > -1550.0f) {
        o->oAction = UKIKI_ACT_IDLE;
    }
}

/**
 * Ukiki has gone somewhere he shouldn't, so wait until Mario
 * leaves then reset position to his home.
 */
void ukiki_act_wait_to_respawn(void) {
    idle_ukiki_taunt();

    if (cur_obj_mario_far_away()) {
        cur_obj_set_pos_to_home_and_stop();
        o->oAction = UKIKI_ACT_IDLE;
    }
}

/**
 * A seemgingly stubbed unused action.
 *
 * Perhaps an early attempt at the UKIKI_SUB_ACT_CAGE_WAIT_FOR_MARIO
 * part of the ukiki_act_go_to_cage action.
 */
void ukiki_act_unused_turn(void) {
    idle_ukiki_taunt();

    if (o->oSubAction == UKIKI_SUB_ACT_TAUNT_JUMP_CLAP) {
        cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x400);
    }
}

/**
 * Turns ukiki to face towards Mario while moving with slow forward velocity.
 */
void ukiki_act_turn_to_mario(void) {
    s32 facingMario;

    // Initialize the action with a random fVel from 2-5.
    if (o->oTimer == 0) {
        o->oForwardVel = random_float() * 3.0f + 2.0f;
    }

    cur_obj_init_animation_with_sound(UKIKI_ANIM_TURN);

    facingMario = cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x800);

    if (facingMario) {
        o->oAction = UKIKI_ACT_IDLE;
    }

    if (is_cap_ukiki_and_mario_has_normal_cap_on_head()) {
        if (o->oDistanceToMario > 500.0f) {
            o->oAction = UKIKI_ACT_RUN;
        }
    } else if (o->oDistanceToMario < 300.0f) {
        o->oAction = UKIKI_ACT_RUN;
    }
}

/**
 * Ukiki either runs away away from Mario or towards him if stealing Mario's cap.
 */
void ukiki_act_run(void) {
    s32 fleeMario = TRUE;
    s16 goalYaw = o->oAngleToMario + 0x8000;

    if (is_cap_ukiki_and_mario_has_normal_cap_on_head()) {
        fleeMario = FALSE;
        goalYaw = o->oAngleToMario;
    }

    if (o->oTimer == 0) {
        o->oUkikiChaseFleeRange = random_float() * 100.0f + 350.0f;
    }

    cur_obj_init_animation_with_sound(UKIKI_ANIM_RUN);
    cur_obj_rotate_yaw_toward(goalYaw, 0x800);

    //! @bug (Ukikispeedia) This function sets forward speed to 0.9f * Mario's
    //! forward speed, which means ukiki can move at hyperspeed rates.
    cur_obj_set_vel_from_mario_vel(20.0f, 0.9f);

    if (fleeMario) {
        if (o->oDistanceToMario > o->oUkikiChaseFleeRange) {
            o->oAction = UKIKI_ACT_TURN_TO_MARIO;
        }
    } else if (o->oDistanceToMario < o->oUkikiChaseFleeRange) {
        o->oAction = UKIKI_ACT_TURN_TO_MARIO;
    }

    if (fleeMario && o->oDistanceToMario < 200.0f) {
        if ((o->oMoveFlags & OBJ_MOVE_HIT_WALL)
            && is_mario_moving_fast_or_in_air(10)) {
            o->oAction = UKIKI_ACT_JUMP;
            o->oMoveAngleYaw = o->oWallAngle;
        } else if ((o->oMoveFlags & OBJ_MOVE_HIT_EDGE) && is_mario_moving_fast_or_in_air(10)) {
            o->oAction = UKIKI_ACT_JUMP;
            o->oMoveAngleYaw += 0x8000;
        }
    }
}

/**
 * Jump for a distance, typically used to jump
 * over Mario when after reaching a wall or edge.
 */
void ukiki_act_jump(void) {
    o->oForwardVel = 10.0f;
    cur_obj_become_intangible();

    if (o->oSubAction == 0) {
        if (o->oTimer == 0) {
            cur_obj_set_y_vel_and_animation(random_float() * 10.0f + 45.0f, UKIKI_ANIM_JUMP);
        } else if (o->oMoveFlags & (OBJ_MOVE_MASK_ON_GROUND | OBJ_MOVE_AT_WATER_SURFACE
                                    | OBJ_MOVE_UNDERWATER_ON_GROUND)) {
            o->oSubAction++;
            o->oVelY = 0.0f;
        }
    } else {
        o->oForwardVel = 0.0f;
        cur_obj_init_animation_with_sound(UKIKI_ANIM_LAND);
        cur_obj_become_tangible();

        if (cur_obj_check_if_near_animation_end()) {
            o->oAction = UKIKI_ACT_RUN;
        }
    }
}

/**
 * Waypoints that lead from the top of the mountain to the cage.
 */
static Trajectory sCageUkikiPath[] = {
    TRAJECTORY_POS(0, /*pos*/  1011, 2306,  -285),
    TRAJECTORY_POS(0, /*pos*/  1151, 2304,  -510),
    TRAJECTORY_POS(0, /*pos*/  1723, 1861,  -964),
    TRAJECTORY_POS(0, /*pos*/  2082, 1775, -1128),
    TRAJECTORY_POS(0, /*pos*/  2489, 1717, -1141),
    TRAJECTORY_POS(0, /*pos*/  2662, 1694, -1140),
    TRAJECTORY_POS(0, /*pos*/  2902, 1536,  -947),
    TRAJECTORY_POS(0, /*pos*/  2946, 1536,  -467),
    TRAJECTORY_POS(0, /*pos*/  2924, 1536,    72),
    TRAJECTORY_POS(0, /*pos*/  2908, 1536,   536),
    TRAJECTORY_POS(0, /*pos*/  2886, 1536,   783),
    TRAJECTORY_END(),
};

/**
 * Travel to the cage, wait for Mario, jump to it, and ride it to
 * our death. Ukiki is a tad suicidal.
 */
void ukiki_act_go_to_cage(void) {
    f32 latDistToCage = 0.0f;
    s16 yawToCage = 0;
    struct Object *obj = cur_obj_nearest_object_with_behavior(bhvUkikiCageChild);

    // Ultimately is checking the cage, as it points to the parent
    // of a dummy child object of the cage.
    if (obj != NULL) {
        latDistToCage = lateral_dist_between_objects(o, obj->parentObj);
        yawToCage = obj_angle_to_object(o, obj->parentObj);
    }

    cur_obj_become_intangible();
    o->oFlags |= OBJ_FLAG_ACTIVE_FROM_AFAR;

    // Switch goes from 0-7 in order.
    switch (o->oSubAction) {
        case UKIKI_SUB_ACT_CAGE_RUN_TO_CAGE:
            cur_obj_init_animation_with_sound(UKIKI_ANIM_RUN);

            o->oPathedStartWaypoint = (struct Waypoint *) sCageUkikiPath;

            if (cur_obj_follow_path() != PATH_REACHED_END) {
                o->oForwardVel = 10.0f;
                cur_obj_rotate_yaw_toward(o->oPathedTargetYaw, 0x400);
                o->oPosY = o->oFloorHeight;
            } else {
                o->oForwardVel = 0.0f;
                o->oSubAction++; // UKIKI_SUB_ACT_CAGE_WAIT_FOR_MARIO
            }
            break;

        case UKIKI_SUB_ACT_CAGE_WAIT_FOR_MARIO:
            cur_obj_init_animation_with_sound(UKIKI_ANIM_JUMP_CLAP);
            cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x400);

            if (cur_obj_can_mario_activate_textbox(200.0f, 30.0f, 0x7FFF)) {
                o->oSubAction++; // UKIKI_SUB_ACT_CAGE_TALK_TO_MARIO
                // fallthrough
            } else {
                break;
            }

        case UKIKI_SUB_ACT_CAGE_TALK_TO_MARIO:
            cur_obj_init_animation_with_sound(UKIKI_ANIM_HANDSTAND);

            if (cur_obj_update_dialog_with_cutscene(MARIO_DIALOG_LOOK_DOWN,
                DIALOG_FLAG_TURN_TO_MARIO, CUTSCENE_DIALOG, DIALOG_080)) {
                o->oSubAction++; // UKIKI_SUB_ACT_CAGE_TURN_TO_CAGE
            }
            break;

        case UKIKI_SUB_ACT_CAGE_TURN_TO_CAGE:
            cur_obj_init_animation_with_sound(UKIKI_ANIM_RUN);

            if (cur_obj_rotate_yaw_toward(yawToCage, 0x400)) {
                o->oForwardVel = 10.0f;
                o->oSubAction++; // UKIKI_SUB_ACT_CAGE_JUMP_TO_CAGE
            }
            break;

        case UKIKI_SUB_ACT_CAGE_JUMP_TO_CAGE:
            cur_obj_set_y_vel_and_animation(55.0f, UKIKI_ANIM_JUMP);
            o->oForwardVel = 36.0f;
            o->oSubAction++; // UKIKI_SUB_ACT_CAGE_LAND_ON_CAGE
            break;

        case UKIKI_SUB_ACT_CAGE_LAND_ON_CAGE:
            if (latDistToCage < 50.0f) {
                o->oForwardVel = 0.0f;
            }

            if (o->oMoveFlags & OBJ_MOVE_LANDED) {
                play_puzzle_jingle();
                cur_obj_init_animation_with_sound(UKIKI_ANIM_JUMP_CLAP);
                o->oSubAction++; // UKIKI_SUB_ACT_CAGE_SPIN_ON_CAGE
                o->oUkikiCageSpinTimer = 32;
                obj->parentObj->oUkikiCageNextAction = UKIKI_CAGE_ACT_SPIN;
                o->oForwardVel = 0.0f;
            }
            break;

        case UKIKI_SUB_ACT_CAGE_SPIN_ON_CAGE:
            o->oMoveAngleYaw += 0x800;
            o->oUkikiCageSpinTimer--;

            if (o->oUkikiCageSpinTimer < 0) {
                o->oSubAction++; // UKIKI_SUB_ACT_CAGE_DESPAWN
                obj->parentObj->oUkikiCageNextAction = UKIKI_CAGE_ACT_FALL;
            }
            break;

        case UKIKI_SUB_ACT_CAGE_DESPAWN:
            if (o->oPosY < -1300.0f) {
                obj_mark_for_deletion(o);
            }
            break;
    }
}

/**
 * A struct of Ukiki's sounds based on his current
 * SoundState number.
 */
struct SoundState sUkikiSoundStates[] = {
    {1, 1, 10, SOUND_OBJ_UKIKI_STEP_DEFAULT},
    {0, 0, 0,  NO_SOUND},
    {0, 0, 0,  NO_SOUND},
    {0, 0, 0,  NO_SOUND},
    {1, 0, -1, SOUND_OBJ_UKIKI_CHATTER_SHORT},
    {1, 0, -1, SOUND_OBJ_UKIKI_CHATTER_LONG},
    {0, 0, 0,  NO_SOUND},
    {0, 0, 0,  NO_SOUND},
    {1, 0, -1, SOUND_OBJ_UKIKI_CHATTER_LONG},
    {1, 0, -1, SOUND_OBJ_UKIKI_STEP_LEAVES},
    {1, 0, -1, SOUND_OBJ_UKIKI_CHATTER_IDLE},
    {0, 0, 0,  NO_SOUND},
    {0, 0, 0,  NO_SOUND},
};

/**
 * An array of each of Ukiki's actions. A function is called
 * every frame.
 */
ObjActionFunc sUkikiActions[] = {
    ukiki_act_idle,
    ukiki_act_run,
    ukiki_act_turn_to_mario,
    ukiki_act_jump,
    ukiki_act_go_to_cage,
    ukiki_act_wait_to_respawn,
    ukiki_act_unused_turn,
    ukiki_act_return_home,
};

/**
 * Called via the main behavior function when Ukiki is either nothing
 * being held, dropped, or thrown.
 */
void ukiki_free_loop(void) {
    s32 steepSlopeAngleDegrees;

    cur_obj_update_floor_and_walls();
    cur_obj_call_action_function(sUkikiActions);

    if (o->oAction == UKIKI_ACT_GO_TO_CAGE || o->oAction == UKIKI_ACT_RETURN_HOME) {
        steepSlopeAngleDegrees = -88;
    } else {
        steepSlopeAngleDegrees = -20;
    }

    cur_obj_move_standard(steepSlopeAngleDegrees);
    handle_cap_ukiki_reset();

    if (!(o->oMoveFlags & OBJ_MOVE_MASK_IN_WATER)) {
        exec_anim_sound_state(sUkikiSoundStates);
    }
}

/**
 * Unused function for timing ukiki's blinking.
 * Image still present in Ukiki's actor graphics.
 *
 * Possibly unused so AnimState could be used for wearing a cap?
 */
UNUSED static void ukiki_blink_timer(void) {
    if (gGlobalTimer % 50 < 7) {
        o->oAnimState = UKIKI_ANIM_STATE_EYE_CLOSED;
    } else {
        o->oAnimState = UKIKI_ANIM_STATE_DEFAULT;
    }
}

/**
 * Called by the main behavior function for the cage ukiki whenever it is held.
 */
void cage_ukiki_held_loop(void) {
    if (o->oPosY - o->oHomeY > -100.0f) {
        switch (o->oUkikiTextState) {
            case UKIKI_TEXT_DEFAULT:
                if (set_mario_npc_dialog(MARIO_DIALOG_LOOK_UP) == MARIO_DIALOG_STATUS_SPEAK) {
                    create_dialog_box_with_response(DIALOG_079);
                    o->oUkikiTextState = UKIKI_TEXT_CAGE_TEXTBOX;
                }
                break;

            case UKIKI_TEXT_CAGE_TEXTBOX:
                if (gDialogResponse != DIALOG_RESPONSE_NONE) {
                    set_mario_npc_dialog(MARIO_DIALOG_STOP);
                    if (gDialogResponse == DIALOG_RESPONSE_YES || gDialogResponse == DIALOG_RESPONSE_IGNORED) {
                        o->oInteractionSubtype |= INT_SUBTYPE_DROP_IMMEDIATELY;
                        o->oUkikiTextState = UKIKI_TEXT_GO_TO_CAGE;
                    } else {
                        o->oUkikiTextState = UKIKI_TEXT_DO_NOT_LET_GO;
                        o->oUkikiTextboxTimer = 60;
                    }
                }
                break;

            case UKIKI_TEXT_GO_TO_CAGE:
                break;

            // Pester Mario with textboxes to discourage walking far.
            case UKIKI_TEXT_DO_NOT_LET_GO:
                if (o->oUkikiTextboxTimer-- < 0) {
                    o->oUkikiTextState = UKIKI_TEXT_DEFAULT;
                }
                break;
        }
    } else {
        // If ukiki is far below his home, stop him from trying to
        // walk to the cage and getting stuck.
        o->oUkikiTextState = UKIKI_TEXT_DEFAULT;
        o->oTimer = 0;
        o->oAction = UKIKI_ACT_WAIT_TO_RESPAWN;
    }
}

/**
 * Called by the main behavior function for the cap ukiki whenever it is held.
 */
void cap_ukiki_held_loop(void) {
    switch (o->oUkikiTextState) {
        case UKIKI_TEXT_DEFAULT:
            if (mario_lose_cap_to_enemy(2)) {
                o->oUkikiTextState = UKIKI_TEXT_STEAL_CAP;
                o->oUkikiHasCap |= UKIKI_CAP_ON;
            }
            break;

        case UKIKI_TEXT_STEAL_CAP:
            if (cur_obj_update_dialog(MARIO_DIALOG_LOOK_UP, DIALOG_FLAG_TEXT_DEFAULT, DIALOG_100, 0)) {
                o->oInteractionSubtype |= INT_SUBTYPE_DROP_IMMEDIATELY;
                o->oUkikiTextState = UKIKI_TEXT_STOLE_CAP;
            }
            break;

        case UKIKI_TEXT_STOLE_CAP:
            break;

        case UKIKI_TEXT_HAS_CAP:
            if (cur_obj_update_dialog(MARIO_DIALOG_LOOK_UP, 
                (DIALOG_FLAG_TEXT_DEFAULT | DIALOG_FLAG_TIME_STOP_ENABLED), DIALOG_101, 0)) {
                mario_retrieve_cap();
                set_mario_npc_dialog(MARIO_DIALOG_STOP);
                o->oUkikiHasCap &= ~UKIKI_CAP_ON;
                o->oUkikiTextState = UKIKI_TEXT_GAVE_CAP_BACK;
            }
            break;

        case UKIKI_TEXT_GAVE_CAP_BACK:
            o->oUkikiTextState = UKIKI_TEXT_DEFAULT;
            o->oAction = UKIKI_ACT_IDLE;
            break;
    }
}

/**
 * Initializatation for ukiki, determines if it has Mario's cap.
 */
void bhv_ukiki_init(void) {
    if ((o->oBehParams2ndByte == UKIKI_BP_CAP)
        && (save_file_get_flags() & SAVE_FLAG_CAP_ON_UKIKI)) {
        o->oUkikiTextState = UKIKI_TEXT_HAS_CAP;
        o->oUkikiHasCap |= UKIKI_CAP_ON;
    }
}

/**
 * The main behavior function for ukiki. Chooses which behavior to use
 * dependent on the held state and whick ukiki it is (cage or cap).
 */
void bhv_ukiki_loop(void) {
    switch (o->oHeldState) {
        case HELD_FREE:
            //! @bug (PARTIAL_UPDATE)
            o->oUkikiTextboxTimer = 0;
            ukiki_free_loop();
            break;

        case HELD_HELD:
            cur_obj_unrender_set_action_and_anim(UKIKI_ANIM_HELD, 0);
            obj_copy_pos(o, gMarioObject);

            if (o->oBehParams2ndByte == UKIKI_BP_CAP) {
                cap_ukiki_held_loop();
            } else {
                cage_ukiki_held_loop();
            }
            break;

        case HELD_THROWN:
        case HELD_DROPPED:
            cur_obj_get_dropped();
            break;
    }

    if (o->oUkikiHasCap & UKIKI_CAP_ON) {
        o->oAnimState = UKIKI_ANIM_STATE_CAP_ON;
    } else {
        o->oAnimState = UKIKI_ANIM_STATE_DEFAULT;
    }

    o->oInteractStatus = INT_STATUS_NONE;

    print_debug_bottom_up("mode   %d\n", o->oAction);
    print_debug_bottom_up("action %d\n", o->oHeldState);
}
