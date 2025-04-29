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
    o->oForwardVel = 20;
    obj_set_hitbox(o, &sProbox);

    cur_obj_scale(0.75f);
}

void bhv_propeller_loop(void) {
    if (o->oInteractStatus & INT_STATUS_INTERACTED) {
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
        o->oInteractStatus = 0;
    }

    if (o->oF4 == 0) {
        o->oPosY = o->oHomeY + coss(o->oVelY * 0x458) * 20.0f;
        o->oVelY += 1;
    } else {
        f32 Y_differance = (gMarioState->pos[1]) - o->oPosY;
        
        o->oPosX += o->oForwardVel * sins(o->oAngleToMario);
        o->oPosZ += o->oForwardVel * coss(o->oAngleToMario);
        
        o->oForwardVel += 1;

        if (Y_differance > -10 && Y_differance < 10) {
            o->oVelY = 0;
            o->oPosY = gMarioState->pos[1];
        } else {
            o->oVelY = Y_differance / 8.0f;
            
            if (o->oVelY > 0.0f) {
                if (o->oVelY > 100.0f) {
                    o->oVelY = 100.0f;
                } else if (o->oVelY < 6.0f) {
                    o->oVelY = 6.0f;
                }
            } else  {
                if (o->oVelY < -100.0f) {
                    o->oVelY = -100.0f;
                } else if (o->oVelY > -6.0f) {
                    o->oVelY = -6.0f;
                }
            }
            o->oPosY += o->oVelY;
        }
    }   
}

Gfx *geo_prop_blade(s32 UNUSED callContext, struct GraphNode *node, UNUSED Mat4 *mtx) {
    struct GraphNodeRotation *rotNode = (struct GraphNodeRotation *) node->next;
    rotNode->rotation[1] += 3000.0f;
    
    return NULL;
}