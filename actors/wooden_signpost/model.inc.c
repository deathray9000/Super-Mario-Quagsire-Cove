


Gfx wooden_signpost_wooden_signpost_back_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 wooden_signpost_wooden_signpost_back_rgba16_rgba16[] = {
	#include "actors/wooden_signpost/wooden_signpost_back.rgba16.inc.c"
};

Gfx wooden_signpost_wf_textures_08000_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 wooden_signpost_wf_textures_08000_rgba16_rgba16[] = {
	#include "actors/wooden_signpost/wooden_signpost_base.rgba16.inc.c"
};

Gfx wooden_signpost_wooden_signpost_front_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 wooden_signpost_wooden_signpost_front_rgba16_rgba16[] = {
	#include "actors/wooden_signpost/wooden_signpost_front.rgba16.inc.c"
};

Vtx wooden_signpost_base_mesh_layer_1_vtx_0[10] = {
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

Gfx wooden_signpost_base_mesh_layer_1_tri_0[] = {
	gsSPVertex(wooden_signpost_base_mesh_layer_1_vtx_0 + 0, 10, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 1, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSPEndDisplayList(),
};

Vtx wooden_signpost_base_mesh_layer_1_vtx_1[20] = {
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

Gfx wooden_signpost_base_mesh_layer_1_tri_1[] = {
	gsSPVertex(wooden_signpost_base_mesh_layer_1_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(wooden_signpost_base_mesh_layer_1_vtx_1 + 16, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx wooden_signpost_sign_mesh_layer_1_vtx_0[28] = {
	{{{24, 461, 21},0, {922, 162},{0x6E, 0x5, 0x40, 0xFF}}},
	{{{0, 11, 21},0, {20, 162},{0x0, 0x99, 0x4B, 0xFF}}},
	{{{24, 35, -19},0, {20, 462},{0x60, 0xC9, 0xC2, 0xFF}}},
	{{{-179, 431, 7},0, {-14, 96},{0xB7, 0x49, 0xB7, 0xFF}}},
	{{{-179, 431, 47},0, {-14, 210},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{180, 431, 47},0, {1010, 210},{0x49, 0x49, 0x49, 0xFF}}},
	{{{180, 431, 7},0, {1010, 96},{0x49, 0x49, 0xB7, 0xFF}}},
	{{{0, 11, 21},0, {20, 462},{0x0, 0x99, 0x4B, 0xFF}}},
	{{{24, 461, 21},0, {922, 764},{0x6E, 0x5, 0x40, 0xFF}}},
	{{{-23, 461, 21},0, {922, 162},{0x93, 0x5, 0x41, 0xFF}}},
	{{{-23, 35, -19},0, {20, 162},{0xA0, 0xCA, 0xC1, 0xFF}}},
	{{{0, 461, -19},0, {922, 462},{0xFF, 0xB, 0x81, 0xFF}}},
	{{{24, 35, -19},0, {20, 764},{0x60, 0xC9, 0xC2, 0xFF}}},
	{{{0, 475, 6},0, {946, 462},{0xFF, 0x7F, 0xFB, 0xFF}}},
	{{{24, 461, 21},0, {922, 764},{0x31, 0x72, 0x1C, 0xFF}}},
	{{{0, 461, -19},0, {922, 462},{0x0, 0x6F, 0xC2, 0xFF}}},
	{{{0, 475, 6},0, {946, 462},{0xFF, 0x7F, 0xFB, 0xFF}}},
	{{{-23, 461, 21},0, {922, 162},{0xCF, 0x72, 0x1D, 0xFF}}},
	{{{24, 461, 21},0, {922, 764},{0x31, 0x72, 0x1C, 0xFF}}},
	{{{0, 461, -19},0, {922, 462},{0x0, 0x6F, 0xC2, 0xFF}}},
	{{{-179, 231, 7},0, {-16, 974},{0xB7, 0xB7, 0xB7, 0xFF}}},
	{{{-179, 431, 47},0, {-16, -16},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{-179, 431, 7},0, {-16, -16},{0xB7, 0x49, 0xB7, 0xFF}}},
	{{{-179, 231, 47},0, {-16, 974},{0xB7, 0xB7, 0x49, 0xFF}}},
	{{{180, 231, 7},0, {974, 974},{0x49, 0xB7, 0xB7, 0xFF}}},
	{{{180, 431, 7},0, {974, -16},{0x49, 0x49, 0xB7, 0xFF}}},
	{{{180, 231, 47},0, {974, 974},{0x49, 0xB7, 0x49, 0xFF}}},
	{{{180, 431, 47},0, {974, -16},{0x49, 0x49, 0x49, 0xFF}}},
};

Gfx wooden_signpost_sign_mesh_layer_1_tri_0[] = {
	gsSPVertex(wooden_signpost_sign_mesh_layer_1_vtx_0 + 0, 16, 0),
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
	gsSPVertex(wooden_signpost_sign_mesh_layer_1_vtx_0 + 16, 12, 0),
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

Vtx wooden_signpost_sign_mesh_layer_1_vtx_1[4] = {
	{{{-179, 231, 47},0, {-16, 974},{0xB7, 0xB7, 0x49, 0xFF}}},
	{{{180, 431, 47},0, {974, -16},{0x49, 0x49, 0x49, 0xFF}}},
	{{{-179, 431, 47},0, {-16, -16},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{180, 231, 47},0, {974, 974},{0x49, 0xB7, 0x49, 0xFF}}},
};

Gfx wooden_signpost_sign_mesh_layer_1_tri_1[] = {
	gsSPVertex(wooden_signpost_sign_mesh_layer_1_vtx_1 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSPEndDisplayList(),
};


Gfx mat_wooden_signpost_back[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, wooden_signpost_wooden_signpost_back_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPLightColor(LIGHT_1, 0xfefefeff),
    gsSPLightColor(LIGHT_2, 0x7f7f7fff),
	gsSPEndDisplayList(),
};

Gfx mat_wooden_signpost_stone[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, wooden_signpost_wf_textures_08000_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPLightColor(LIGHT_1, 0xfefefeff),
    gsSPLightColor(LIGHT_2, 0x7f7f7fff),
	gsSPEndDisplayList(),
};

Gfx mat_wooden_signpost_front[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, wooden_signpost_wooden_signpost_front_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPLightColor(LIGHT_1, 0xfefefeff),
    gsSPLightColor(LIGHT_2, 0x7f7f7fff),
	gsSPEndDisplayList(),
};

Gfx wooden_signpost_base_mesh_layer_1[] = {
	gsSPDisplayList(mat_wooden_signpost_back),
	gsSPDisplayList(wooden_signpost_base_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_wooden_signpost_stone),
	gsSPDisplayList(wooden_signpost_base_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx wooden_signpost_sign_mesh_layer_1[] = {
	gsSPDisplayList(mat_wooden_signpost_back),
	gsSPDisplayList(wooden_signpost_sign_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_wooden_signpost_front),
	gsSPDisplayList(wooden_signpost_sign_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx wooden_signpost_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

