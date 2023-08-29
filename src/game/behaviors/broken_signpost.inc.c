// broken_signpost.inc.c

void bhv_BrokenSign_init(void) {
    spawn_object(o, MODEL_BLUE_COIN, bhvMrIBlueCoin);
    spawn_object(o, MODEL_MIST, bhvMistParticleSpawner);
    cur_obj_play_sound_2(SOUND_GENERAL_BREAK_BOX);
}

void bhv_BrokenSign_loop(void) {
    
}