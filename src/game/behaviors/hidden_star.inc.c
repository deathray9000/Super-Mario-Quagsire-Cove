// hidden_star.inc.c
// silver_star.inc.c

void bhv_hidden_star_init(void) {
    s16 remainingTriggers = count_objects_with_behavior(bhvHiddenStarTrigger);
    if (remainingTriggers == 0) {
        struct Object *starObj = spawn_object_abs_with_rot(o, 0, MODEL_STAR, bhvStarSpawnCoordinates, o->oPosX, o->oPosY, o->oPosZ, 0, 0, 0);
        SET_BPARAM1(starObj->oBehParams, GET_BPARAM1(o->oBehParams));
        vec3f_set(&starObj->oHomeVec, o->oPosX, o->oPosY, o->oPosZ);
        starObj->oFaceAnglePitch = 0;
        starObj->oFaceAngleRoll = 0;
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    }

    o->oHiddenStarTriggerCounter = 5 - remainingTriggers;
}

void bhv_hidden_star_loop(void) {
    o->oTimer++;
    switch (o->oAction) {
        case 0:
            o->oHomeX = 150;
            o->oHomeY = 100;
            o->oHomeZ = 1;
            o->oPosX = gMarioState->pos[0];
            o->oPosY = gMarioState->pos[1];
            o->oPosZ = gMarioState->pos[2];
            if (o->oHiddenStarTriggerCounter == 5 && (gMarioState->lastSafePos[0] == gMarioState->pos[0]) && (gMarioState->lastSafePos[1] == gMarioState->pos[1]) && (gMarioState->lastSafePos[2] == gMarioState->pos[2])) {
                o->oAction = 1;
            }
            break;

        case 1:
            if (o->oSubAction == 62) {                
                struct Object *starObj = spawn_object_abs_with_rot(o, 0, MODEL_STAR, bhvStarSpawnCoordinates, o->oPosX, o->oPosY + 100, o->oPosZ, 0, 0, 0);
                SET_BPARAM1(starObj->oBehParams, GET_BPARAM1(o->oBehParams));
                vec3f_set(&starObj->oHomeVec, o->oPosX, o->oPosY + 300, o->oPosZ);
                starObj->oFaceAnglePitch = 0;
                starObj->oFaceAngleRoll = 0;

                spawn_mist_particles();
                o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
            } else if (o->oSubAction > 40) {
                o->oHomeZ -= 0.05f;
            } else if (o->oSubAction > 20) {
                o->oHomeX -= 7.5f;
            } else {
                o->oHomeY = 1200;
            }
            o->oSubAction += 1;
            break;
    }
}

void bhv_hidden_star_trigger_loop(void) {
    struct Object *hiddenStar = cur_obj_nearest_object_with_behavior(bhvHiddenStar);
    o->oFaceAngleYaw += 0x800;

    if (hiddenStar == NULL) {
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    } else if (obj_check_if_collided_with_object(o, gMarioObject) &&  o->oAction == 0) {
        hiddenStar->oHiddenStarTriggerCounter++;

        spawn_orange_number(hiddenStar->oHiddenStarTriggerCounter, 0, 0, 0);
        SET_BPARAM2(o->oBehParams, hiddenStar->oHiddenStarTriggerCounter);


        play_sound(SOUND_MENU_COLLECT_SECRET + (((u8) hiddenStar->oHiddenStarTriggerCounter - 1) << 16), gGlobalSoundSource);
        o->oAction = 1;
    } else if (o->oAction == 1) {
        o->oHomeX = (hiddenStar->oHomeX * sins(hiddenStar->oHomeY * hiddenStar->oTimer + (GET_BPARAM2(o->oBehParams) * (DEGREES(360) / hiddenStar->oHiddenStarTriggerCounter)))) + hiddenStar->oPosX;
        o->oHomeY = hiddenStar->oPosY + 100;
        o->oHomeZ = (hiddenStar->oHomeX* coss(hiddenStar->oHomeY * hiddenStar->oTimer + (GET_BPARAM2(o->oBehParams) * (DEGREES(360) / hiddenStar->oHiddenStarTriggerCounter)))) + hiddenStar->oPosZ;

        cur_obj_scale(hiddenStar->oHomeZ);
        if (o->header.gfx.scale[0] < 0.05f) {
            o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
        }

        if (o->oPosX != o->oHomeX) {
            o->oPosX += (o->oHomeX - o->oPosX)/10;
        }

        if (o->oPosY != o->oHomeY) {
            o->oPosY += (o->oHomeY - o->oPosY)/10;
        }
        
        if (o->oPosZ != o->oHomeZ) {
            o->oPosZ += (o->oHomeZ - o->oPosZ)/10;
        }
    }
}

void bhv_bowser_course_red_coin_star_init(void) {
    if (o->oBehParams2ndByte != 0) {
        o->oHiddenStarTriggerTotal = o->oBehParams2ndByte;
        o->oHiddenStarTriggerCounter = gRedCoinsCollected;
    }
    else {
        s16 numRedCoinsRemaining = count_objects_with_behavior(bhvRedCoin);
        o->oHiddenStarTriggerTotal = numRedCoinsRemaining + gRedCoinsCollected;
        o->oHiddenStarTriggerCounter = o->oHiddenStarTriggerTotal - numRedCoinsRemaining;
    }
}

void bhv_bowser_course_red_coin_star_loop(void) {
    gRedCoinsCollected = o->oHiddenStarTriggerCounter;

    switch (o->oAction) {
        case 0:
            if (o->oHiddenStarTriggerCounter == o->oHiddenStarTriggerTotal) {
                o->oAction = 1;
            }
            break;

        case 1:
            if (o->oTimer > 2) {
                spawn_no_exit_star(o->oPosX, o->oPosY, o->oPosZ);
                spawn_mist_particles();
                o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
            }
            break;
    }
}
