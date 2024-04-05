Lights1 Silver_Star_eye_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 Silver_Star_body_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx Silver_Star_eye_black_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 Silver_Star_eye_black_rgba16[] = {
	#include "actors/silver_star/eye_black.rgba16.inc.c"
};

Gfx Silver_Star_body_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 Silver_Star_body_rgba16[] = {
	#include "actors/silver_star/body.rgba16.inc.c"
};

Vtx Silver_Star_star_mesh_layer_4_vtx_0[8] = {
	{{{0, -11, 20},0, {-16, 940},{0x0, 0x14, 0x7D, 0xFF}}},
	{{{15, -12, 17},0, {974, 940},{0x18, 0x14, 0x7B, 0xFF}}},
	{{{15, 14, 13},0, {974, 22},{0x18, 0x14, 0x7B, 0xFF}}},
	{{{0, 15, 16},0, {-16, 22},{0x0, 0x14, 0x7D, 0xFF}}},
	{{{-15, -12, 17},0, {-16, 940},{0xE7, 0x14, 0x7B, 0xFF}}},
	{{{0, -11, 20},0, {974, 940},{0x0, 0x14, 0x7D, 0xFF}}},
	{{{0, 15, 16},0, {974, 22},{0x0, 0x14, 0x7D, 0xFF}}},
	{{{-15, 14, 13},0, {-16, 22},{0xE7, 0x14, 0x7B, 0xFF}}},
};

Gfx Silver_Star_star_mesh_layer_4_tri_0[] = {
	gsSPVertex(Silver_Star_star_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 4, 6, 0),
	gsSPEndDisplayList(),
};

Vtx Silver_Star_star_mesh_layer_1_vtx_0[12] = {
	{{{43, -50, -2},0, {851, -898},{0x56, 0xA2, 0x0, 0xFF}}},
	{{{0, -34, -2},0, {512, -1036},{0x0, 0x81, 0xFF, 0xFF}}},
	{{{0, -3, -21},0, {360, -479},{0x0, 0x3, 0x81, 0xFF}}},
	{{{0, -3, 19},0, {665, -486},{0x0, 0x1, 0x7F, 0xFF}}},
	{{{33, -14, -1},0, {1006, -614},{0x7D, 0xEA, 0x0, 0xFF}}},
	{{{58, 14, -1},0, {926, -215},{0x77, 0x2C, 0x0, 0xFF}}},
	{{{22, 17, -1},0, {755, -49},{0x37, 0x73, 0x0, 0xFF}}},
	{{{0, 50, -1},0, {512, 13},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-21, 17, -1},0, {270, -50},{0xC8, 0x72, 0x0, 0xFF}}},
	{{{-57, 14, -2},0, {95, -217},{0x88, 0x2B, 0x0, 0xFF}}},
	{{{-32, -15, -2},0, {19, -617},{0x83, 0xE9, 0xFF, 0xFF}}},
	{{{-42, -50, -2},0, {170, -899},{0xAB, 0xA2, 0xFF, 0xFF}}},
};

Gfx Silver_Star_star_mesh_layer_1_tri_0[] = {
	gsSPVertex(Silver_Star_star_mesh_layer_1_vtx_0 + 0, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 0, 2, 0),
	gsSP1Triangle(4, 2, 5, 0),
	gsSP1Triangle(5, 2, 6, 0),
	gsSP1Triangle(2, 7, 6, 0),
	gsSP1Triangle(8, 7, 2, 0),
	gsSP1Triangle(9, 8, 2, 0),
	gsSP1Triangle(10, 9, 2, 0),
	gsSP1Triangle(11, 10, 2, 0),
	gsSP1Triangle(1, 11, 2, 0),
	gsSP1Triangle(1, 3, 11, 0),
	gsSP1Triangle(11, 3, 10, 0),
	gsSP1Triangle(10, 3, 9, 0),
	gsSP1Triangle(9, 3, 8, 0),
	gsSP1Triangle(8, 3, 7, 0),
	gsSP1Triangle(3, 6, 7, 0),
	gsSP1Triangle(5, 6, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_Silver_Star_eye[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, Silver_Star_eye_black_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(Silver_Star_eye_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_Silver_Star_eye[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx mat_Silver_Star_body[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, Silver_Star_body_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(Silver_Star_body_lights),
	gsSPEndDisplayList(),
};

Gfx Silver_Star_star_mesh_layer_4[] = {
	gsSPDisplayList(mat_Silver_Star_eye),
	gsSPDisplayList(Silver_Star_star_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_Silver_Star_eye),
	gsSPEndDisplayList(),
};

Gfx Silver_Star_star_mesh_layer_1[] = {
	gsSPDisplayList(mat_Silver_Star_body),
	gsSPDisplayList(Silver_Star_star_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx Silver_Star_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

