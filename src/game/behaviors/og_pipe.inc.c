// wooper.c.inc

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
};

void bhv_og_pipe_loop(void) {

};