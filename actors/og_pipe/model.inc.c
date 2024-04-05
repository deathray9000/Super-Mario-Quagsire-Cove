Lights1 og_pipe_green_side_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 og_pipe_green_top_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 og_pipe_inside_lights = gdSPDefLights1(
	0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 og_pipe_red_side_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 og_pipe_red_top_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx og_pipe_green_warp_pipe_side_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 og_pipe_green_warp_pipe_side_rgba16[] = {
	#include "actors/og_pipe/green_warp_pipe_side.rgba16.inc.c"
};

Gfx og_pipe_green_warp_pipe_top_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 og_pipe_green_warp_pipe_top_rgba16[] = {
	#include "actors/og_pipe/green_warp_pipe_top.rgba16.inc.c"
};

Gfx og_pipe_red_warp_pipe_side_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 og_pipe_red_warp_pipe_side_rgba16[] = {
	#include "actors/og_pipe/red_warp_pipe_side.rgba16.inc.c"
};

Gfx og_pipe_red_warp_pipe_top_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 og_pipe_red_warp_pipe_top_rgba16[] = {
	#include "actors/og_pipe/red_warp_pipe_top.rgba16.inc.c"
};

Vtx og_pipe_geo_mesh_layer_1_vtx_0[40] = {
	{{{0, -97, -80},0, {1008, 3543},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, 103, -80},0, {1008, -16},{0x0, 0x50, 0x9D, 0xFF}}},
	{{{57, 103, -57},0, {-16, -16},{0x46, 0x50, 0xBA, 0xFF}}},
	{{{57, -97, -57},0, {-16, 3543},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-57, -97, -57},0, {1008, 3543},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{0, 103, -80},0, {-16, -16},{0x0, 0x50, 0x9D, 0xFF}}},
	{{{0, -97, -80},0, {-16, 3543},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-57, 103, -57},0, {1008, -16},{0xBA, 0x50, 0xBA, 0xFF}}},
	{{{57, -97, -57},0, {1008, 3543},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{57, 103, -57},0, {1008, -16},{0x46, 0x50, 0xBA, 0xFF}}},
	{{{80, 103, 0},0, {-16, -16},{0x63, 0x50, 0x0, 0xFF}}},
	{{{80, -97, 0},0, {-16, 3543},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{80, -97, 0},0, {1008, 3543},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{80, 103, 0},0, {1008, -16},{0x63, 0x50, 0x0, 0xFF}}},
	{{{57, 103, 57},0, {-16, -16},{0x46, 0x50, 0x46, 0xFF}}},
	{{{57, -97, 57},0, {-16, 3543},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{40, 103, 40},0, {349, 1738},{0xCB, 0x66, 0xCB, 0xFF}}},
	{{{56, 103, 0},0, {394, 1520},{0xB4, 0x66, 0x0, 0xFF}}},
	{{{56, 85, 0},0, {394, 1520},{0x9D, 0x50, 0x0, 0xFF}}},
	{{{40, 85, 40},0, {349, 1738},{0xBA, 0x50, 0xBA, 0xFF}}},
	{{{57, -97, 57},0, {1008, 3543},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{57, 103, 57},0, {1008, -16},{0x46, 0x50, 0x46, 0xFF}}},
	{{{0, 103, 80},0, {-16, -16},{0x0, 0x50, 0x63, 0xFF}}},
	{{{0, -97, 80},0, {-16, 3543},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -97, 80},0, {1008, 3543},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, 103, 80},0, {1008, -16},{0x0, 0x50, 0x63, 0xFF}}},
	{{{-57, 103, 57},0, {-16, -16},{0xBA, 0x50, 0x46, 0xFF}}},
	{{{-57, -97, 57},0, {-16, 3543},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-57, -97, 57},0, {1008, 3543},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-57, 103, 57},0, {1008, -16},{0xBA, 0x50, 0x46, 0xFF}}},
	{{{-80, 103, 0},0, {-16, -16},{0x9D, 0x50, 0x0, 0xFF}}},
	{{{-80, -97, 0},0, {-16, 3543},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-80, -97, 0},0, {1008, 3543},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-80, 103, 0},0, {1008, -16},{0x9D, 0x50, 0x0, 0xFF}}},
	{{{-57, 103, -57},0, {-16, -16},{0xBA, 0x50, 0xBA, 0xFF}}},
	{{{-57, -97, -57},0, {-16, 3543},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-40, 103, -40},0, {131, 1302},{0x35, 0x66, 0x35, 0xFF}}},
	{{{-56, 103, 0},0, {86, 1520},{0x4C, 0x66, 0x0, 0xFF}}},
	{{{-56, 85, 0},0, {86, 1520},{0x63, 0x50, 0x0, 0xFF}}},
	{{{-40, 85, -40},0, {131, 1302},{0x46, 0x50, 0x46, 0xFF}}},
};

Gfx og_pipe_geo_mesh_layer_1_tri_0[] = {
	gsSPVertex(og_pipe_geo_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(og_pipe_geo_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(og_pipe_geo_mesh_layer_1_vtx_0 + 32, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};

Vtx og_pipe_geo_mesh_layer_1_vtx_1[44] = {
	{{{0, 103, -56},0, {128, 648},{0x0, 0x66, 0x4C, 0xFF}}},
	{{{-40, 103, -40},0, {247, 908},{0x35, 0x66, 0x35, 0xFF}}},
	{{{-40, 85, -40},0, {318, 877},{0x46, 0x50, 0x46, 0xFF}}},
	{{{0, 85, -56},0, {212, 630},{0x0, 0x50, 0x63, 0xFF}}},
	{{{40, 103, -40},0, {135, 342},{0xCB, 0x66, 0x35, 0xFF}}},
	{{{40, 85, -40},0, {212, 359},{0xBA, 0x50, 0x46, 0xFF}}},
	{{{56, 103, 0},0, {258, 99},{0xB4, 0x66, 0x0, 0xFF}}},
	{{{56, 85, 0},0, {318, 129},{0x9D, 0x50, 0x0, 0xFF}}},
	{{{40, 103, -40},0, {135, 342},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{56, 103, 0},0, {258, 99},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{80, 103, 0},0, {167, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{57, 103, -57},0, {-16, 312},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 103, -56},0, {128, 648},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 103, -80},0, {-12, 691},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-40, 103, -40},0, {247, 908},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-57, 103, -57},0, {162, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{56, 103, 0},0, {645, 855},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{40, 103, 40},0, {347, 855},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{57, 103, 57},0, {284, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{80, 103, 0},0, {708, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{40, 103, 40},0, {247, 908},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 103, 56},0, {128, 648},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 103, 80},0, {-12, 691},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{57, 103, 57},0, {162, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 103, 56},0, {128, 648},{0x0, 0x66, 0xB4, 0xFF}}},
	{{{40, 103, 40},0, {247, 908},{0xCB, 0x66, 0xCB, 0xFF}}},
	{{{40, 85, 40},0, {318, 877},{0xBA, 0x50, 0xBA, 0xFF}}},
	{{{0, 85, 56},0, {212, 630},{0x0, 0x50, 0x9D, 0xFF}}},
	{{{-40, 103, 40},0, {135, 342},{0x35, 0x66, 0xCB, 0xFF}}},
	{{{-40, 85, 40},0, {212, 359},{0x46, 0x50, 0xBA, 0xFF}}},
	{{{-56, 103, 0},0, {258, 99},{0x4C, 0x66, 0x0, 0xFF}}},
	{{{-56, 85, 0},0, {318, 129},{0x63, 0x50, 0x0, 0xFF}}},
	{{{0, 103, 56},0, {128, 648},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-40, 103, 40},0, {135, 342},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-57, 103, 57},0, {-16, 312},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 103, 80},0, {-12, 691},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-40, 103, 40},0, {135, 342},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-56, 103, 0},0, {258, 99},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-80, 103, 0},0, {167, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-57, 103, 57},0, {-16, 312},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-56, 103, 0},0, {347, 137},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-40, 103, -40},0, {645, 137},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-57, 103, -57},0, {708, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-80, 103, 0},0, {284, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx og_pipe_geo_mesh_layer_1_tri_1[] = {
	gsSPVertex(og_pipe_geo_mesh_layer_1_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 8, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(og_pipe_geo_mesh_layer_1_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 8, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(og_pipe_geo_mesh_layer_1_vtx_1 + 32, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSPEndDisplayList(),
};

Vtx og_pipe_geo_mesh_layer_1_vtx_2[8] = {
	{{{56, 85, 0},0, {394, 752},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{40, 85, -40},0, {349, 643},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 85, -56},0, {240, 598},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-56, 85, 0},0, {86, 752},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-40, 85, -40},0, {131, 643},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 85, 56},0, {240, 906},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-40, 85, 40},0, {131, 861},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{40, 85, 40},0, {349, 861},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx og_pipe_geo_mesh_layer_1_tri_2[] = {
	gsSPVertex(og_pipe_geo_mesh_layer_1_vtx_2 + 0, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(3, 5, 0, 0),
	gsSP1Triangle(3, 6, 5, 0),
	gsSP1Triangle(5, 7, 0, 0),
	gsSPEndDisplayList(),
};


Gfx mat_og_pipe_green_side[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, og_pipe_green_warp_pipe_side_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(og_pipe_green_side_lights),
	gsSPEndDisplayList(),
};

Gfx mat_og_pipe_green_top[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, og_pipe_green_warp_pipe_top_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(og_pipe_green_top_lights),
	gsSPEndDisplayList(),
};

Gfx mat_og_pipe_inside[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(og_pipe_inside_lights),
	gsSPEndDisplayList(),
};

Gfx mat_og_pipe_red_side[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, og_pipe_red_warp_pipe_side_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(og_pipe_red_side_lights),
	gsSPEndDisplayList(),
};

Gfx mat_og_pipe_red_top[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, og_pipe_red_warp_pipe_top_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(og_pipe_red_top_lights),
	gsSPEndDisplayList(),
};

Gfx og_pipe_geo_mesh_layer_1[] = {
	gsSPDisplayList(mat_og_pipe_green_side),
	gsSPDisplayList(og_pipe_geo_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_og_pipe_green_top),
	gsSPDisplayList(og_pipe_geo_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_og_pipe_inside),
	gsSPDisplayList(og_pipe_geo_mesh_layer_1_tri_2),
	gsSPEndDisplayList(),
};

Gfx og_pipe_geo_mesh_layer_1_mat_override_red_side_0[] = {
	gsSPDisplayList(mat_og_pipe_red_side),
	gsSPDisplayList(og_pipe_geo_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_og_pipe_red_top),
	gsSPDisplayList(og_pipe_geo_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_og_pipe_inside),
	gsSPDisplayList(og_pipe_geo_mesh_layer_1_tri_2),
	gsSPEndDisplayList(),
};

Gfx og_pipe_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

