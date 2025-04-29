// cosmic_mario.inc.c

struct follow_Node {
    f32 PosX;
    f32 PosY;
    f32 PosZ;
};

struct mario_Path {
    struct follow_Node array[185];
    u8 StartIndex;
    u32 ArrayLength;
} *m_Path;

static struct ObjectHitbox sCosmicBox = {
    /* interactType:      */ INTERACT_DAMAGE,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 2,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 100,
    /* height:            */ 200,
    /* hurtboxRadius:     */ 110,
    /* hurtboxHeight:     */ 210,
};

void bhv_cosmic_mario_init(void) {
    //mark_obj_for_deletion(o);
    obj_set_hitbox(o, &sCosmicBox);
    cur_obj_init_animation(0);

    struct Object *manager = cur_obj_nearest_object_with_behavior(bhvCosmicManager);
    m_Path = (struct mario_Path*) manager->oF4;

    o->oF4 = (manager->oF8 + 1) * 30;
    manager->oF8 += 1;

    o->oHomeX = o->oPosX;
    o->oHomeY = o->oPosY;
    o->oHomeZ = o->oPosZ;
};

void bhv_cosmic_mario_loop(void) {
    struct Object *manager = cur_obj_nearest_object_with_behavior(bhvCosmicManager);

    if (manager->oFC == 2) {
        spawn_mist_particles();
        obj_mark_for_deletion(o);
    } else {
        u8 NextPos = ((*m_Path).StartIndex - o->oF4 + (*m_Path).ArrayLength) % (*m_Path).ArrayLength;
        struct follow_Node fn = (*m_Path).array[NextPos];

        o->oFaceAngleYaw = atan2s(fn.PosZ - o->oPosZ, fn.PosX - o->oPosX);
        o->oPosX = fn.PosX;
        o->oPosY = fn.PosY;
        o->oPosZ = fn.PosZ;

        o->oInteractStatus = 0;
    }
}