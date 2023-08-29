Lights1 note_block_f3d_material_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 note_block_f3d_material_001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx note_block_note_block_side_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 note_block_note_block_side_rgba16[] = {
	#include "actors/note_block/note_block_side.rgba16.inc.c"
};

Gfx note_block_note_block_other_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 note_block_note_block_other_rgba16[] = {
	#include "actors/note_block/note_block_other.rgba16.inc.c"
};

Vtx note_block_Cube_mesh_layer_1_vtx_0[16] = {
	{{{-100, -100, 100},0, {1008, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-100, 100, 100},0, {1008, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-100, 100, -100},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-100, -100, -100},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-100, -100, -100},0, {1008, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-100, 100, -100},0, {1008, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{100, 100, -100},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{100, -100, -100},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{100, -100, -100},0, {1008, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{100, 100, -100},0, {1008, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{100, 100, 100},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{100, -100, 100},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{100, -100, 100},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{100, 100, 100},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-100, 100, 100},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-100, -100, 100},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx note_block_Cube_mesh_layer_1_tri_0[] = {
	gsSPVertex(note_block_Cube_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Vtx note_block_Cube_mesh_layer_1_vtx_1[8] = {
	{{{-100, -100, -100},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{100, -100, -100},0, {1008, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{100, -100, 100},0, {1008, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-100, -100, 100},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{100, 100, -100},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-100, 100, -100},0, {1008, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-100, 100, 100},0, {1008, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{100, 100, 100},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx note_block_Cube_mesh_layer_1_tri_1[] = {
	gsSPVertex(note_block_Cube_mesh_layer_1_vtx_1 + 0, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_note_block_f3d_material[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, note_block_note_block_side_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(note_block_f3d_material_lights),
	gsSPEndDisplayList(),
};

Gfx mat_note_block_f3d_material_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, note_block_note_block_other_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(note_block_f3d_material_001_lights),
	gsSPEndDisplayList(),
};

Gfx note_block_Cube_mesh_layer_1[] = {
	gsSPDisplayList(mat_note_block_f3d_material),
	gsSPDisplayList(note_block_Cube_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_note_block_f3d_material_001),
	gsSPDisplayList(note_block_Cube_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx note_block_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

