Lights1 broken_signpost_back_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 broken_signpost_stone_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 broken_signpost_front_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx broken_signpost_wooden_signpost_back_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 broken_signpost_wooden_signpost_back_rgba16_rgba16[] = {
	#include "actors/wooden_signpost/wooden_signpost_back.rgba16.inc.c"
};

Gfx broken_signpost_wf_textures_08000_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 broken_signpost_wf_textures_08000_rgba16_rgba16[] = {
	#include "actors/wooden_signpost/wooden_signpost_base.rgba16.inc.c"
};

Gfx broken_signpost_wooden_signpost_front_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 broken_signpost_wooden_signpost_front_rgba16_rgba16[] = {
	#include "actors/wooden_signpost/wooden_signpost_front.rgba16.inc.c"
};

Vtx broken_signpost_base_mesh_layer_1_vtx_0[10] = {
	{{{0, 59, 34},0, {20, 462},{0xFF, 0x26, 0x79, 0xFF}}},
	{{{-23, 38, -6},0, {20, 162},{0x92, 0x0, 0xC0, 0xFF}}},
	{{{0, 38, 34},0, {20, 462},{0xFF, 0x0, 0x7F, 0xFF}}},
	{{{-23, 83, -6},0, {20, 162},{0xAB, 0x56, 0xD8, 0xFF}}},
	{{{24, 83, -6},0, {20, 764},{0x55, 0x55, 0xD8, 0xFF}}},
	{{{24, 38, -6},0, {20, 764},{0x6E, 0x0, 0xC1, 0xFF}}},
	{{{24, 83, -6},0, {20, 462},{0x55, 0x55, 0xD8, 0xFF}}},
	{{{0, 59, 34},0, {20, 162},{0xFF, 0x26, 0x79, 0xFF}}},
	{{{0, 38, 34},0, {20, 162},{0xFF, 0x0, 0x7F, 0xFF}}},
	{{{24, 38, -6},0, {20, 462},{0x6E, 0x0, 0xC1, 0xFF}}},
};

Gfx broken_signpost_base_mesh_layer_1_tri_0[] = {
	gsSPVertex(broken_signpost_base_mesh_layer_1_vtx_0 + 0, 10, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 1, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSPEndDisplayList(),
};

Vtx broken_signpost_base_mesh_layer_1_vtx_1[20] = {
	{{{-136, -20, 150},0, {1701, -709},{0x94, 0x43, 0x0, 0xFF}}},
	{{{-100, 38, 114},0, {1247, -255},{0x94, 0x43, 0x0, 0xFF}}},
	{{{-100, 38, -86},0, {1247, 1247},{0x94, 0x43, 0x0, 0xFF}}},
	{{{-136, -20, -122},0, {1701, 1701},{0x94, 0x43, 0x0, 0xFF}}},
	{{{136, -20, 150},0, {-709, -709},{0x0, 0x43, 0x6C, 0xFF}}},
	{{{-100, 38, 114},0, {1247, -255},{0x0, 0x43, 0x6C, 0xFF}}},
	{{{-136, -20, 150},0, {1701, -709},{0x0, 0x43, 0x6C, 0xFF}}},
	{{{100, 38, 114},0, {-255, -255},{0x0, 0x43, 0x6C, 0xFF}}},
	{{{100, 38, -86},0, {-255, 1247},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-100, 38, -86},0, {1247, 1247},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-100, 38, 114},0, {1247, -255},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{100, 38, 114},0, {-255, -255},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-136, -20, -122},0, {1701, 1701},{0x0, 0x43, 0x94, 0xFF}}},
	{{{-100, 38, -86},0, {1247, 1247},{0x0, 0x43, 0x94, 0xFF}}},
	{{{100, 38, -86},0, {-255, 1247},{0x0, 0x43, 0x94, 0xFF}}},
	{{{136, -20, -122},0, {-709, 1701},{0x0, 0x43, 0x94, 0xFF}}},
	{{{136, -20, -122},0, {-709, 1701},{0x6C, 0x43, 0x0, 0xFF}}},
	{{{100, 38, 114},0, {-255, -255},{0x6C, 0x43, 0x0, 0xFF}}},
	{{{136, -20, 150},0, {-709, -709},{0x6C, 0x43, 0x0, 0xFF}}},
	{{{100, 38, -86},0, {-255, 1247},{0x6C, 0x43, 0x0, 0xFF}}},
};

Gfx broken_signpost_base_mesh_layer_1_tri_1[] = {
	gsSPVertex(broken_signpost_base_mesh_layer_1_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(broken_signpost_base_mesh_layer_1_vtx_1 + 16, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx broken_signpost_sign_mesh_layer_1_vtx_0[28] = {
	{{{24, -23, 447},0, {922, 162},{0x6E, 0xC0, 0x0, 0xFF}}},
	{{{0, 11, -2},0, {20, 162},{0x0, 0xBD, 0x94, 0xFF}}},
	{{{24, 49, 25},0, {20, 462},{0x60, 0x42, 0xCE, 0xFF}}},
	{{{-179, -7, 418},0, {-14, 96},{0xB7, 0x44, 0x4F, 0xFF}}},
	{{{-179, -47, 415},0, {-14, 210},{0xB7, 0xB1, 0x44, 0xFF}}},
	{{{180, -47, 415},0, {1010, 210},{0x49, 0xB1, 0x44, 0xFF}}},
	{{{180, -7, 418},0, {1010, 96},{0x49, 0x44, 0x4F, 0xFF}}},
	{{{0, 11, -2},0, {20, 462},{0x0, 0xBD, 0x94, 0xFF}}},
	{{{24, -23, 447},0, {922, 764},{0x6E, 0xC0, 0x0, 0xFF}}},
	{{{-23, -23, 447},0, {922, 162},{0x93, 0xBF, 0x0, 0xFF}}},
	{{{-23, 49, 25},0, {20, 162},{0xA0, 0x43, 0xCF, 0xFF}}},
	{{{0, 16, 450},0, {922, 462},{0xFF, 0x7D, 0x14, 0xFF}}},
	{{{24, 49, 25},0, {20, 764},{0x60, 0x42, 0xCE, 0xFF}}},
	{{{0, -10, 462},0, {946, 462},{0xFF, 0xFD, 0x7F, 0xFF}}},
	{{{24, -23, 447},0, {922, 764},{0x31, 0xDB, 0x6F, 0xFF}}},
	{{{0, 16, 450},0, {922, 462},{0x0, 0x35, 0x74, 0xFF}}},
	{{{0, -10, 462},0, {946, 462},{0xFF, 0xFD, 0x7F, 0xFF}}},
	{{{-23, -23, 447},0, {922, 162},{0xCF, 0xDA, 0x6F, 0xFF}}},
	{{{24, -23, 447},0, {922, 764},{0x31, 0xDB, 0x6F, 0xFF}}},
	{{{0, 16, 450},0, {922, 462},{0x0, 0x35, 0x74, 0xFF}}},
	{{{-179, 8, 219},0, {-16, 974},{0xB7, 0x4F, 0xBC, 0xFF}}},
	{{{-179, -47, 415},0, {-16, -16},{0xB7, 0xB1, 0x44, 0xFF}}},
	{{{-179, -7, 418},0, {-16, -16},{0xB7, 0x44, 0x4F, 0xFF}}},
	{{{-179, -32, 216},0, {-16, 974},{0xB7, 0xBC, 0xB1, 0xFF}}},
	{{{180, 8, 219},0, {974, 974},{0x49, 0x4F, 0xBC, 0xFF}}},
	{{{180, -7, 418},0, {974, -16},{0x49, 0x44, 0x4F, 0xFF}}},
	{{{180, -32, 216},0, {974, 974},{0x49, 0xBC, 0xB1, 0xFF}}},
	{{{180, -47, 415},0, {974, -16},{0x49, 0xB1, 0x44, 0xFF}}},
};

Gfx broken_signpost_sign_mesh_layer_1_tri_0[] = {
	gsSPVertex(broken_signpost_sign_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 10, 7, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(11, 12, 10, 0),
	gsSP1Triangle(12, 11, 8, 0),
	gsSP1Triangle(7, 10, 12, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(broken_signpost_sign_mesh_layer_1_vtx_0 + 16, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 7, 4, 0),
	gsSP1Triangle(8, 4, 6, 0),
	gsSP1Triangle(8, 6, 9, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(8, 10, 7, 0),
	gsSPEndDisplayList(),
};

Vtx broken_signpost_sign_mesh_layer_1_vtx_1[4] = {
	{{{-179, -32, 216},0, {-16, 974},{0xB7, 0xBC, 0xB1, 0xFF}}},
	{{{180, -47, 415},0, {974, -16},{0x49, 0xB1, 0x44, 0xFF}}},
	{{{-179, -47, 415},0, {-16, -16},{0xB7, 0xB1, 0x44, 0xFF}}},
	{{{180, -32, 216},0, {974, 974},{0x49, 0xBC, 0xB1, 0xFF}}},
};

Gfx broken_signpost_sign_mesh_layer_1_tri_1[] = {
	gsSPVertex(broken_signpost_sign_mesh_layer_1_vtx_1 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSPEndDisplayList(),
};


Gfx mat_broken_signpost_back[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, broken_signpost_wooden_signpost_back_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(broken_signpost_back_lights),
	gsSPEndDisplayList(),
};

Gfx mat_broken_signpost_stone[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, broken_signpost_wf_textures_08000_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(broken_signpost_stone_lights),
	gsSPEndDisplayList(),
};

Gfx mat_broken_signpost_front[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, broken_signpost_wooden_signpost_front_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(broken_signpost_front_lights),
	gsSPEndDisplayList(),
};

Gfx broken_signpost_base_mesh_layer_1[] = {
	gsSPDisplayList(mat_broken_signpost_back),
	gsSPDisplayList(broken_signpost_base_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_broken_signpost_stone),
	gsSPDisplayList(broken_signpost_base_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx broken_signpost_sign_mesh_layer_1[] = {
	gsSPDisplayList(mat_broken_signpost_back),
	gsSPDisplayList(broken_signpost_sign_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_broken_signpost_front),
	gsSPDisplayList(broken_signpost_sign_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx broken_signpost_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

