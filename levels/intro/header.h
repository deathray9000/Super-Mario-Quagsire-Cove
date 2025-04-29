#ifndef INTRO_HEADER_H
#define INTRO_HEADER_H

#include "types.h"

// geo
extern const GeoLayout intro_geo_splash_screen[];
extern const GeoLayout intro_geo_mario_head_regular[];
extern const GeoLayout intro_geo_mario_head_dizzy[];
extern const GeoLayout intro_geo_debug_level_select[];

// level data
extern Lights1 logo_cosmolite_bar_lights;
extern Lights1 logo_wood_lights;
extern u8 logo_Cosmilite_Bar__placed__ci4[];
extern u8 logo_Cosmilite_Bar__placed__ci4_pal_rgba16[];
extern u8 logo_AB9BB93_c_ci8[];
extern u8 logo_AB9BB93_c_ci8_pal_rgba16[];
extern Vtx logo_Logo_001_mesh_vtx_0[548];
extern Gfx logo_Logo_001_mesh_tri_0[];
extern Vtx logo_Logo_001_mesh_vtx_1[1159];
extern Gfx logo_Logo_001_mesh_tri_1[];
extern Gfx mat_logo_cosmolite_bar[];
extern Gfx mat_revert_logo_cosmolite_bar[];
extern Gfx mat_logo_wood[];
extern Gfx mat_revert_logo_wood[];
extern Gfx logo_Logo_001_mesh[];

extern const Gfx intro_seg7_dl_copyright_trademark[];
extern const f32 intro_seg7_table_scale_1[];
extern const f32 intro_seg7_table_scale_2[];

// script
extern const LevelScript level_intro_splash_screen[];
extern const LevelScript level_intro_mario_head_regular[];
extern const LevelScript level_intro_mario_head_dizzy[];
extern const LevelScript level_intro_entry_level_select[];
extern const LevelScript script_intro_file_select[];
extern const LevelScript script_intro_level_select[];
extern const LevelScript script_intro_main_level_entry_stop_music[];
extern const LevelScript script_intro_main_level_entry[];
extern const LevelScript script_intro_splash_screen[];

#endif
