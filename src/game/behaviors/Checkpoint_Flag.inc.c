// checkpoint_flag.inc.c

#include "src/game/save_file.h"

static struct ObjectHitbox sFlag = {
    /* interactType:      */ INTERACT_COIN,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 60,
    /* height:            */ 300,
    /* hurtboxRadius:     */ 90,
    /* hurtboxHeight:     */ 90,
};

void bhv_Checkpoint_Flag_init(void) {
    obj_set_hitbox(o, &sFlag);

    if (gWarpCheckpoint.levelID == gCurrLevelNum && gWarpCheckpoint.warpNode == GET_BPARAM2(o->oBehParams) && gWarpCheckpoint.areaNum == gCurrentArea->index) {
         o->oAnimState = 1;
    }
}

void bhv_Checkpoint_Flag_loop(void) {
    if (o->oInteractStatus == INT_STATUS_INTERACTED) {
        o->oAnimState = 1;
        o->oInteractStatus = 2;
    } else if (o->oInteractStatus == 3) {
        o->oInteractStatus = 2;
    } else {
        o->oInteractStatus = 0;
    }

    if (gWarpCheckpoint.warpNode != GET_BPARAM2(o->oBehParams)) {
        o->oAnimState = 0;
    }
}

Gfx *geo_flag_wave(s32 UNUSED callContext, struct GraphNode *node, UNUSED Mat4 *mtx) {
    struct GraphNodeRotation *rotNode = (struct GraphNodeRotation *) node->next;

    rotNode->rotation[1] = coss((gAreaUpdateCounter & 0x1F) * 2000) * 1200.0f;

    return NULL;
}