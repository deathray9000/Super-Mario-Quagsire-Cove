// bomb.inc.c

static struct ObjectHitbox sBombHitbox = {
    /* interactType:      */ INTERACT_COIN,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 65,
    /* height:            */ 113,
    /* hurtboxRadius:     */ 0,
    /* hurtboxHeight:     */ 0,
};

void bhv_bomb_init(void) {
    obj_set_hitbox(o, &sBombHitbox);
    o->oGravity = 2.5f;
    o->oVelY = 50;
    o->oPosY += 20;
}

void bhv_bomb_loop(void) {
    s16 collisionFlags = object_step();
    if ((collisionFlags & OBJ_COL_FLAG_GROUNDED) == OBJ_COL_FLAG_GROUNDED || o->oInteractStatus == 1) {
        if (o->oAction < 5) {
            cur_obj_scale(1.0f + (o->oAction / 5.0f));
            o->oAction++;
            o->oVelY = 0;
            o->oForwardVel = 0;
        } else {
            struct Object *explosion = spawn_object(o, MODEL_EXPLOSION, bhvExplosion);
            explosion->oGraphYOffset += 100.0f;
            obj_mark_for_deletion(o);
        }
    }

    if (o->oTimer == 1) {
        o->oForwardVel = (o->oDistanceToMario / 37.0f);
    }
    if (!(7 & o->oTimer)) {
        spawn_object(o, MODEL_SMOKE, bhvBobombFuseSmoke);
    }

    //cur_obj_play_sound_1(SOUND_AIR_BOBOMB_LIT_FUSE);

    //o->oTimer++;
}