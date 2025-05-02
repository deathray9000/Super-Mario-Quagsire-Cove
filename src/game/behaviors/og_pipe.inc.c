// og_pipe.inc.c // ogpipe.inc.c

// Bparam behavior
// Bparam 1 = color (0 = green, 1 = red, 2 = blue, 3 = gold, 4 = SMW green)
// Bparam 2 = warp ID
// Bparam 4 = required star ID for hidden pipes to spawn and become normal
// Bparam 3 = Pipe behavior:
//    0 = normal (differnet level transition), 
//    1 = disappearing (pipe is hidden unless warped to, after which it spawns mario and disappears again), 
//    2 = hidden (pipe is hidden until a specific star is collected, at which point it becomes a normal pipe), 
//    3 = mario start override (disappearing pipe, but with logic for handling both a hardcoded mario spawn and a standard warp), 
//    4 = 3D transition (will instantly teleport mario to a 3D warp pipe of the same Bparam without changing level or area)
//    5 = 2D transition (will instantly teleport mario to a 2D warp pipe of the same Bparam without changing level or area)


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

static void find_nearest_mario() {
    f32 sqrLateralDist = 99999999999999.0f;
    Vec3f dist;
    for (int i = 0; i < COOP_MARIO_STATES_MAX; i++) {
        if (gMarioStates[i].marioObj == NULL) {continue;}

        vec3_diff(dist, &o->oPosVec, gMarioStates[i].pos);
        f32 compareSqrLatDist = sqr(dist[0]) + sqr(dist[2]) + sqr(dist[1]);
        if (sqrLateralDist > compareSqrLatDist) {
            sqrLateralDist = compareSqrLatDist;
            o->oF8 = i;
        }
    }

    o->oDistanceToMario = sqrtf(sqrLateralDist);
}

void bhv_og_pipe_init(void) {
    find_nearest_mario();
    obj_set_hitbox(o, &sPipe);
    o->oAnimState = GET_BPARAM1(o->oBehParams);
    o->oHomeX = o->oPosX;
    o->oHomeY = o->oPosY;
    o->oHomeZ = o->oPosZ;
    f32 dist;

    if (GET_BPARAM3(o->oBehParams) == 1) { // disappearing pipe
        o->oAction = 1;
        o->oDistanceToMario = dist_between_objects(o, gMarioObject);
        if (gMarioState->action == ACT_EXIT_PIPE && o->oDistanceToMario <= 100) {
            gMarioState->pos[1] -= 150;
        }
    }

    if (GET_BPARAM3(o->oBehParams) == 2) { // hidden pipe that appears when a specific star has been collected
        if (save_file_get_star_flags((gCurrSaveFileNum - 1), COURSE_NUM_TO_INDEX(GET_BPARAM4(o->oBehParams) / 7)) & (1 << (GET_BPARAM4(o->oBehParams) % 7))) {
            SET_BPARAM3(o->oBehParams, 0);
        } else {
            o->oPosY = o->oHomeY - 150;
        }
    }

    if (GET_BPARAM3(o->oBehParams) == 3) { // override code for initally spawning from a pipe after selecting save file
        o->oAction = 1;
        SET_BPARAM3(o->oBehParams, 1);
        o->oDistanceToMario = dist_between_objects(o, gMarioObject);
        if (o->oDistanceToMario <= 100) {
            if (gMarioState->action == ACT_EXIT_PIPE) {
                gMarioState->pos[1] -= 150;
            } else {
                gMarioState->action = ACT_EXIT_PIPE;
                gMarioState->pos[1] += 20;
            }
        }
    }

    if (GET_BPARAM3(o->oBehParams) == 4) { // override code for initally spawning from a pipe after selecting save file
        o->oObjF4 = cur_obj_find_nearest_twin_object(&dist);

        if (o->oObjF4 == NULL) { // in the event that no twin was found, just send mario back to the pipe he entered
            o->oObjF4 == o;
        }
    }
};

static void dissapearing_pipe(void) {
    if (o->oAction == 0) {
        o->oPosY = o->oHomeY - 150;
        if (o->oInteractStatus = INT_STATUS_INTERACTED) {
            o->oAction = 1;
        }
    } 
    
    if (o->oAction == 1) {
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

static void hidden_pipe(void) {
    if (save_file_get_star_flags((gCurrSaveFileNum - 1), COURSE_NUM_TO_INDEX(GET_BPARAM4(o->oBehParams) / 7)) & (1 << (GET_BPARAM4(o->oBehParams) % 7))) {        
        if (gMarioState->action != ACT_STAR_DANCE_EXIT && gMarioState->action != ACT_STAR_DANCE_NO_EXIT &&
        gMarioState->action != ACT_STAR_DANCE_WATER && gMarioState->action != ACT_FALL_AFTER_STAR_GRAB) {
            if (o->oAction == 0) {
                spawn_mist_particles();
                cur_obj_play_sound_2(SOUND_ACTION_PIPE_RISE);
                o->oTimer = 0;
                o->oAction = 1;
            }

            if (o->oTimer < 15) {
                o->oPosY += 10;
            } else {
                SET_BPARAM3(o->oBehParams, 0);
            }
        }
    }
}

void bhv_og_pipe_loop(void) {
    find_nearest_mario();

    if (GET_BPARAM3(o->oBehParams) == 1) {
        dissapearing_pipe();
    } else if (GET_BPARAM3(o->oBehParams) == 2) {
        hidden_pipe();
    }

    o->oInteractStatus = 0;

    if (GET_BPARAM2(o->oBehParams) == 0xFF && gMarioState->action == ACT_ENTER_PIPE && dist_between_objects(o, gMarioObject) <= 200) {
        start_cutscene(gCamera, CUTSCENE_QUICKSAND_DEATH);
        set_fov_function(CAM_FOV_SET_45);
        level_trigger_warp(gMarioState, WARP_OP_CREDITS_END);
        set_background_music(0, SEQ_EVENT_CUTSCENE_CREDITS, 0);
    }
    
};