// fire_piranha_plant.inc.c

struct ObjectHitbox sFirePiranhaPlantHitbox = {
    /* interactType:      */ INTERACT_BOUNCE_TOP,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 2,
    /* health:            */ 0,
    /* numLootCoins:      */ 1,
    /* radius:            */ 80,
    /* height:            */ 160,
    /* hurtboxRadius:     */ 50,
    /* hurtboxHeight:     */ 150,
};

struct ObjectHitbox sPiranhaPlantFireHitbox = {
    /* interactType:      */ INTERACT_FLAME,
    /* downOffset:        */ 10,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 10,
    /* height:            */ 20,
    /* hurtboxRadius:     */ 10,
    /* hurtboxHeight:     */ 20,
};

s32 sNumActiveFirePiranhaPlants;
s32 sNumKilledFirePiranhaPlants;

void bhv_fire_piranha_plant_init(void) {
    o->oFirePiranhaPlantNeutralScale = GET_BPARAM2(o->oBehParams) ? 2.0f : 0.5f;
    obj_set_hitbox(o, &sFirePiranhaPlantHitbox);

    if (GET_BPARAM2(o->oBehParams) != FIRE_PIRANHA_PLANT_BP_NORMAL) {
        o->oFlags |= OBJ_FLAG_PERSISTENT_RESPAWN;
        o->oHealth = 1;

        if (GET_BPARAM3(o->oBehParams)) {
            o->oNumLootCoins = 0;
        } else {
            o->oNumLootCoins = 2;
        }
    }

    sNumActiveFirePiranhaPlants = sNumKilledFirePiranhaPlants = 0;
}

static void fire_piranha_plant_act_hide(void) {
    if (o->oFirePiranhaPlantDeathSpinTimer != 0) {
        o->oMoveAngleYaw += (s32) o->oFirePiranhaPlantDeathSpinVel;
        approach_f32_ptr(&o->oFirePiranhaPlantDeathSpinVel, 0.0f, 200.0f);

        if (cur_obj_check_if_near_animation_end()
            && --o->oFirePiranhaPlantDeathSpinTimer == 0) {
            cur_obj_play_sound_2(SOUND_OBJ_ENEMY_DEFEAT_SHRINK);
        }
    } else if (approach_f32_ptr(&o->oFirePiranhaPlantScale, 0.0f,
                                0.04f * o->oFirePiranhaPlantNeutralScale)) {
        cur_obj_become_intangible();

        if (o->oFirePiranhaPlantActive) {
            sNumActiveFirePiranhaPlants--;
            o->oFirePiranhaPlantActive = FALSE;

            if (GET_BPARAM2(o->oBehParams) != FIRE_PIRANHA_PLANT_BP_NORMAL && o->oHealth == 0) {
                if (++sNumKilledFirePiranhaPlants == 5) {
                    struct Object *starObj = spawn_object_abs_with_rot(o, 0, MODEL_STAR, bhvStarSpawnCoordinates, o->oPosX, o->oPosY + 50, o->oPosZ, 0, 0, 0);
                    SET_BPARAM1(starObj->oBehParams, GET_BPARAM1(o->oBehParams));
                    vec3f_set(&starObj->oHomeVec, o->oPosX, o->oPosY + 300, o->oPosZ);
                    starObj->oFaceAnglePitch = 0;
                    starObj->oFaceAngleRoll = 0;
                }

                obj_die_if_health_non_positive();
                set_object_respawn_info_bits(o, RESPAWN_INFO_TYPE_NORMAL);
            }
        } else if (sNumActiveFirePiranhaPlants < 2 && o->oTimer > 100
                   && o->oDistanceToMario > 100.0f && o->oDistanceToMario < 800.0f) {
            cur_obj_play_sound_2(SOUND_OBJ_PIRANHA_PLANT_APPEAR);

            o->oFirePiranhaPlantActive = TRUE;
            sNumActiveFirePiranhaPlants++;

            cur_obj_unhide();
            o->oAction = FIRE_PIRANHA_PLANT_ACT_GROW;
            o->oMoveAngleYaw = o->oAngleToMario;
        } else {
            cur_obj_hide();
        }
    }

    cur_obj_extend_animation_if_at_end();
}

static void fire_piranha_plant_act_grow(void) {
    cur_obj_init_anim_extend(FIRE_PIRANHA_PLANT_ANIM_GROW);

    if (approach_f32_ptr(&o->oFirePiranhaPlantScale, o->oFirePiranhaPlantNeutralScale,
                         0.04f * o->oFirePiranhaPlantNeutralScale)) {
        if (o->oTimer > 80) {
            cur_obj_play_sound_2(SOUND_OBJ_PIRANHA_PLANT_SHRINK);
            o->oAction = FIRE_PIRANHA_PLANT_ACT_HIDE;
            cur_obj_init_animation_with_sound(FIRE_PIRANHA_PLANT_ANIM_SHRINK);
        } else if (o->oTimer < 50) {
            cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x400);
        } else if (obj_is_rendering_enabled() && cur_obj_check_anim_frame(56)) {
            cur_obj_play_sound_2(SOUND_OBJ_FLAME_BLOWN);
            obj_spit_fire(0,
                          (s32)( 30.0f * o->oFirePiranhaPlantNeutralScale),
                          (s32)(140.0f * o->oFirePiranhaPlantNeutralScale),
                               (  2.5f * o->oFirePiranhaPlantNeutralScale),
                          MODEL_RED_FLAME_SHADOW,
                          20.0f, 15.0f, 0x1000);
        }
    } else if (o->oFirePiranhaPlantScale > o->oFirePiranhaPlantNeutralScale / 2) {
        cur_obj_become_tangible();
    }
}

void bhv_fire_piranha_plant_update(void) {
    cur_obj_scale(o->oFirePiranhaPlantScale);

    switch (o->oAction) {
        case FIRE_PIRANHA_PLANT_ACT_HIDE:
            fire_piranha_plant_act_hide();
            break;
        case FIRE_PIRANHA_PLANT_ACT_GROW:
            fire_piranha_plant_act_grow();
            break;
    }

    if (obj_check_attacks(&sFirePiranhaPlantHitbox, o->oAction)) {
        if (--o->oHealth < 0) {
            if (o->oFirePiranhaPlantActive) {
                sNumActiveFirePiranhaPlants--;
            }
        } else {
            cur_obj_init_animation_with_sound(FIRE_PIRANHA_PLANT_ANIM_ATTACKED);
        }

        o->oAction = FIRE_PIRANHA_PLANT_ACT_HIDE;
        o->oFirePiranhaPlantDeathSpinTimer = 10;
        o->oFirePiranhaPlantDeathSpinVel = 8000.0f;

        cur_obj_become_intangible();
    }
}
