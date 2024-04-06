// og_pipe.c.inc

static struct ObjectHitbox sPipe = {
    /* interactType:      */ INTERACT_WARP,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 80,
    /* height:            */ 140,
    /* hurtboxRadius:     */ 90,
    /* hurtboxHeight:     */ 140,
};

void bhv_og_pipe_init(void) {
    obj_set_hitbox(o, &sPipe);
    o->oAnimState = GET_BPARAM1(o->oBehParams);
    o->oHomeX = o->oPosX;
    o->oHomeY = o->oPosY;
    o->oHomeZ = o->oPosZ;

    if (GET_BPARAM3(o->oBehParams) == 1) {
        o->oAction = 1;
        o->oDistanceToMario = dist_between_objects(o, gMarioObject);
        if (gMarioState->action == ACT_EXIT_PIPE && o->oDistanceToMario <= 100) {
            gMarioState->pos[1] -= 150;
        }
    }
};

void bhv_og_pipe_loop(void) {
    if (GET_BPARAM3(o->oBehParams) == 1) {
        if (o->oAction == 0) {
            o->oPosY = o->oHomeY - 150;
            if (o->oInteractStatus = INT_STATUS_INTERACTED) {
                o->oAction = 1;
            }
        } 
        
        if (o->oAction == 1) {
            o->oDistanceToMario = dist_between_objects(o, gMarioObject);
            if (gMarioState->action == ACT_EXIT_PIPE && o->oDistanceToMario <= 100) {
                o->oAction = 2;
                gMarioState->actionState = 1;
                o->oPosY = o->oHomeY - 140;
                cur_obj_play_sound_2(SOUND_ACTION_PIPE_RISE);
            } else {
                o->oAction = 0;
            }
        } else {
            if (o->oTimer == 65) {
                o->oAction = 0;
                spawn_mist_particles();
            } else if (o->oTimer >= 55) {
                o->oPosY -= 10;
                if (o->oTimer == 55) {
                    cur_obj_play_sound_2(SOUND_ACTION_PIPE_LOWER);
                }
            } else if (o->oTimer < 15) {
                o->oPosY += 10;
            }
        }
    }

    o->oInteractStatus = 0;

    if (GET_BPARAM2(o->oBehParams) == 0xFF && gMarioState->action == ACT_ENTER_PIPE && dist_between_objects(o, gMarioObject) <= 200) {
        start_cutscene(gCamera, CUTSCENE_QUICKSAND_DEATH);
        set_fov_function(CAM_FOV_SET_45);
        level_trigger_warp(gMarioState, WARP_OP_CREDITS_END);
        set_background_music(0, SEQ_EVENT_CUTSCENE_CREDITS, 0);
    }
};