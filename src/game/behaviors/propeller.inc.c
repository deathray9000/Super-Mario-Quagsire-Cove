// propeller.inc.c

static struct ObjectHitbox sProbox = {
    /* interactType:      */ INTERACT_CAP,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 80,
    /* height:            */ 80,
    /* hurtboxRadius:     */ 90,
    /* hurtboxHeight:     */ 90,
};

void bhv_propeller_init(void) {
    o->oHomeX = o->oPosX;
    o->oHomeY = o->oPosY;
    o->oHomeZ = o->oPosZ;
    obj_set_hitbox(o, &sProbox);

    cur_obj_scale(0.75f);
}

void bhv_propeller_loop(void) {
    if (o->oInteractStatus & INT_STATUS_INTERACTED) {
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
        o->oInteractStatus = 0;
    }

    o->oPosY = o->oHomeY + coss(o->oVelY * 0x458) * 20.0f;
    o->oVelY += 1;
}

Gfx *geo_prop_blade(s32 UNUSED callContext, struct GraphNode *node, UNUSED Mat4 *mtx) {
    struct GraphNodeRotation *rotNode = (struct GraphNodeRotation *) node->next;
    rotNode->rotation[1] += 3000.0f;
    
    return NULL;
}