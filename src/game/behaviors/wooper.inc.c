// wooper.c.inc

static struct ObjectHitbox sWoopbox = {
    /* interactType:      */ INTERACT_TEXT,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 80,
    /* height:            */ 80,
    /* hurtboxRadius:     */ 90,
    /* hurtboxHeight:     */ 90,
};

void bhv_wooper_init(void) {
    o->oHomeX = o->oPosX;
    o->oHomeY = o->oPosY;
    o->oHomeZ = o->oPosZ;
    obj_set_hitbox(o, &sWoopbox);
    cur_obj_init_animation(1);
};

void bhv_wooper_loop(void) {

    switch (o->oInteractStatus) {
        case INT_STATUS_HIT_MINE:
            o->oPosY = o->oHomeY;
            cur_obj_play_sound_2(SOUND_ACTION_WOOPER_ATTACKED);
            o->oInteractStatus = 3;
            o->oAnimState = 2;
            o->oFaceAngleYaw = o->oAngleToMario;
            cur_obj_init_animation(1);
            break;
        case 2:
            o->oTimer = 0;
            wooper_stunned();
            break;
        case 3:
            o->oTimer = 0;
            wooper_attacked();
            break;
        case 4:
            wooper_mad();
            break;
        case INT_STATUS_INTERACTED:
            o->oPosY = o->oHomeY;
            o->oFaceAngleYaw = o->oAngleToMario;
            if (cur_obj_update_dialog_with_cutscene(MARIO_DIALOG_LOOK_DOWN, DIALOG_FLAG_NONE, CUTSCENE_DIALOG, GET_BPARAM2(o->oBehParams))) {
                 o->oInteractStatus = 0;
                 o->oAnimState = 0;
            } else {
                 o->oAnimState = 3;
                 cur_obj_init_animation(1);
            }
            break;
        case INT_STATUS_WAS_ATTACKED:
            o->oPosY = o->oHomeY;
            cur_obj_play_sound_2(SOUND_ACTION_WOOPER_ATTACKED);
            o->oInteractStatus = 2;
            o->oAnimState = 2;
            cur_obj_init_animation(1);
            break;
        case 0:
            wooper_idle();
            break;
        }

    if (o->oGoombaBlinkTimer == o->oGoombaWalkTimer) {
        if (o->oAnimState == 0) {
            o->oAnimState = 4;
        }
        if (o->oAnimState == 1) {
            o->oAnimState = 5;
        }
    } else if (o->oGoombaBlinkTimer == o->oGoombaWalkTimer + 10) {
        if (o->oAnimState == 4) {
            o->oAnimState = 0;
        }
        if (o->oAnimState == 5) {
            o->oAnimState = 1;
        }
        o->oGoombaBlinkTimer = 0;
        o->oGoombaWalkTimer = random_linear_offset(30, 50) + 10;
    }
    o->oGoombaBlinkTimer++;
};

void wooper_idle(void) {
    s16 Turn;

    if (o->oDistanceToMario < 800.0f) {
        Turn = o->oFaceAngleYaw - o->oAngleToMario;
        if(Turn < -400) {
            o->oFaceAngleYaw += 500;
        } else if(Turn > 400) {
            o->oFaceAngleYaw -= 500;
        } else {
            o->oFaceAngleYaw = o->oAngleToMario;
        }
    }
}

void wooper_stunned(void) {
    if (cur_obj_init_animation_and_check_if_near_end(2)) {
            o->oInteractStatus = 4;
            o->oAnimState = 1;
            cur_obj_init_animation(1);
        }
}

void wooper_attacked(void) {
    if (cur_obj_init_animation_and_check_if_near_end(3)) {
        o->oInteractStatus = 4;
        o->oAnimState = 1;
        cur_obj_init_animation(1);
    }
}

void wooper_mad(void) {
    s16 Turn = o->oFaceAngleYaw - o->oAngleToMario;

    if (o->oFaceAngleYaw != o->oAngleToMario && o->oTimer == (0 | 1)) {
        if(Turn < -1600) {
            o->oTimer = 0;
            o->oFaceAngleYaw += 2000;
        } else if(Turn > 1600) {
            o->oTimer = 0;
            o->oFaceAngleYaw -= 2000;
        } else {
            o->oFaceAngleYaw = o->oAngleToMario;
            o->oTimer = 2;
        }
    } else {
        cur_obj_init_animation(4);

        switch (o->oTimer) {
            case 3:
                cur_obj_play_sound_2(SOUND_ACTION_WOOPER_ATTACKED);
                break;
            case 9:
                o->oVelY = 7;
                break;
            case 30:
                cur_obj_play_sound_2(SOUND_ACTION_WOOPER_ATTACKED);
                break;
            case 37:
                o->oVelY = 7;
                break;
            case 58:
                o->oInteractStatus = 0;
                o->oAnimState = 0;
                cur_obj_init_animation(1);
                break;
        }

        o->oPosY += o->oVelY;

        if (o->oPosY <= o->oHomeY) {
            o->oPosY = o->oHomeY;
        } else {
            o->oVelY--;
        }
    }
}