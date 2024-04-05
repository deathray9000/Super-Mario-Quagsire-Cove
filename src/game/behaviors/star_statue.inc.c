// star_statue.c.inc

static struct ObjectHitbox sStatbox = {
    /* interactType:      */ INTERACT_TEXT,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 175,
    /* height:            */ 275,
    /* hurtboxRadius:     */ 200,
    /* hurtboxHeight:     */ 300,
};

void bhv_StarStatue_init(void) {
    obj_set_hitbox(o, &sStatbox);

    u8 currentStarFlags = save_file_get_star_flags((gCurrSaveFileNum - 1), COURSE_NUM_TO_INDEX(GET_BPARAM1(o->oBehParams) / 7));
    if (currentStarFlags & (1 << (GET_BPARAM1(o->oBehParams) % 7))) {
        o->oAction = 1;
    } 
    
    if (save_file_get_coin_stars(gCurrSaveFileNum) == 2) {
        o->oAction = 4;
    }
};

void bhv_StarStatue_loop(void) {
    if (o->oInteractStatus == INT_STATUS_INTERACTED) {
        switch (o->oAction) {
            case (0): {
                s32 dialogResponse = cur_obj_update_dialog_with_cutscene(MARIO_DIALOG_LOOK_UP, DIALOG_FLAG_NONE, CUTSCENE_RACE_DIALOG, 0);
                if (dialogResponse == DIALOG_RESPONSE_YES) {
                    if (gMarioState->numCoins < 100) {
                        o->oAction = 3;
                    } else {
                        gMarioState->numCoins -= 100;
                        gHudDisplay.coins -= 100;
                        
                        o->oAction = 5;
                        o->oInteractStatus = 0;
                        
                        struct Object *starObj = spawn_object_abs_with_rot(o, 0, MODEL_STAR, bhvStarSpawnCoordinates, o->oPosX, o->oPosY + 200, o->oPosZ, 0, 0, 0);
                        SET_BPARAM1(starObj->oBehParams, GET_BPARAM1(o->oBehParams));
                        vec3f_set(&starObj->oHomeVec, o->oPosX + (200 * sins(o->oFaceAngleYaw)), o->oPosY + 300, o->oPosZ + (200 * coss(o->oFaceAngleYaw)));
                        starObj->oFaceAnglePitch = 0;
                        starObj->oFaceAngleRoll = 0;
                    }            
                } else if (dialogResponse == DIALOG_RESPONSE_NO) {
                    o->oAction = 2;
                } else if (dialogResponse == DIALOG_RESPONSE_IGNORED) {
                    o->oInteractStatus = 0;
                }
                break;
            }

            case (1): {
                if  (cur_obj_update_dialog_with_cutscene(MARIO_DIALOG_LOOK_UP, DIALOG_FLAG_NONE, CUTSCENE_DIALOG, 1)) {
                    o->oInteractStatus = 0;
                }
                break;
            }

            case (2): {
                if  (cur_obj_update_dialog_with_cutscene(MARIO_DIALOG_LOOK_UP, DIALOG_FLAG_NONE, CUTSCENE_DIALOG, 2)) {
                    o->oInteractStatus = 0;
                    o->oAction = 0;
                }
                break;
            }

            case (3): {
                if  (cur_obj_update_dialog_with_cutscene(MARIO_DIALOG_LOOK_UP, DIALOG_FLAG_NONE, CUTSCENE_DIALOG, 3)) {
                    o->oInteractStatus = 0;
                    o->oAction = 0;
                }
                break;
            }

            case (4): {
                if  (cur_obj_update_dialog_with_cutscene(MARIO_DIALOG_LOOK_UP, DIALOG_FLAG_NONE, CUTSCENE_DIALOG, 4)) {
                    o->oInteractStatus = 0;
                }
                break;
            }

            case (5): {
                if  (cur_obj_update_dialog_with_cutscene(MARIO_DIALOG_LOOK_UP, DIALOG_FLAG_NONE, CUTSCENE_DIALOG, 5)) {
                    o->oInteractStatus = 0;
                }
                break;
            }
        }
    } 

    if (o->oAction == 5) {
        u8 currentStarFlags = save_file_get_star_flags((gCurrSaveFileNum - 1), COURSE_NUM_TO_INDEX(GET_BPARAM1(o->oBehParams) / 7));

        if (currentStarFlags & (1 << (GET_BPARAM1(o->oBehParams) % 7))) {
            save_file_set_coin_stars(gCurrSaveFileNum);

            if (save_file_get_coin_stars(gCurrSaveFileNum) == 2) {
                o->oAction = 4;
            } else {
                o->oAction = 1;
            }
        } 
    }
};