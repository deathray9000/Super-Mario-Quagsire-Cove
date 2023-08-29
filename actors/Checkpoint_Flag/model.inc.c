Lights1 Checkpoint_Flag_base_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 Checkpoint_Flag_pole_lights = gdSPDefLights1(
	0x62, 0x4F, 0x0,
	0xC5, 0x9E, 0x0, 0x28, 0x28, 0x28);

Lights1 Checkpoint_Flag_mario_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 Checkpoint_Flag_bowser_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx Checkpoint_Flag_wf_textures_08000_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 Checkpoint_Flag_wf_textures_08000_rgba16_rgba16[] = {
	#include "actors/Checkpoint_Flag/wf_textures_08000.rgba16.inc.c"
};

Gfx Checkpoint_Flag_Mario_flag_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 Checkpoint_Flag_Mario_flag_rgba16[] = {
	#include "actors/Checkpoint_Flag/Mario_flag.rgba16.inc.c"
};

Gfx Checkpoint_Flag_Bowser_flag_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 Checkpoint_Flag_Bowser_flag_rgba16[] = {
	#include "actors/Checkpoint_Flag/Bowser_flag.rgba16.inc.c"
};

Vtx Checkpoint_Flag_base_mesh_layer_1_vtx_0[10] = {
	{{{0, 3, -38},0, {486, -557},{0x0, 0x5B, 0xA7, 0xFF}}},
	{{{25, 14, -8},0, {1027, 463},{0x3B, 0x6F, 0xED, 0xFF}}},
	{{{36, 3, -12},0, {1668, 302},{0x54, 0x5B, 0xE5, 0xFF}}},
	{{{0, 14, -27},0, {486, 70},{0x0, 0x6F, 0xC2, 0xFF}}},
	{{{-36, 3, -12},0, {-697, 302},{0xAC, 0x5B, 0xE5, 0xFF}}},
	{{{-25, 14, -8},0, {-56, 463},{0xC5, 0x6F, 0xED, 0xFF}}},
	{{{-22, 3, 31},0, {-245, 1692},{0xCC, 0x5B, 0x48, 0xFF}}},
	{{{-16, 14, 22},0, {151, 1100},{0xDC, 0x6F, 0x32, 0xFF}}},
	{{{22, 3, 31},0, {1217, 1692},{0x34, 0x5B, 0x48, 0xFF}}},
	{{{16, 14, 22},0, {820, 1100},{0x24, 0x6F, 0x32, 0xFF}}},
};

Gfx Checkpoint_Flag_base_mesh_layer_1_tri_0[] = {
	gsSPVertex(Checkpoint_Flag_base_mesh_layer_1_vtx_0 + 0, 10, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
	gsSP2Triangles(6, 5, 4, 0, 6, 7, 5, 0),
	gsSP2Triangles(8, 7, 6, 0, 8, 9, 7, 0),
	gsSP2Triangles(2, 9, 8, 0, 2, 1, 9, 0),
	gsSP2Triangles(9, 1, 3, 0, 3, 7, 9, 0),
	gsSP1Triangle(3, 5, 7, 0),
	gsSPEndDisplayList(),
};

Vtx Checkpoint_Flag_base_mesh_layer_1_vtx_1[44] = {
	{{{-6, 12, -3},0, {189, 496},{0x87, 0x0, 0xD9, 0xFF}}},
	{{{0, 151, -7},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, 12, -7},0, {-16, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-6, 151, -3},0, {189, -16},{0x87, 0x0, 0xD9, 0xFF}}},
	{{{-4, 12, 4},0, {394, 496},{0xB5, 0x0, 0x67, 0xFF}}},
	{{{-4, 151, 4},0, {394, -16},{0xB5, 0x0, 0x67, 0xFF}}},
	{{{0, 12, -7},0, {803, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, 151, -7},0, {803, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{6, 151, -3},0, {598, -16},{0x79, 0x0, 0xD9, 0xFF}}},
	{{{6, 12, -3},0, {598, 496},{0x79, 0x0, 0xD9, 0xFF}}},
	{{{4, 151, 4},0, {394, -16},{0x4B, 0x0, 0x67, 0xFF}}},
	{{{4, 12, 4},0, {394, 496},{0x4B, 0x0, 0x67, 0xFF}}},
	{{{4, 12, 4},0, {1008, 496},{0x4B, 0x0, 0x67, 0xFF}}},
	{{{4, 151, 4},0, {1008, -16},{0x4B, 0x0, 0x67, 0xFF}}},
	{{{-4, 151, 4},0, {803, -16},{0xB5, 0x0, 0x67, 0xFF}}},
	{{{-4, 12, 4},0, {803, 496},{0xB5, 0x0, 0x67, 0xFF}}},
	{{{0, 143, -1},0, {170, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-6, 149, 7},0, {263, 847},{0xBD, 0xC7, 0x5C, 0xFF}}},
	{{{-10, 149, -4},0, {77, 847},{0x94, 0xC7, 0xDC, 0xFF}}},
	{{{-10, 160, 2},0, {170, 686},{0x94, 0x39, 0x22, 0xFF}}},
	{{{0, 160, 9},0, {356, 686},{0x0, 0x39, 0x72, 0xFF}}},
	{{{6, 149, 7},0, {449, 847},{0x42, 0xC7, 0x5D, 0xFF}}},
	{{{0, 143, -1},0, {356, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{10, 160, 2},0, {543, 686},{0x6C, 0x39, 0x24, 0xFF}}},
	{{{10, 149, -4},0, {636, 847},{0x6C, 0xC7, 0xDE, 0xFF}}},
	{{{0, 143, -1},0, {543, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{6, 160, -9},0, {729, 686},{0x43, 0x39, 0xA4, 0xFF}}},
	{{{0, 149, -11},0, {822, 847},{0x0, 0xC7, 0x8E, 0xFF}}},
	{{{0, 143, -1},0, {729, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-6, 160, -9},0, {915, 686},{0xBE, 0x39, 0xA3, 0xFF}}},
	{{{-10, 149, -4},0, {1008, 847},{0x94, 0xC7, 0xDC, 0xFF}}},
	{{{0, 143, -1},0, {915, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{6, 160, -9},0, {729, 686},{0x43, 0x39, 0xA4, 0xFF}}},
	{{{-6, 160, -9},0, {915, 686},{0xBE, 0x39, 0xA3, 0xFF}}},
	{{{0, 166, -1},0, {822, 524},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-10, 160, 2},0, {170, 686},{0x94, 0x39, 0x22, 0xFF}}},
	{{{0, 160, 9},0, {356, 686},{0x0, 0x39, 0x72, 0xFF}}},
	{{{0, 166, -1},0, {263, 524},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{10, 160, 2},0, {543, 686},{0x6C, 0x39, 0x24, 0xFF}}},
	{{{0, 166, -1},0, {636, 524},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 166, -1},0, {449, 524},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-10, 149, -4},0, {77, 847},{0x94, 0xC7, 0xDC, 0xFF}}},
	{{{-6, 160, -9},0, {-16, 686},{0xBE, 0x39, 0xA3, 0xFF}}},
	{{{0, 166, -1},0, {77, 524},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx Checkpoint_Flag_base_mesh_layer_1_tri_1[] = {
	gsSPVertex(Checkpoint_Flag_base_mesh_layer_1_vtx_1 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
	gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 18, 17, 19, 0),
	gsSP2Triangles(17, 20, 19, 0, 17, 21, 20, 0),
	gsSP2Triangles(17, 22, 21, 0, 21, 23, 20, 0),
	gsSP2Triangles(21, 24, 23, 0, 25, 24, 21, 0),
	gsSP2Triangles(24, 26, 23, 0, 24, 27, 26, 0),
	gsSP2Triangles(28, 27, 24, 0, 27, 29, 26, 0),
	gsSP2Triangles(27, 30, 29, 0, 31, 30, 27, 0),
	gsSPVertex(Checkpoint_Flag_base_mesh_layer_1_vtx_1 + 32, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 0, 7, 0, 4, 6, 8, 0),
	gsSP2Triangles(9, 3, 10, 0, 10, 3, 11, 0),
	gsSPEndDisplayList(),
};

Vtx Checkpoint_Flag_flag1_mesh_layer_1_vtx_0[4] = {
	{{{0, 5, 141},0, {-341, -187},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 5, 74},0, {-341, 1179},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 26, 74},0, {342, 1179},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 26, 141},0, {342, -187},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx Checkpoint_Flag_flag1_mesh_layer_1_tri_0[] = {
	gsSPVertex(Checkpoint_Flag_flag1_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx Checkpoint_Flag_flag2_skinned_mesh_layer_1_vtx_0[2] = {
	{{{0, 26, 141},0, {342, -187},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 26, 74},0, {342, 1179},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx Checkpoint_Flag_flag2_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(Checkpoint_Flag_flag2_skinned_mesh_layer_1_vtx_0 + 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx Checkpoint_Flag_flag2_mesh_layer_1_vtx_0[2] = {
	{{{0, 41, 74},0, {1026, 1179},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 41, 141},0, {1026, -187},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx Checkpoint_Flag_flag2_mesh_layer_1_tri_0[] = {
	gsSPVertex(Checkpoint_Flag_flag2_mesh_layer_1_vtx_0 + 0, 2, 2),
	gsSP2Triangles(0, 2, 3, 0, 0, 1, 2, 0),
	gsSPEndDisplayList(),
};

Vtx Checkpoint_Flag_flag3_skinned_mesh_layer_1_vtx_0[2] = {
	{{{0, 41, 141},0, {1035, -187},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 41, 74},0, {1035, 1179},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx Checkpoint_Flag_flag3_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(Checkpoint_Flag_flag3_skinned_mesh_layer_1_vtx_0 + 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx Checkpoint_Flag_flag3_mesh_layer_1_vtx_0[2] = {
	{{{0, 55, 74},0, {352, 1179},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 55, 141},0, {352, -187},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx Checkpoint_Flag_flag3_mesh_layer_1_tri_0[] = {
	gsSPVertex(Checkpoint_Flag_flag3_mesh_layer_1_vtx_0 + 0, 2, 2),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx Checkpoint_Flag_flag4_skinned_mesh_layer_1_vtx_0[2] = {
	{{{0, 55, 141},0, {352, -187},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 55, 74},0, {352, 1179},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx Checkpoint_Flag_flag4_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(Checkpoint_Flag_flag4_skinned_mesh_layer_1_vtx_0 + 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx Checkpoint_Flag_flag4_mesh_layer_1_vtx_0[2] = {
	{{{0, 69, 74},0, {-331, 1179},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 69, 141},0, {-331, -187},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx Checkpoint_Flag_flag4_mesh_layer_1_tri_0[] = {
	gsSPVertex(Checkpoint_Flag_flag4_mesh_layer_1_vtx_0 + 0, 2, 2),
	gsSP2Triangles(0, 2, 3, 0, 0, 1, 2, 0),
	gsSPEndDisplayList(),
};

Vtx Checkpoint_Flag_flag5_skinned_mesh_layer_1_vtx_0[6] = {
	{{{0, 69, 91},0, {7, 856},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 69, 74},0, {64, 970},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 69, 141},0, {22, -6},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 69, 124},0, {-1, 41},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 69, 124},0, {478, 60},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 69, 91},0, {514, 60},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx Checkpoint_Flag_flag5_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(Checkpoint_Flag_flag5_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx Checkpoint_Flag_flag5_mesh_layer_1_vtx_0[3] = {
	{{{0, 80, 74},0, {64, 856},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 80, 141},0, {22, 41},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{0, 80, 108},0, {496, 60},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx Checkpoint_Flag_flag5_mesh_layer_1_tri_0[] = {
	gsSPVertex(Checkpoint_Flag_flag5_mesh_layer_1_vtx_0 + 0, 3, 6),
	gsSP2Triangles(0, 1, 6, 0, 2, 3, 7, 0),
	gsSP1Triangle(4, 5, 8, 0),
	gsSPEndDisplayList(),
};


Gfx mat_Checkpoint_Flag_base[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, Checkpoint_Flag_wf_textures_08000_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(Checkpoint_Flag_base_lights),
	gsSPEndDisplayList(),
};

Gfx mat_Checkpoint_Flag_pole[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(Checkpoint_Flag_pole_lights),
	gsSPEndDisplayList(),
};

Gfx mat_Checkpoint_Flag_mario[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, Checkpoint_Flag_Mario_flag_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(Checkpoint_Flag_mario_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_Checkpoint_Flag_mario[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx mat_Checkpoint_Flag_bowser[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, Checkpoint_Flag_Bowser_flag_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(Checkpoint_Flag_bowser_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_Checkpoint_Flag_bowser[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_base_mesh_layer_1[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_base),
	gsSPDisplayList(Checkpoint_Flag_base_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_Checkpoint_Flag_pole),
	gsSPDisplayList(Checkpoint_Flag_base_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_base_mesh_layer_1_mat_override_mario_0[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_base),
	gsSPDisplayList(Checkpoint_Flag_base_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_Checkpoint_Flag_pole),
	gsSPDisplayList(Checkpoint_Flag_base_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_mario),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_flag1_mesh_layer_1[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_bowser),
	gsSPDisplayList(Checkpoint_Flag_flag1_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_bowser),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_flag1_mesh_layer_1_mat_override_mario_0[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_mario),
	gsSPDisplayList(Checkpoint_Flag_flag1_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_mario),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_mario),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_flag2_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_bowser),
	gsSPDisplayList(Checkpoint_Flag_flag2_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_bowser),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_flag2_skinned_mesh_layer_1_mat_override_mario_0[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_mario),
	gsSPDisplayList(Checkpoint_Flag_flag2_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_mario),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_mario),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_flag2_mesh_layer_1[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_bowser),
	gsSPDisplayList(Checkpoint_Flag_flag2_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_bowser),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_flag2_mesh_layer_1_mat_override_mario_0[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_mario),
	gsSPDisplayList(Checkpoint_Flag_flag2_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_mario),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_mario),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_flag3_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_bowser),
	gsSPDisplayList(Checkpoint_Flag_flag3_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_bowser),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_flag3_skinned_mesh_layer_1_mat_override_mario_0[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_mario),
	gsSPDisplayList(Checkpoint_Flag_flag3_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_mario),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_mario),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_flag3_mesh_layer_1[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_bowser),
	gsSPDisplayList(Checkpoint_Flag_flag3_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_bowser),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_flag3_mesh_layer_1_mat_override_mario_0[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_mario),
	gsSPDisplayList(Checkpoint_Flag_flag3_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_mario),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_mario),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_flag4_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_bowser),
	gsSPDisplayList(Checkpoint_Flag_flag4_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_bowser),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_flag4_skinned_mesh_layer_1_mat_override_mario_0[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_mario),
	gsSPDisplayList(Checkpoint_Flag_flag4_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_mario),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_mario),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_flag4_mesh_layer_1[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_bowser),
	gsSPDisplayList(Checkpoint_Flag_flag4_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_bowser),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_flag4_mesh_layer_1_mat_override_mario_0[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_mario),
	gsSPDisplayList(Checkpoint_Flag_flag4_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_mario),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_mario),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_flag5_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_bowser),
	gsSPDisplayList(Checkpoint_Flag_flag5_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_bowser),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_flag5_skinned_mesh_layer_1_mat_override_mario_0[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_mario),
	gsSPDisplayList(Checkpoint_Flag_flag5_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_mario),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_mario),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_flag5_mesh_layer_1[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_bowser),
	gsSPDisplayList(Checkpoint_Flag_flag5_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_bowser),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_flag5_mesh_layer_1_mat_override_mario_0[] = {
	gsSPDisplayList(mat_Checkpoint_Flag_mario),
	gsSPDisplayList(Checkpoint_Flag_flag5_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_mario),
	gsSPDisplayList(mat_revert_Checkpoint_Flag_mario),
	gsSPEndDisplayList(),
};

Gfx Checkpoint_Flag_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

