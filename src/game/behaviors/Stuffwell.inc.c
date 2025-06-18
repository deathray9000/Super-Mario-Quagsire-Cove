// Stuffwell.inc.c

static struct ObjectHitbox sFollowBox = {
    /* interactType:      */ INTERACT_TEXT,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* Radius:            */ 80,
    /* Height:            */ 90,
    /* hurtboxRadius:     */ 90,
    /* hurtboxHeight:     */ 100,
};

void bhv_Stuffwell_init(void) {
    o->oPosX = gMarioStates[0].pos[0] - (350 * sins(gMarioStates[0].faceAngle[1]));
    o->oPosY = gMarioStates[0].pos[1];
    o->oPosZ = gMarioStates[0].pos[2] - (350 * coss(gMarioStates[0].faceAngle[1]));

    o->oGravity = -2.5f;
    o->oFriction = 0.8f;
    o->oWallHitboxRadius = 30.0f;
    obj_set_hitbox(o, &sFollowBox);
    cur_obj_init_animation(0);
    o->o100 = random_linear_offset(30, 50) + 15; // blink timer
};

u16 max_distance = 3000;

void bhv_Stuffwell_loop(void) {
    f32 waterLevel = find_water_level(o->oPosX, o->oPosZ);
    cur_obj_update_floor_and_walls();

    o->oAngleToMario = obj_angle_to_object(o, gMarioStates[0].marioObj);

    if (o->oPosY < waterLevel && o->oF8 == 0) {
        o->oF8 = 1;
        o->oTimer = 0;
        spawn_object(o, MODEL_WATER_SPLASH, bhvWaterSplash);
        play_sound(SOUND_ACTION_WATER_PLUNGE, o->header.gfx.cameraToObject);
    }
    
    if (gMarioStates[0].STOR_State == 0) {
        switch (o->oInteractStatus) {
            case 0: 
                Stuffwell_Normal(waterLevel);
                break;
            case 1:
                o->oGravity = 0.0f;
                Stuffwell_Underwater(waterLevel);
                break;
            case INT_STATUS_WAS_ATTACKED:
                Stuffwell_Attacked();
                break;
            case INT_STATUS_HIT_MINE:
                Stuffwell_Launched(waterLevel);
                break;
            case INT_STATUS_INTERACTED:
                Stuffwell_Talking();
                break;
        }
    } else {
        const BehaviorScript *behavior = bhvPropeller;
        ModelID32 model = MODEL_PROPELLER;
        u8 anim_state = 0;

        switch (gMarioStates[0].STOR_State) {
            case 1:
                save_file_set_power_up(gCurrSaveFileNum - 1, 1, -1);
                break;
            case 2:
                save_file_set_power_up(gCurrSaveFileNum - 1, 2, -1);
                behavior = bhvPowerFlowers;
                model = MODEL_POWER_FLOWERS;
                break;
            case 3:
                save_file_set_power_up(gCurrSaveFileNum - 1, 3, -1);
                behavior = bhvPowerFlowers;
                model = MODEL_POWER_FLOWERS;
                anim_state = 1;
                break;
            case 4:
                save_file_set_power_up(gCurrSaveFileNum - 1, 4, -1);
                behavior = bhvPowerFlowers;
                model = MODEL_POWER_FLOWERS;
                anim_state = 2;
                break;
            case 5:
                save_file_set_power_up(gCurrSaveFileNum - 1, 5, -1);
                behavior = bhvPropeller;
                model = MODEL_PROPELLER;
                break;
        }

        struct Object *Power_up = spawn_object_abs_with_rot(o, 0, model, behavior, o->oPosX, o->oPosY + 50, o->oPosZ, 0, 0, 0);
        Power_up->oF4 = 1;
        Power_up->oAnimState = anim_state;

        gMarioStates[0].STOR_State = 0;
    }
        
    cur_obj_move_standard(-78);

    o->oDistanceToMario = dist_between_objects(o, gMarioStates[0].marioObj);
    if (o->oDistanceToMario > max_distance || (o->oFloorType == SURFACE_DEATH_PLANE && o->oPosY < 2048.0f + o->oFloorHeight) || o->oF4 >= 5) {
        if (gMarioStates[0].floorHeight == gMarioStates[0].pos[1] || gMarioStates[0].pos[1] < gMarioStates[0].waterLevel) {
            o->oPosY = gMarioStates[0].pos[1];
            o->oPosX = gMarioStates[0].pos[0] - (350 * sins(gMarioStates[0].faceAngle[1]));
            o->oPosZ = gMarioStates[0].pos[2] - (350 * coss(gMarioStates[0].faceAngle[1]));
            o->oVelY = 0;
            o->oSubAction = 0;
            o->oInteractStatus = 0;
            o->oGravity = -2.5f;
            o->oFaceAnglePitch = DEGREES(0);
            o->oForwardVel = 0;
            o->oF4 = 0;
            o->oF8 = 0;
            spawn_mist_particles();
            cur_obj_play_sound_2(SOUND_CUSTOM_STUFFWELL);
            cur_obj_init_animation(0);
            o->oFaceAngleYaw = obj_angle_to_object(o, gMarioStates[0].marioObj);
            o->oMoveAngleYaw = o->oFaceAngleYaw;
        } 
    }
};

void Stuffwell_Normal(f32 waterLevel) {

    if (o->oPosY < waterLevel) {
        o->oForwardVel -= 3;
        o->oVelY += 5;
        o->oGravity = 0.0f;

        if (o->oForwardVel <= 0 || o->oVelY >= 0){
            o->oForwardVel = 0;
            o->oVelY = 0;
            o->oSubAction = 0;
            o->oInteractStatus = 1;
        }
    }

    f32 LateralDistToMario = lateral_dist_between_objects(o, gMarioStates[0].marioObj);

    switch (o->oSubAction) {
        case 0:
            cur_obj_rotate_yaw_toward(o->oAngleToMario, (0x350 + (50 * o->oForwardVel)));
            o->oFaceAngleYaw = o->oMoveAngleYaw;

            if (o->oMoveFlags & OBJ_MOVE_HIT_WALL || o->oMoveFlags & OBJ_MOVE_HIT_EDGE || o->oFloorType == SURFACE_VERY_SLIPPERY || o->oPosY > 50.0f + o->oFloorHeight) {
                if ((gMarioStates[0].floorHeight == gMarioStates[0].pos[1] && gMarioStates[0].action != ACT_LEDGE_GRAB) || gMarioStates[0].pos[1] <= gMarioStates[0].waterLevel) {
                    o->oF4 += 1;
                    o->oSubAction = 1;
                    break;
                }
            }

            if (o->oFloorType == SURFACE_VERY_SLIPPERY || o->oPosY > 50.0f + o->oFloorHeight) {
                o->oGravity = 0.0f;
                o->oVelY = 0.0f;
                o->oForwardVel = 0.0f;
                break;
            }

            o->oF4 = 0;

            if (LateralDistToMario > 500.0f) {
                o->oForwardVel = 10 + ((LateralDistToMario - 500.0f) / 4.0f);

                if (o->oForwardVel > 50.0f) {
                    o->oForwardVel = 50.0f;
                }

                if ((o->oForwardVel / 10.0f) < 1.0f) {
                    cur_obj_init_animation_with_accel_and_sound(1, 1);
                } else {
                    cur_obj_init_animation_with_accel_and_sound(1, (o->oForwardVel / 10.0f));
                }
            } else if (LateralDistToMario < 350.0f) {
                o->oForwardVel = 0.0f;
                cur_obj_init_animation(0);
            }
            break;
        case 1:
            o->oFaceAngleYaw = o->oAngleToMario;
            o->oMoveAngleYaw = o->oFaceAngleYaw;
            o->oGravity = -2.5f;
            o->oForwardVel = 5 + ((LateralDistToMario) / 30.0f);
            o->oVelY = sqrtf(5.0f + gMarioStates[0].pos[1] - o->oPosY) + ((LateralDistToMario * 1.25f) / o->oForwardVel) + (10 * (o->oF4 - 1));
            if (o->oVelY < 0) {
                o->oVelY = ((LateralDistToMario * 1.25f) / o->oForwardVel);
            }
            o->oSubAction = 2;
            break;
        case 2:
            if (LateralDistToMario < 50.0f) {
                o->oForwardVel = 0;
            }

            if (o->oPosY < 10.0f + o->oFloorHeight) {
                o->oSubAction = 0;
            }
            break;
    }
};

void Stuffwell_Launched(f32 waterLevel) {
    switch (o->oSubAction) {
        case 0:
            cur_obj_init_animation(2);
            o->oFaceAngleYaw = gMarioState->faceAngle[1] + DEGREES(180);
            o->oMoveAngleYaw = gMarioState->faceAngle[1];
            o->oForwardVel = 20 + (gMarioState->forwardVel/3);
            o->oVelY = 20 + (gMarioState->forwardVel/3);
            o->oSubAction = 1;
            o->oGravity = -2.5f;
            break;
        case 1:
            if (o->oPosY < waterLevel) {
                o->oForwardVel -= 3;
                o->oVelY += 5;
                o->oGravity = 0.0f;

                if (o->oForwardVel <= 0 || o->oVelY >= 0){
                    o->oForwardVel = 0;
                    o->oVelY = 0;
                    o->oSubAction = 0;
                    o->oInteractStatus = 1;
                }
            } else if (o->oPosY < 10.0f + o->oFloorHeight) {
                o->oForwardVel -= 2;
                if (o->oForwardVel <= 0){
                    o->oForwardVel = 0;
                    o->oSubAction = 2;
                }
            } 
            break;
        case 2:
            if (cur_obj_init_animation_and_check_if_near_end(3)) { 
                o->oSubAction = 3;
            }
            break;
        case 3:
            if (cur_obj_init_animation_and_check_if_near_end(4)) { 
                o->oSubAction = 0;
                o->oInteractStatus = 0;
                cur_obj_init_animation(0);
                o->oMoveAngleYaw = o->oFaceAngleYaw;
            }
            break;
    }
};

void Stuffwell_Attacked(void) {
    switch (o->oSubAction) {
        case 0:
            cur_obj_init_animation(0);
            o->oSubAction = 1;
            o->oVelY = 0;
            o->oGravity = -2.5f;
            o->oForwardVel = 0;
            o->oF4 = 0;
            o->oSubAction = 1;
            break;
        case 1:
            if (cur_obj_init_animation_and_check_if_near_end(5)) { 
                o->oInteractStatus = 0;
                o->oSubAction = 0;
                cur_obj_init_animation(0);
            }
            break;
    }
}

void Stuffwell_Talking(void) {
    switch (o->oSubAction) {
        case 0:
            o->oFaceAngleYaw = o->oAngleToMario;
            o->oMoveAngleYaw = o->oFaceAngleYaw;
            cur_obj_init_animation(0);
            o->oVelY = 0;
            o->oGravity = -2.5f;
            o->oForwardVel = 0;
            o->oF4 = 0;
            o->oSubAction = 1;
            break;
        case 1:
            if (cur_obj_update_dialog_with_cutscene(MARIO_DIALOG_LOOK_DOWN, DIALOG_FLAG_NONE, CUTSCENE_DIALOG, GET_BPARAM2(o->oBehParams))) {
                o->oInteractStatus = 0;
                o->oSubAction = 0;
            }       
            break;
    }
}

void Stuffwell_Underwater(f32 waterLevel) {
    if (o->oPosY > waterLevel) {
        o->oInteractStatus = 0;
        o->oGravity = -2.5f;
        o->oF8 = 0;
        o->oFaceAnglePitch = 0;
        o->oF4 = 0;
        return;
    }

    f32 LateralDistToMario = lateral_dist_between_objects(o, gMarioStates[0].marioObj);
    f32 Y_differance = (gMarioStates[0].pos[1] - 20.0f) - o->oPosY;

    if (Y_differance > -6 && Y_differance < 6) {
        o->oVelY = 0;
        o->oPosY = gMarioStates[0].pos[1] - 20.0f;
    } else {
        o->oVelY = Y_differance / 8.0f;
        
        if (o->oVelY > 0.0f) {
            if (o->oVelY > 20.0f) {
                o->oVelY = 20.0f;
            } else if (o->oVelY < 4.0f) {
                o->oVelY = 4.0f;
            }
        } else  {
            if (o->oVelY < -20.0f) {
                o->oVelY = -20.0f;
            } else if (o->oVelY > -4.0f) {
                o->oVelY = -4.0f;
            }
        }
    }

    cur_obj_rotate_yaw_toward(o->oAngleToMario, (0x350 + (50 * o->oForwardVel)));
    o->oFaceAngleYaw = o->oMoveAngleYaw;

    if (LateralDistToMario > 300.0f) {
        o->oForwardVel = 5 + ((LateralDistToMario - 300.0f) / 6.0f);

        if (o->oForwardVel > 30.0f) {
            o->oForwardVel = 30.0f;
        }
    } else if (LateralDistToMario < 350.0f) {
        o->oForwardVel = 0.0f;
    }

    if (o->oForwardVel == 0 && o->oVelY <= 0) {
        cur_obj_init_animation(7);
        o->oFaceAnglePitch = approach_s16_symmetric(o->oFaceAnglePitch, 0, 0x250);
    } else {
        if (((o->oForwardVel + o->oVelY) / 11.0f) < 1.0f) {
            cur_obj_init_animation_with_accel_and_sound(1, 1);
        } else {
            cur_obj_init_animation_with_accel_and_sound(1, ((o->oForwardVel + o->oVelY) / 11.0f));
        }

        o->oFaceAnglePitch = approach_s16_symmetric(o->oFaceAnglePitch, atan2s(Y_differance, LateralDistToMario), 0x250);
    }

    if (o->oPosY + 100 > waterLevel) {
        
        if (o->oVelY > 0) {
            o->oVelY = 0;
        }

        o->oFaceAnglePitch = approach_s16_symmetric(o->oFaceAnglePitch, 0, 0x250);
        if (gMarioStates[0].floorHeight == gMarioStates[0].pos[1] && gMarioStates[0].action != ACT_LEDGE_GRAB) {
            o->oPosY += 10;
            if (o->oPosY >= waterLevel) {
                o->oPosY += 10;
                o->oInteractStatus = 0;
                o->oSubAction = 1;
                o->oGravity = -2.5f;
                o->oFaceAnglePitch = 0;
                o->oF8 = 0;
                o->oF4 = 0;
            }
        }
    }
}

Gfx *geo_stuffwell_blink(s32 callContext, struct GraphNode *node, UNUSED Mat4 *mtx) {
    if (callContext == GEO_CONTEXT_RENDER) { 
        struct GraphNodeSwitchCase *switchCase = (struct GraphNodeSwitchCase *) node;
        struct Object *obj = (struct Object *) gCurGraphNodeObject;

        if (obj->oInteractStatus == 16384 || (obj->oInteractStatus == 2097152 && obj->oSubAction == 1)) {
            switchCase->selectedCase = 5;
        } else {
            s16 frame_count = o->oFC - o->o100;
            switch (frame_count)
                {
                case 1:
                    switchCase->selectedCase = 1;
                    break;
                case 2:
                    switchCase->selectedCase = 2;
                    break;
                case 3:
                    switchCase->selectedCase = 3;
                    break;
                case 4:
                    switchCase->selectedCase = 4;
                    break;
                case 5:
                    switchCase->selectedCase = 3;
                    break;
                case 6:
                    switchCase->selectedCase = 2;
                    break;
                case 7:
                    switchCase->selectedCase = 1;
                    break;
                case 8:
                    switchCase->selectedCase = 0;
                    o->oFC = 0;
                    o->o100 = random_linear_offset(30, 70) + 15; // blink timer
                    break;
                default:
                    switchCase->selectedCase = 0;
                    break;
            }
            o->oFC++;
        }
    }
    return NULL;
}

Gfx *geo_stuffwell_mouth(s32 callContext, struct GraphNode *node, UNUSED Mat4 *mtx) {
    if (callContext == GEO_CONTEXT_RENDER) { 
        struct GraphNodeSwitchCase *switchCase = (struct GraphNodeSwitchCase *) node;
        struct Object *obj = (struct Object *) gCurGraphNodeObject;

        if (obj->oInteractStatus == 16384 || (obj->oInteractStatus == 2097152 && obj->oSubAction == 1)) {
            switchCase->selectedCase = 5;
        } else if (obj->oInteractStatus == 32768) {
            switch (o->o104 % 15) {
                case 1:
                case 2:
                    switchCase->selectedCase = 1;
                    break;
                case 3:
                case 4:
                    switchCase->selectedCase = 2;
                    break;
                case 5:
                case 6:
                    switchCase->selectedCase = 3;
                    break;
                case 7:
                case 8:
                    switchCase->selectedCase = 4;
                    break;
                case 9:
                case 10:
                    switchCase->selectedCase = 3;
                    break;
                case 11:
                case 12:
                    switchCase->selectedCase = 2;
                    break;
                case 13:
                case 14:
                    switchCase->selectedCase = 1;
                    break;                
                default:
                    o->o104 == 0;
                    break;
            }

            o->o104++;
        } else {
            switchCase->selectedCase = 0;
        }
    }
    return NULL;
}