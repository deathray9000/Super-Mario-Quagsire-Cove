// cosmic_manager.c



struct followNode {
    f32 PosX;
    f32 PosY;
    f32 PosZ;
};

struct marioPath {
    struct followNode array[185];
    u8 StartIndex;
    u32 ArrayLength;
} mPath;

void bhv_cosmic_manager_init(void) {
    mPath.ArrayLength = 185;
    mPath.StartIndex = mPath.ArrayLength - 1;
    void* meep =& mPath;

    o->oF4 = (s32) meep;
    o->oFC = 0;
    o->o100 = 0;
}

void bhv_cosmic_manager_loop(void) {
    if (o->oDistanceToMario < 400 && o->oFC != 1) {
        o->oFC = 1;
        set_background_music(0, SEQ_COSMIC_MARIO, 0);
    }

    if (o->oFC == 1) {
        u8 NextPos = (mPath.StartIndex) % mPath.ArrayLength;
        mPath.array[NextPos].PosX = gMarioState->pos[0];
        mPath.array[NextPos].PosY = gMarioState->pos[1];
        mPath.array[NextPos].PosZ = gMarioState->pos[2];
        mPath.StartIndex = (mPath.StartIndex + 1) % mPath.ArrayLength;
        if (o->o100 != GET_BPARAM1(o->oBehParams) && (o->oTimer + 1) % 15 == 0) {
            spawn_object(o, MODEL_COSMIC_MARIO, bhvCosmicMario);
            o->o100++;
        } else {
            o->oTimer++;
        }

        if (gMarioState->isDead) {
            o->oFC = 0;
        }
    } else if (o->oFC == 0) {
        u8 NextPos = (mPath.StartIndex) % mPath.ArrayLength;
        mPath.array[NextPos].PosX = 0;
        mPath.array[NextPos].PosY = 0;
        mPath.array[NextPos].PosZ = 0;
        mPath.StartIndex = (mPath.StartIndex + 1) % mPath.ArrayLength;
    }

    struct Object *starObj = cur_obj_nearest_object_with_behavior(bhvBalconyBigBoo);
    if (o->oFC != 2 && starObj->oHealth == 0) {
        if (GET_BPARAM1(starObj->oBehParams) == GET_BPARAM2(o->oBehParams)) {
            o->oFC = 2;
            o->oTimer = 0;
        }
    } else if (o->oFC == 2) {
        if (o->oTimer == 10) {
            set_background_music(0, SEQ_LEVEL_UNDERGROUND, 0);
            obj_mark_for_deletion(o);
        } 
    }
}
