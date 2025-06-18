// Behavior: bhvSMWMario
// Model ID: MODEL_SMW_MARIO

// animstates 0 = Idle, 
//            1 = pipe, 
//            2 = back, 
//            3 = look up, 
//            4 = duck, 
//            5 = walk 1, 
//            6 = walk 2, 
//            7 = jump
//            8 = fall
//            9 = run 1
//           10 = run 2
//           11 = run 3
//           12 = run jump
//           13 = slide
//           14 = skid
//           15 = victory
//           16 = death

void bhv_smw_mario_init(void) {
    o->oF8 = o->oPosX;
    o->oFC = o->oPosZ;
}

void correct_mario_position(s8 MarioID, struct Object *o) {
    f32 offset = ((gMarioStates[MarioID].pos[0] - o->oF8) * sins(gMarioStates[MarioID].faceAngle[1])) + ((gMarioStates[MarioID].pos[2] - o->oFC) * coss(gMarioStates[MarioID].faceAngle[1]));

    gMarioStates[MarioID].pos[0] = o->oF8 + offset * sins(gMarioStates[MarioID].faceAngle[1]);
    gMarioStates[MarioID].pos[2] = o->oFC + offset * coss(gMarioStates[MarioID].faceAngle[1]);
}

// BEHAVIOR PARAMATER 1: the mario id it follows and keeps track of (set automatically upon spawn from pipe)
void bhv_smw_mario(void) {
    s8 animSpeed = 3;
    s8 MarioID = GET_BPARAM1(o->oBehParams);
    cur_obj_scale(1);

    if (gMarioStates[MarioID].invincTimer > 0) {
        if (o->oF4 % 2 == 0) {
            cur_obj_scale(0);
        }

        o->oF4++;
        if (o->oF4 == 30) {
            o->oF4 = 0;
        }
    }

    if (gMarioStates[MarioID].action == ACT_SMW_DEATH) {
        o->oAnimState = 16;

        if (gMarioStates[MarioID].actionTimer == 20) {
            o->oVelY = 40;
        }

        if (gMarioStates[MarioID].actionTimer % 2 == 0 && gMarioStates[MarioID].actionTimer > 20) {
            o->oFaceAngleYaw -= 0x8000;
            o->oVelY -= 4;
        }

        gMarioStates[MarioID].actionTimer++;
        o->oPosY += o->oVelY;
        return;
    }

    if (gMarioStates[MarioID].marioObj == NULL ||  (gMarioStates[MarioID].action == ACT_SMW_PIPE && gMarioStates[MarioID].actionState >= 25)) {
        obj_mark_for_deletion(o);
        return;
    }

    o->oPosX = gMarioStates[MarioID].marioObj->header.gfx.pos[0];
    o->oPosY = gMarioStates[MarioID].marioObj->header.gfx.pos[1];
    o->oPosZ = gMarioStates[MarioID].marioObj->header.gfx.pos[2];

    if (MarioID == gMarioState->playerID || gMarioStates[MarioID].controlMode == COOP_CM_ALL_ACTIVE) {

        correct_mario_position(MarioID, o);

        if (gMarioStates[MarioID].action == ACT_SMW_TEXT) {
            o->oAnimState = 0;
            gMarioStates[MarioID].actionState++;
            if (gMarioStates[MarioID].actionState > 1) {
                gMarioStates[MarioID].actionState = 0;
                gMarioStates[MarioID].action = ACT_SMW_WALK;
            }
        } else if (gMarioStates[MarioID].action == ACT_SMW_FALL_AFTER_STAR_GRAB) {
         o->oAnimState = 8;
        } else if (gMarioStates[MarioID].action == ACT_SMW_VICTORY) {
            if (gMarioStates[MarioID].actionTimer >= 42) {
                o->oAnimState = 15;
            } else {
                o->oAnimState = 0;
            }
        } else if (gMarioStates[MarioID].action == ACT_SMW_DUCK) {
            o->oAnimState = 4;
        } else if (gMarioStates[MarioID].action == ACT_SMW_SPIN_JUMP) {
            switch (o->oAnimState) {
                case 0:
                    if (gMarioStates[MarioID].actionTimer == 1) {
                        o->oAnimState = 1;
                        gMarioStates[MarioID].actionTimer = 0;
                    } else {
                        gMarioStates[MarioID].actionTimer = 1;
                        o->oAnimState = 2;
                    }
                    break;
                default:
                    o->oFaceAngleYaw -= 0x8000;
                    o->oAnimState = 0;
                    break;
            }
        } else {
            if ((gMarioStates[MarioID].controller->buttonDown & R_JPAD || gMarioStates[MarioID].controller->stickX > 16) && !(gMarioStates[MarioID].controller->buttonDown & L_JPAD)) {
                o->oFaceAngleYaw = gMarioStates[MarioID].faceAngle[1];
            } else if (gMarioStates[MarioID].controller->buttonDown & L_JPAD || gMarioStates[MarioID].controller->stickX < -16) {
                o->oFaceAngleYaw = gMarioStates[MarioID].faceAngle[1] - 0x8000;
            }
        
           if (gMarioStates[MarioID].action == ACT_SMW_JUMP) {
                if (gMarioStates[MarioID].PMeter >= 112 || o->oAnimState == 12) {
                    o->oAnimState = 12;
                } else if (gMarioStates[MarioID].vel[1] > 0) {
                    o->oAnimState = 7;
                } else {
                    o->oAnimState = 8;
                }
            } else if (gMarioStates[MarioID].action == ACT_SMW_WALK) {
                if (gMarioStates[MarioID].forwardVel != 0) {
                    if (gMarioStates[MarioID].PMeter >= 112) {
                        switch (o->oAnimState) {
                            case 9:
                                o->oAnimState = 11;
                                break;
                            case 11:
                                o->oAnimState = 10;
                                break;
                            default:
                                o->oAnimState = 9;
                                break;
                        }
                    } else {
                        if (gMarioStates[MarioID].input & INPUT_B_DOWN) {
                            animSpeed = 2;
                        }
                        if ((gMarioStates[MarioID].actionTimer % (animSpeed)) == 0) {
                            switch (o->oAnimState) {
                                case 0:
                                    o->oAnimState = 6;
                                    break;
                                case 6:
                                    o->oAnimState = 5;
                                    break;
                                default:
                                    o->oAnimState = 0;
                                    break;
                            }
                        }
                    }
                    gMarioStates[MarioID].actionTimer++;
                } else {
                    if (gMarioStates[MarioID].controller->stickY > 16 || gMarioStates[MarioID].controller->buttonDown & U_JPAD) {
                        o->oAnimState = 3;
                    } else {
                        o->oAnimState = 0;
                    }
                    gMarioStates[MarioID].actionTimer = 0;
                }
            } else if (gMarioStates[MarioID].action == ACT_SMW_SKID) {
                o->oAnimState = 14;
            } else if (gMarioStates[MarioID].action == ACT_SMW_DUCK_JUMP) {
                o->oAnimState = 4;
            } else {
                o->oAnimState = 1;
                o->oPosX -= 10 * sins(gMarioState->faceAngle[1] - DEGREES(90));
                o->oPosZ -= 10 * coss(gMarioState->faceAngle[1] - DEGREES(90));
            }
        }
    }
}

// Model ID: MODEL_SMW_PARTICLES
// animstates 0 = kick
//            1 = poof 1
//            2 = poof 2
//            3 = poof 3
//            4 = poof 4
//            5 = star
//            6 = shatter 1
//            7 = shatter 2


// Behavior: bhvSMWParticlekick
// Model ID: MODEL_SMW_PARTICLES
void bhv_smw_particle_kick(void) {
    switch (o->oF4) {
        case 0:
            //o->oFaceAngleYaw = gMarioStates->faceAngle[1];
            o->oPosX += 10 * sins(o->oFaceAngleYaw - DEGREES(90));
            o->oPosZ += 10 * coss(o->oFaceAngleYaw - DEGREES(90));
            break;
        case 1:
            o->oFaceAngleYaw -= 0x8000;
            break;
        case 2:
            obj_mark_for_deletion(o);
            break;
    }
    o->oF4++;
}

// Behavior: bhvSMWParticlestar
// Model ID: MODEL_SMW_PARTICLES
void bhv_smw_particle_star(void) {
    u8 speed = 30 - (6 * o->oF4);
    o->oAnimState = 5;
    obj_scale(o, 0.4f);

    if (o->oF4 > 5) {
        obj_mark_for_deletion(o);
    } else {
        o->oF4++;

        o->oPosY += 0.5f * speed * (GET_BPARAM1(o->oBehParams) ? 1 : -1);

        o->oPosX += speed * sins(o->oFaceAngleYaw) * (GET_BPARAM2(o->oBehParams) ? 1 : -1);
        o->oPosZ += speed * coss(o->oFaceAngleYaw) * (GET_BPARAM2(o->oBehParams) ? 1 : -1);
    }
}

// Behavior: bhvSMWParticlepoof
// Model ID: MODEL_SMW_PARTICLES
void bhv_smw_particle_poof(void) {
    switch (o->oF4) {
        case 0:
            //o->oFaceAngleYaw = gMarioStates->faceAngle[1];
            o->oPosX += 10 * sins(o->oFaceAngleYaw - DEGREES(90));
            o->oPosZ += 10 * coss(o->oFaceAngleYaw - DEGREES(90));
            o->oAnimState = 1;
            break;
        case 3:
            o->oAnimState = 2;
            break;
        case 6:
            o->oAnimState = 3;
            break;
        case 9:
            o->oAnimState = 4;
            break;
        case 12:
            obj_mark_for_deletion(o);
            break;
    }
    o->oF4++;
    obj_scale(o, 1.4f);
}

// Behavior: bhvSMWParticleShatter
// Model ID: MODEL_SMW_PARTICLES
void bhv_smw_particle_shatter(void) {
    if (o->oTimer % 4 == 0) {   
        switch (o->oAnimState) {
            case 6:
                o->oAnimState = 7;
                break;
            default:
                o->oAnimState = 6;
                break;
        }
    }

    if (o->oVelY <= -50) {
        o->oVelY = -50;
    } else {
        o->oVelY -= 3;
    }

    o->oPosX += o->oForwardVel * sins(o->oFaceAngleYaw);
    o->oPosY += o->oVelY;
    o->oPosZ += o->oForwardVel * coss(o->oFaceAngleYaw);

    if (o->oTimer > 120) {
        obj_mark_for_deletion(o);
    }
}

void spawn_super_stomp_poof(void) {
    u8 i;
    spawn_object(o, MODEL_SMW_PARTICLES, bhvSMWParticlepoof);
    
    for (i = 0; i < 4; i++) {
        struct Object *star = spawn_object(o, MODEL_SMW_PARTICLES, bhvSMWParticlestar);

        star->oF4 = 0;

        star->oPosY += 30;

        //star->oPosX += 10 * sins(o->oFaceAngleYaw - DEGREES(90));
        //star->oPosZ += 10 * coss(o->oFaceAngleYaw - DEGREES(90));

        SET_BPARAM1(star->oBehParams, (i < 2));
        SET_BPARAM2(star->oBehParams, (i % 2 == 0));
    }
}

void spawn_shatter(void) {
    u8 i;
    
    for (i = 0; i < 4; i++) {
        struct Object *shatter = spawn_object(o, MODEL_SMW_PARTICLES, bhvSMWParticleShatter);

        shatter->oPosY += 30;

        shatter->oForwardVel = 20 * ((i < 2) ? 1 : -1);
        shatter->oVelY = 20 * ((i % 2 == 0) ? 1 : -1);
    }
}

// Model ID: MODEL_SMW_BLOCKS
// animstates 0 = coin 1
//            1 = coin 2
//            2 = coin 3
//            3 = coin 4
//            4 = turn block 1
//            5 = turn block 2
//            6 = turn block 3
//            7 = turn block 4
//            8 = message block
//            9 = on switch
//            10 = off switch

static struct ObjectHitbox smwBlock = {
    /* interactType:      */ INTERACT_SMW_BLOCK,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 40,
    /* height:            */ 200,
    /* hurtboxRadius:     */ 40,
    /* hurtboxHeight:     */ 200,
};

// Behavior: bhvSMWTurnBlock
// Model ID: MODEL_SMW_blocks

void bhv_smw_turn_block_init(void) {
    obj_set_hitbox(o, &smwBlock); 
    o->oAnimState = 4;
}

void bhv_smw_turn_block(void) {
    if (o->oInteractStatus == 0xC006) {
        cur_obj_play_sound_2(SOUND_CUSTOM_SMW_SLAM);
        spawn_object(o, MODEL_SMW_BLOCKS, bhvSMWTurnBlockSpin);
        gMarioState->vel[1] = 0;
        obj_mark_for_deletion(o);
        return;
    } else if (o->oInteractStatus != 0 && gMarioState->prevAction == ACT_SMW_SPIN_JUMP && gMarioState->actionTimer < 3) {
        cur_obj_play_sound_2(SOUND_CUSTOM_SMW_SHATTER);
        gMarioState->vel[1] = 20;
        gMarioState->action = ACT_SMW_SPIN_JUMP;
        spawn_shatter();
        obj_mark_for_deletion(o);
    }

    o->oInteractStatus = 0;
}

void bhv_smw_turn_block_spin(void) {
    if (o->oTimer % 4 == 0) {   
        switch (o->oAnimState) {
            case 4:
                o->oAnimState = 5;
                break;
            case 5:
                o->oAnimState = 6;
                break;
            case 6:
                o->oAnimState = 7;
                break;
            default:
                o->oAnimState = 4;
                break;
        }
    }

    if (o->oTimer > 180) {
        if (o->oInteractStatus == 0) {
            spawn_object(o, MODEL_SMW_BLOCKS, bhvSMWTurnBlock);
            obj_mark_for_deletion(o);
            return;
        }
    }

    o->oInteractStatus = 0;
}

// Behavior: bhvSMWOnOffSwitch
// Model ID: MODEL_ON_OFF_SWITCH

void bhv_smw_on_off_switch_init(void) {
    obj_set_hitbox(o, &smwBlock); 
    o->oHomeY = o->oPosY; 
}

void bhv_smw_on_off_switch(void) {

    if ((o->oInteractStatus == 0xC006 || o->oInteractStatus == 420) && o->oTimer > 3) {
        cur_obj_play_sound_2(SOUND_CUSTOM_SMW_SWITCH);
        o->oTimer = 0;
        gMarioState->vel[1] = 0;
        o->oVelY = 10;
        o->oPosY += 10;

        if (o->oAnimState == 0) {
            o->oAnimState = 1;
        } else {
            o->oAnimState = 0;
        }

        uintptr_t *behaviorAddr = segmented_to_virtual(bhvSMWOnOffSwitch);
        struct ObjectNode *listHead = &gObjectLists[get_object_list_from_behavior(behaviorAddr)];
        struct Object *obj = (struct Object *) listHead->next;
    
        while (obj != (struct Object *) listHead) {
            if (obj->behavior == behaviorAddr
            ) {
                obj->oAnimState = o->oAnimState;
            }
    
            obj = (struct Object *) obj->header.next;
        }
    }

    if (o->oPosY > o->oHomeY) {
        o->oPosY += o->oVelY;
        o->oVelY -= 4;
    } else {
        o->oPosY = o->oHomeY;
    }

    o->oInteractStatus = 0;
}

// Behavior: bhvSMWMessageBlock
// Model ID: MODEL_SMW_blocks

void bhv_smw_message_block_init(void) {
    obj_set_hitbox(o, &smwBlock); 
    o->oHomeY = o->oPosY; 
    o->oAnimState = 8;
}

void bhv_smw_message_block(void) {
    if (o->oInteractStatus == 0xC006) {
        o->oVelY = 10;
        o->oPosY += 10;
        o->oInteractStatus = 0xC007;
        gMarioState->actionArg = 69;
        gMarioState->vel[1] = 0;

        cur_obj_play_sound_2(SOUND_CUSTOM_SMW_SLAM);
    } else if (o->oInteractStatus == 0xC007) {
        if (cur_obj_update_dialog_with_cutscene(MARIO_DIALOG_LOOK_FRONT, DIALOG_FLAG_NONE, CUTSCENE_DIALOG, GET_BPARAM2(o->oBehParams))) {
            o->oInteractStatus = 0;

            // if the npc should do something (throw or just kill mario, explode, open a cannon, spawn a star, etc)
            // after being spoken too, then this is where that code should go
        } 
    }

    if (!(gMarioState->action == ACT_SMW_JUMP || gMarioState->action == ACT_SMW_TEXT || gMarioState->action == ACT_SMW_SPIN_JUMP || gMarioState->action == ACT_SMW_DUCK_JUMP)) {
        o->oInteractStatus = 0;
    }

    if (o->oPosY > o->oHomeY) {
        o->oPosY += o->oVelY;
        o->oVelY -= 4;
    } else {
        o->oPosY = o->oHomeY;
    }
}

static struct ObjectHitbox smwCoin = {
    /* interactType:      */ INTERACT_SMW_BLOCK,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 80,
    /* height:            */ 80,
    /* hurtboxRadius:     */ 80,
    /* hurtboxHeight:     */ 80,
};

// Behavior: bhvSMWcoin
// Model ID: MODEL_SMW_blocks

void bhv_smw_coin_init(void) {
    obj_set_hitbox(o, &smwCoin);
    obj_scale(o, 1.0f/1.3f);
}


void bhv_smw_coin(void) {
    if (o->oInteractStatus != 0 || o->oDistanceToMario < 80) {
        spawn_object(o, MODEL_SPARKLES, bhvCoinSparklesSpawner);
        gMarioState->numCoins += 1;
        gMarioState->healCounter += 4;
        obj_mark_for_deletion(o);
        return;
    }

    if (o->oTimer % 4 == 0) {   
        switch (o->oAnimState) {
            case 0:
                o->oAnimState = 1;
                break;
            case 1:
                o->oAnimState = 2;
                break;
            case 2:
                o->oAnimState = 3;
                break;
            default:
                o->oAnimState = 0;
                break;
        }
    }
}

// Model ID: MODEL_SMW_ENEMIES_SMALL
// animstates 0 = goomba walk
//            1 = goomba stomped
//            2 = goomba dead
//            3 = ninji jump
//            4 = ninji ground
//            5 = ninji dead

static struct ObjectHitbox smwBounceTopSmall = {
    /* interactType:      */ INTERACT_BOUNCE_TOP,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 2,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 80,
    /* height:            */ 80,
    /* hurtboxRadius:     */ 80,
    /* hurtboxHeight:     */ 80,
};

// Behavior: bhvSMWgoomba
// Model ID: MODEL_SMW_ENEMIES_SMALL
void bhv_smw_goomba_init(void) {
    obj_set_hitbox(o, &smwBounceTopSmall);
}

void bhv_smw_goomba(void) {
    if (o->oInteractStatus & 3 && o->oAnimState == 0) {
        if (gMarioState->action == ACT_SMW_SPIN_JUMP) {
            obj_mark_for_deletion(o);
            spawn_super_stomp_poof();
            cur_obj_play_sound_2(SOUND_CUSTOM_SMW_SUPER_STOMP);
        } else {
            o->oTimer = 0;
            o->oAnimState = 1;
            spawn_object(o, MODEL_SMW_PARTICLES, bhvSMWParticlekick);
            cur_obj_play_sound_2(SOUND_CUSTOM_SMW_STOMP);
        }
    }

    if (o->oInteractStatus & 3 && o->oAnimState == 1) {
        if (o->oTimer >= 20) {
            obj_mark_for_deletion(o);
        }
    } else {
        if (o->oTimer % 4 == 0) {
            o->oFaceAngleYaw -= 0x8000;
        }
    
        cur_obj_update_floor_and_walls();
    
        if (o->oMoveFlags & OBJ_MOVE_HIT_WALL) {
            o->oMoveAngleYaw += 0x8000;
        }

        o->oForwardVel = 10;

        cur_obj_move_standard(-78);

        o->oInteractStatus = 0;
    }
}


// Behavior: bhvSMWninji
// Model ID: MODEL_SMW_ENEMIES_SMALL
void bhv_smw_ninji_init(void) {
    obj_set_hitbox(o, &smwBounceTopSmall);
    o->oAnimState = 4;
    o->oF8 = o->oFaceAngleYaw;
}

void bhv_smw_ninji(void) {
    if (o->oInteractStatus & 3 && o->oF4 != 1)  {
        if (gMarioState->action == ACT_SMW_SPIN_JUMP) {
            obj_mark_for_deletion(o);
            spawn_super_stomp_poof();
            cur_obj_play_sound_2(SOUND_CUSTOM_SMW_SUPER_STOMP);
        } else {
            o->oTimer = 0;
            o->oMoveFlags &= ~OBJ_MOVE_ON_GROUND;
            o->oVelY = 0;
            o->oAnimState = 5;
            spawn_object(o, MODEL_SMW_PARTICLES, bhvSMWParticlekick);
            o->oPosY -= 30;
            cur_obj_play_sound_2(SOUND_CUSTOM_SMW_STOMP);
            o->oF4 = 1;
        }
    }

    if (o->oInteractStatus & 3) {
        if (o->oTimer >= 31) {
            obj_mark_for_deletion(o);
        } else {
            o->oVelY -= 4;
            o->oPosY += o->oVelY;
            //cur_obj_move_standard(-78);
        }
    } else {    
        cur_obj_update_floor_and_walls();
    
        if (o->oMoveFlags & OBJ_MOVE_ON_GROUND) {
            if (o->oTimer > 60) {
                o->oVelY = 50;
                o->oTimer = 0;
                o->oAnimState = 3;
            }
        } else {
            o->oTimer = 0;
        }

        if (o->oVelY < 0) {
            o->oAnimState = 4;
        }

        cur_obj_move_standard(-78);

        o->oInteractStatus = 0;
        
        if (o->oAngleToMario < o->oF8 - 0x4000 || o->oAngleToMario > o->oF8 + 0x4000) {
            o->oFaceAngleYaw = o->oF8;
        } else {
            o->oFaceAngleYaw = o->oF8 + 0x8000;
        }
    }
}

// Model ID: MODEL_ON_OFF_BLOCK
// animstates 0 = red full
//            1 = red empty
//            2 = blue full
//            3 = blue empty

// Behavior: bhvOnOffBlock
// Model ID: MODEL_ON_OFF_BLOCK
void bhv_on_off_block_init(void) {
    o->oObjF4 = cur_obj_nearest_object_with_behavior(bhvSMWOnOffSwitch);
    if (GET_BPARAM1(o->oBehParams) != 0) {
        o->oAnimState = 3;
    }

    if (GET_BPARAM2(o->oBehParams) != 0) {
        obj_scale(o, (GET_BPARAM2(o->oBehParams) / 4.0f));
    }
}

void bhv_on_off_block(void) {
    if (o->oObjF4->oAnimState == 0) {
        if (GET_BPARAM1(o->oBehParams) != 0) {
            o->oAnimState = 3;
        } else {
            o->oAnimState = 0;
        }
    } else {
        if (GET_BPARAM1(o->oBehParams) != 0) {
            o->oAnimState = 2;
        } else {
            o->oAnimState = 1;
        }
    }


    if (o->oAnimState == 0 || o->oAnimState == 2) {
        load_object_collision_model();
    }
}