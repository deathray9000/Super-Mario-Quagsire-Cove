// quagsire.c.inc

static struct ObjectHitbox squagbox = {
    /* interactType:      */ INTERACT_TEXT,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 100,
    /* height:            */ 200,
    /* hurtboxRadius:     */ 110,
    /* hurtboxHeight:     */ 210,
};

void bhv_quagsire_init(void) {
    o->oHomeX = o->oPosX;
    o->oHomeY = o->oPosY;
    o->oHomeZ = o->oPosZ;
    obj_set_hitbox(o, &squagbox);
    cur_obj_init_animation(0);
};

void bhv_quagsire_loop(void) {
    switch (o->oInteractStatus) {
        case INT_STATUS_HIT_MINE: // code for when attacked from the side (punched, dive, slide kick, etc)
            o->oPosY = o->oHomeY;
            cur_obj_play_sound_2(SOUND_ACTION_QUAG_ATTACKED);
            o->oInteractStatus = 3;
            o->oAnimState = 6;
            o->oFaceAngleYaw = o->oAngleToMario;
            cur_obj_init_animation(0);
            break;
        case 2:
            o->oVelX = 0;
            quag_stunned();
            break;
        case 3:
            o->oVelX = 0;
            quag_attacked();
            break;
        case 4:
            quag_mad();
            break;
        case INT_STATUS_INTERACTED: // code that inits that talking phase, and plays the non-looping talking animation
            o->oPosY = o->oHomeY;
            o->oFaceAngleYaw = o->oAngleToMario;
            
            if (!cur_obj_init_animation_and_check_if_near_end(4)) {
                if (o->oAnimState != 5) {
                    o->oAnimState = 4;
                }
            } else {
                o->oAnimState = 0;
                o->oInteractStatus = 5;
                cur_obj_init_animation(0);
            }
            // no break so that this code falls through and activates the dialog
        case 5: // actual dialog code
            if (cur_obj_update_dialog_with_cutscene(MARIO_DIALOG_LOOK_FRONT, DIALOG_FLAG_NONE, CUTSCENE_DIALOG, GET_BPARAM2(o->oBehParams))) {
                o->oInteractStatus = 0;
                o->oAnimState = 0;
                cur_obj_init_animation(0);

                // if the npc should do something (throw or just kill mario, explode, open a cannon, spawn a star, etc)
                // after being spoken too, then this is where that code should go
            } 
            break;
        case INT_STATUS_WAS_ATTACKED: // code for when attacked from above (jump, ground pound, twirl, etc)
            o->oPosY = o->oHomeY;
            cur_obj_play_sound_2(SOUND_ACTION_QUAG_ATTACKED);
            o->oInteractStatus = 2;
            o->oAnimState = 6;
            cur_obj_init_animation(0);
            break;
        case 0: // defualt
            quag_idle();
            break;
        }

    if (o->oTimer == o->oGoombaWalkTimer) { // blink timer
        if (o->oAnimState != 6) {
            o->oAnimState++;
        }
    } else if (o->oTimer == o->oGoombaWalkTimer + 10) {
        if (o->oAnimState % 2 == 1) {
            o->oAnimState--;
        }
        o->oTimer = 0;
        o->oGoombaWalkTimer = random_linear_offset(30, 50) + 10;
    }
};

void quag_idle(void) {
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

void quag_stunned(void) {
    if (cur_obj_init_animation_and_check_if_near_end(1)) {
            o->oInteractStatus = 4;
            o->oAnimState = 2;
            cur_obj_init_animation(0);
        }
}

void quag_attacked(void) {
    if (cur_obj_init_animation_and_check_if_near_end(2)) {
        o->oInteractStatus = 4;
        o->oAnimState = 2;
        cur_obj_init_animation(0);
    }
}

void quag_mad(void) {
    s16 Turn = o->oFaceAngleYaw - o->oAngleToMario;

    if (o->oFaceAngleYaw != o->oAngleToMario && o->oVelX == (0)) {
        if(Turn < -1600) {
            o->oFaceAngleYaw += 2000;
        } else if(Turn > 1600) {
            o->oFaceAngleYaw -= 2000;
        } else {
            o->oFaceAngleYaw = o->oAngleToMario;
            o->oVelX = 2;
        }
    } else {
        cur_obj_init_animation(3);

        if (o->oVelX == 3) {
            cur_obj_play_sound_2(SOUND_ACTION_QUAG_ATTACKED);
        } else if (o->oVelX == 34) { // executes once mad animation is completed (set the value after == to the animations length + 3)
                o->oInteractStatus = 0;
                o->oAnimState = 0;
                cur_obj_init_animation(0);
            
        }

        o->oVelX++;
    }
}