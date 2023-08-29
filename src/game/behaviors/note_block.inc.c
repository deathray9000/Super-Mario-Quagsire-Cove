// note_block.inc.c

static struct ObjectHitbox sNoteBox = {
    /* interactType:      */ INTERACT_BOUNCE_TOP2,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 0,
    /* numLootCoins:      */ 1,
    /* radius:            */ 110,
    /* height:            */ 120,
    /* hurtboxRadius:     */ 0,
    /* hurtboxHeight:     */ 0,
};

void bhv_note_block_init(void) {
    o->oHomeX = o->oPosX;
    o->oHomeY = o->oPosY;
    o->oHomeZ = o->oPosZ;
    obj_set_hitbox(o, &sNoteBox);
}

void bhv_note_block_loop(void) {

    if (o->oInteractStatus & INT_STATUS_INTERACTED) {
        o->oVelY = -12.0f;
        o->oPosY -= 2.0f;

        cur_obj_play_sound_2(SOUND_ACTION_NOTEBLOCK);
        
        o->oInteractStatus = 0;
    }
    if (o->oPosY < o->oHomeY) {
        o->oPosY += o->oVelY;
        o->oVelY += 1;
    }
    if (o->oPosY > o->oHomeY) {
       o->oVelY = 0.0f;
       o->oPosY = o->oHomeY;
    }
}
