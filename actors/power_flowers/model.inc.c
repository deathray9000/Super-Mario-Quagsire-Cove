Lights1 power_flowers_leaf_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 power_flowers_leaf_blue_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 power_flowers_purple_lights = gdSPDefLights1(
	0x5C, 0x1E, 0x5C,
	0xB8, 0x3C, 0xB9, 0x28, 0x28, 0x28);

Lights1 power_flowers_yellow_lights = gdSPDefLights1(
	0x7F, 0x79, 0x14,
	0xFE, 0xF3, 0x29, 0x28, 0x28, 0x28);

Lights1 power_flowers_pink_lights = gdSPDefLights1(
	0x7F, 0x56, 0x64,
	0xFE, 0xAD, 0xC8, 0x28, 0x28, 0x28);

Lights1 power_flowers_red_lights = gdSPDefLights1(
	0x73, 0x1B, 0xC,
	0xE7, 0x37, 0x18, 0x28, 0x28, 0x28);

Lights1 power_flowers_white_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 power_flowers_eye_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 power_flowers_dark_blue_lights = gdSPDefLights1(
	0xB, 0x0, 0x7F,
	0x17, 0x0, 0xFE, 0x28, 0x28, 0x28);

Gfx power_flowers_leaf_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 power_flowers_leaf_rgba16[] = {
	#include "actors/power_flowers/leaf.rgba16.inc.c"
};

Gfx power_flowers_leaf_blue_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 power_flowers_leaf_blue_rgba16[] = {
	#include "actors/power_flowers/leaf_blue.rgba16.inc.c"
};

Gfx power_flowers_eye_black_ia4_aligner[] = {gsSPEndDisplayList()};
u8 power_flowers_eye_black_ia4[] = {
	#include "actors/power_flowers/eye_black.ia4.inc.c"
};

Vtx power_flowers_root_mesh_layer_1_vtx_0[31] = {
	{{{-10, 24, 1},0, {458, 1175},{0xBD, 0x66, 0xDD, 0xFF}}},
	{{{-14, 25, 17},0, {835, 1240},{0x12, 0x28, 0x77, 0xFF}}},
	{{{-5, 25, 9},0, {639, 1090},{0xEC, 0x57, 0x5B, 0xFF}}},
	{{{-16, 24, -1},0, {460, 1270},{0x3F, 0x68, 0xDA, 0xFF}}},
	{{{-14, 13, -16},0, {122, 1240},{0x8, 0xD3, 0x89, 0xFF}}},
	{{{-5, 19, -8},0, {263, 1092},{0xF8, 0x31, 0x8B, 0xFF}}},
	{{{0, 9, -10},0, {195, 1011},{0x0, 0xB6, 0x99, 0xFF}}},
	{{{0, 17, -8},0, {258, 1011},{0x0, 0xC, 0x82, 0xFF}}},
	{{{5, 19, -8},0, {263, 921},{0x3, 0x31, 0x8B, 0xFF}}},
	{{{14, 13, -16},0, {122, 784},{0xEB, 0xD2, 0x8C, 0xFF}}},
	{{{16, 24, -1},0, {460, 754},{0xC7, 0x6B, 0xDB, 0xFF}}},
	{{{10, 24, 1},0, {458, 838},{0x41, 0x6A, 0xE5, 0xFF}}},
	{{{14, 25, 17},0, {835, 784},{0xFC, 0x28, 0x79, 0xFF}}},
	{{{5, 25, 9},0, {639, 922},{0x14, 0x57, 0x5B, 0xFF}}},
	{{{0, 18, 15},0, {716, 1011},{0x0, 0xFC, 0x7F, 0xFF}}},
	{{{-14, 5, 6},0, {524, 1240},{0xCE, 0x92, 0x26, 0xFF}}},
	{{{0, 1, 7},0, {496, 1011},{0x0, 0x88, 0x2B, 0xFF}}},
	{{{14, 5, 6},0, {524, 784},{0x33, 0x93, 0x29, 0xFF}}},
	{{{5, 19, -8},0, {302, 921},{0x3, 0x31, 0x8B, 0xFF}}},
	{{{10, 37, 0},0, {486, 847},{0x7F, 0x6, 0xFF, 0xFF}}},
	{{{10, 24, 1},0, {458, 838},{0x41, 0x6A, 0xE5, 0xFF}}},
	{{{5, 36, -9},0, {349, 927},{0x3F, 0x3, 0x92, 0xFF}}},
	{{{0, 17, -8},0, {297, 1011},{0x0, 0xC, 0x82, 0xFF}}},
	{{{-5, 36, -9},0, {349, 1086},{0xC1, 0x3, 0x92, 0xFF}}},
	{{{-5, 19, -8},0, {301, 1092},{0xF8, 0x31, 0x8B, 0xFF}}},
	{{{-10, 24, 1},0, {458, 1175},{0xBD, 0x66, 0xDD, 0xFF}}},
	{{{-9, 37, 0},0, {486, 1166},{0x81, 0x6, 0xFF, 0xFF}}},
	{{{-5, 25, 9},0, {604, 1090},{0xEC, 0x57, 0x5B, 0xFF}}},
	{{{-5, 37, 8},0, {622, 1086},{0xC0, 0x8, 0x6D, 0xFF}}},
	{{{5, 25, 9},0, {604, 922},{0x14, 0x57, 0x5B, 0xFF}}},
	{{{5, 37, 8},0, {622, 927},{0x40, 0x9, 0x6D, 0xFF}}},
};

Gfx power_flowers_root_mesh_layer_1_tri_0[] = {
	gsSPVertex(power_flowers_root_mesh_layer_1_vtx_0 + 0, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(3, 0, 4, 0, 4, 0, 5, 0),
	gsSP2Triangles(5, 6, 4, 0, 7, 6, 5, 0),
	gsSP2Triangles(8, 6, 7, 0, 8, 9, 6, 0),
	gsSP2Triangles(9, 8, 10, 0, 10, 8, 11, 0),
	gsSP2Triangles(11, 12, 10, 0, 13, 12, 11, 0),
	gsSP2Triangles(13, 14, 12, 0, 2, 14, 13, 0),
	gsSP2Triangles(2, 1, 14, 0, 14, 1, 15, 0),
	gsSP2Triangles(15, 16, 14, 0, 6, 16, 15, 0),
	gsSP2Triangles(4, 6, 15, 0, 6, 17, 16, 0),
	gsSP2Triangles(9, 17, 6, 0, 16, 17, 14, 0),
	gsSP2Triangles(14, 17, 12, 0, 18, 19, 20, 0),
	gsSP2Triangles(21, 19, 18, 0, 22, 21, 18, 0),
	gsSP2Triangles(21, 22, 23, 0, 23, 22, 24, 0),
	gsSP2Triangles(25, 23, 24, 0, 26, 23, 25, 0),
	gsSP2Triangles(27, 26, 25, 0, 28, 26, 27, 0),
	gsSP2Triangles(29, 28, 27, 0, 29, 30, 28, 0),
	gsSP2Triangles(20, 30, 29, 0, 20, 19, 30, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_left_leaf_skinned_mesh_layer_1_vtx_0[4] = {
	{{{-16, 24, -1},0, {460, 1270},{0x3F, 0x68, 0xDA, 0xFF}}},
	{{{-14, 25, 17},0, {835, 1240},{0x12, 0x28, 0x77, 0xFF}}},
	{{{-14, 5, 6},0, {524, 1240},{0xCE, 0x92, 0x26, 0xFF}}},
	{{{-14, 13, -16},0, {122, 1240},{0x8, 0xD3, 0x89, 0xFF}}},
};

Gfx power_flowers_left_leaf_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(power_flowers_left_leaf_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_left_leaf_mesh_layer_1_vtx_0[4] = {
	{{{11, 42, 30},0, {922, 1702},{0x32, 0x21, 0x70, 0xFF}}},
	{{{5, 38, 1},0, {465, 1702},{0x7C, 0x1A, 0xF5, 0xFF}}},
	{{{7, 39, -27},0, {44, 1702},{0x2B, 0x1A, 0x8B, 0xFF}}},
	{{{-7, 29, 3},0, {500, 1702},{0x81, 0x1, 0x4, 0xFF}}},
};

Gfx power_flowers_left_leaf_mesh_layer_1_tri_0[] = {
	gsSPVertex(power_flowers_left_leaf_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(1, 0, 4, 0, 4, 0, 5, 0),
	gsSP2Triangles(5, 0, 6, 0, 6, 0, 3, 0),
	gsSP2Triangles(6, 3, 7, 0, 3, 2, 7, 0),
	gsSP2Triangles(7, 2, 4, 0, 2, 1, 4, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_left_leaf_mesh_layer_1_vtx_1[11] = {
	{{{-1, 49, -25},0, {76, 1907},{0xF6, 0x32, 0x8C, 0xFF}}},
	{{{5, 38, 1},0, {465, 1702},{0x7C, 0x1A, 0xF5, 0xFF}}},
	{{{7, 39, -27},0, {44, 1702},{0x2B, 0x1A, 0x8B, 0xFF}}},
	{{{0, 50, 0},0, {458, 1907},{0x54, 0x5D, 0xED, 0xFF}}},
	{{{-10, 53, -12},0, {269, 2052},{0xA8, 0x47, 0xC6, 0xFF}}},
	{{{-8, 44, 2},0, {483, 1907},{0x88, 0xD9, 0xC, 0xFF}}},
	{{{-7, 29, 3},0, {500, 1702},{0x81, 0x1, 0x4, 0xFF}}},
	{{{11, 42, 30},0, {922, 1702},{0x32, 0x21, 0x70, 0xFF}}},
	{{{5, 53, 24},0, {829, 1907},{0x13, 0x5B, 0x56, 0xFF}}},
	{{{-7, 55, 14},0, {669, 2052},{0xB7, 0x52, 0x40, 0xFF}}},
	{{{-12, 53, 1},0, {477, 2070},{0x98, 0x49, 0x6, 0xFF}}},
};

Gfx power_flowers_left_leaf_mesh_layer_1_tri_1[] = {
	gsSPVertex(power_flowers_left_leaf_mesh_layer_1_vtx_1 + 0, 11, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 3, 0, 0, 0, 5, 4, 0),
	gsSP2Triangles(0, 2, 5, 0, 2, 6, 5, 0),
	gsSP2Triangles(5, 6, 7, 0, 8, 5, 7, 0),
	gsSP2Triangles(7, 1, 8, 0, 8, 1, 3, 0),
	gsSP2Triangles(8, 3, 9, 0, 9, 3, 10, 0),
	gsSP2Triangles(3, 4, 10, 0, 4, 5, 10, 0),
	gsSP2Triangles(9, 10, 5, 0, 5, 8, 9, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_right_leaf_skinned_mesh_layer_1_vtx_0[4] = {
	{{{16, 24, -1},0, {460, 754},{0xC7, 0x6B, 0xDB, 0xFF}}},
	{{{14, 25, 17},0, {835, 784},{0xFC, 0x28, 0x79, 0xFF}}},
	{{{14, 13, -16},0, {122, 784},{0xEB, 0xD2, 0x8C, 0xFF}}},
	{{{14, 5, 6},0, {524, 784},{0x33, 0x93, 0x29, 0xFF}}},
};

Gfx power_flowers_right_leaf_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(power_flowers_right_leaf_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_right_leaf_mesh_layer_1_vtx_0[4] = {
	{{{-11, 42, 30},0, {922, 331},{0xCF, 0x1C, 0x71, 0xFF}}},
	{{{7, 30, 3},0, {500, 331},{0x7E, 0x0, 0x12, 0xFF}}},
	{{{-3, 37, -30},0, {-2, 331},{0xEC, 0xC, 0x83, 0xFF}}},
	{{{-6, 38, 1},0, {465, 331},{0x84, 0x17, 0xEF, 0xFF}}},
};

Gfx power_flowers_right_leaf_mesh_layer_1_tri_0[] = {
	gsSPVertex(power_flowers_right_leaf_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(1, 4, 0, 0, 4, 1, 5, 0),
	gsSP2Triangles(1, 3, 5, 0, 5, 3, 6, 0),
	gsSP2Triangles(3, 2, 6, 0, 6, 2, 0, 0),
	gsSP2Triangles(6, 0, 7, 0, 0, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_right_leaf_mesh_layer_1_vtx_1[11] = {
	{{{-11, 42, 30},0, {922, 331},{0xCF, 0x1C, 0x71, 0xFF}}},
	{{{-6, 53, 24},0, {829, 133},{0xEE, 0x5C, 0x55, 0xFF}}},
	{{{-6, 38, 1},0, {465, 331},{0x84, 0x17, 0xEF, 0xFF}}},
	{{{8, 44, 2},0, {483, 133},{0x79, 0xDE, 0x12, 0xFF}}},
	{{{7, 30, 3},0, {500, 331},{0x7E, 0x0, 0x12, 0xFF}}},
	{{{-3, 37, -30},0, {-2, 331},{0xEC, 0xC, 0x83, 0xFF}}},
	{{{0, 49, -25},0, {76, 133},{0x5, 0x4B, 0x9A, 0xFF}}},
	{{{-1, 50, 0},0, {458, 133},{0xAD, 0x5E, 0xED, 0xFF}}},
	{{{6, 55, 14},0, {669, -7},{0x4A, 0x51, 0x40, 0xFF}}},
	{{{11, 53, 1},0, {477, -24},{0x68, 0x48, 0x6, 0xFF}}},
	{{{10, 53, -12},0, {269, -7},{0x5A, 0x45, 0xC7, 0xFF}}},
};

Gfx power_flowers_right_leaf_mesh_layer_1_tri_1[] = {
	gsSPVertex(power_flowers_right_leaf_mesh_layer_1_vtx_1 + 0, 11, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(0, 4, 3, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 5, 6, 0, 5, 2, 6, 0),
	gsSP2Triangles(6, 2, 7, 0, 2, 1, 7, 0),
	gsSP2Triangles(1, 8, 7, 0, 1, 3, 8, 0),
	gsSP2Triangles(9, 8, 3, 0, 9, 3, 10, 0),
	gsSP2Triangles(6, 10, 3, 0, 6, 7, 10, 0),
	gsSP2Triangles(10, 7, 9, 0, 7, 8, 9, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_stem_skinned_mesh_layer_1_vtx_0[6] = {
	{{{5, 36, -9},0, {349, 927},{0x3F, 0x3, 0x92, 0xFF}}},
	{{{5, 37, 8},0, {622, 927},{0x40, 0x9, 0x6D, 0xFF}}},
	{{{10, 37, 0},0, {486, 847},{0x7F, 0x6, 0xFF, 0xFF}}},
	{{{-5, 36, -9},0, {349, 1086},{0xC1, 0x3, 0x92, 0xFF}}},
	{{{-9, 37, 0},0, {486, 1166},{0x81, 0x6, 0xFF, 0xFF}}},
	{{{-5, 37, 8},0, {622, 1086},{0xC0, 0x8, 0x6D, 0xFF}}},
};

Gfx power_flowers_stem_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(power_flowers_stem_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_stem_mesh_layer_1_vtx_0[6] = {
	{{{9, 0, 0},0, {573, 866},{0x7F, 0x7, 0x3, 0xFF}}},
	{{{4, 0, -7},0, {453, 937},{0x41, 0xB, 0x93, 0xFF}}},
	{{{-4, 0, -7},0, {453, 1076},{0xBF, 0xB, 0x93, 0xFF}}},
	{{{-8, 0, 0},0, {573, 1146},{0x81, 0x7, 0x3, 0xFF}}},
	{{{-4, 0, 8},0, {694, 1076},{0xC2, 0x4, 0x6F, 0xFF}}},
	{{{4, 0, 8},0, {694, 937},{0x3E, 0x4, 0x6F, 0xFF}}},
};

Gfx power_flowers_stem_mesh_layer_1_tri_0[] = {
	gsSPVertex(power_flowers_stem_mesh_layer_1_vtx_0 + 0, 6, 6),
	gsSP2Triangles(2, 6, 1, 0, 6, 2, 0, 0),
	gsSP2Triangles(0, 7, 6, 0, 8, 7, 0, 0),
	gsSP2Triangles(3, 8, 0, 0, 9, 8, 3, 0),
	gsSP2Triangles(4, 9, 3, 0, 9, 4, 10, 0),
	gsSP2Triangles(10, 4, 5, 0, 5, 11, 10, 0),
	gsSP2Triangles(1, 11, 5, 0, 1, 6, 11, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_stem_mesh_layer_1_vtx_1[13] = {
	{{{-4, 0, -7},0, {453, 1076},{0xBF, 0xB, 0x93, 0xFF}}},
	{{{-8, 0, 0},0, {573, 1146},{0x81, 0x7, 0x3, 0xFF}}},
	{{{-3, 17, -7},0, {480, 1067},{0xBD, 0x98, 0xE2, 0xFF}}},
	{{{-7, 21, -1},0, {586, 1122},{0x9E, 0xC6, 0x39, 0xFF}}},
	{{{-3, 24, 5},0, {684, 1062},{0xD6, 0xFC, 0x78, 0xFF}}},
	{{{-4, 0, 8},0, {694, 1076},{0xC2, 0x4, 0x6F, 0xFF}}},
	{{{4, 24, 5},0, {684, 951},{0x2B, 0xFC, 0x77, 0xFF}}},
	{{{4, 0, 8},0, {694, 937},{0x3E, 0x4, 0x6F, 0xFF}}},
	{{{7, 21, -1},0, {586, 891},{0x63, 0xCD, 0x3D, 0xFF}}},
	{{{9, 0, 0},0, {573, 866},{0x7F, 0x7, 0x3, 0xFF}}},
	{{{4, 17, -7},0, {480, 946},{0x45, 0x97, 0xED, 0xFF}}},
	{{{4, 0, -7},0, {453, 937},{0x41, 0xB, 0x93, 0xFF}}},
	{{{0, 16, -7},0, {479, 1006},{0xF9, 0xA3, 0xAA, 0xFF}}},
};

Gfx power_flowers_stem_mesh_layer_1_tri_1[] = {
	gsSPVertex(power_flowers_stem_mesh_layer_1_vtx_1 + 0, 13, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(3, 1, 4, 0, 4, 1, 5, 0),
	gsSP2Triangles(5, 6, 4, 0, 7, 6, 5, 0),
	gsSP2Triangles(7, 8, 6, 0, 9, 8, 7, 0),
	gsSP2Triangles(9, 10, 8, 0, 11, 10, 9, 0),
	gsSP2Triangles(11, 12, 10, 0, 0, 12, 11, 0),
	gsSP1Triangle(12, 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_head_skinned_mesh_layer_1_vtx_0[7] = {
	{{{-3, 17, -7},0, {480, 1067},{0xBD, 0x98, 0xE2, 0xFF}}},
	{{{0, 16, -7},0, {479, 1006},{0xF9, 0xA3, 0xAA, 0xFF}}},
	{{{4, 17, -7},0, {480, 946},{0x45, 0x97, 0xED, 0xFF}}},
	{{{7, 21, -1},0, {586, 891},{0x63, 0xCD, 0x3D, 0xFF}}},
	{{{4, 24, 5},0, {684, 951},{0x2B, 0xFC, 0x77, 0xFF}}},
	{{{-7, 21, -1},0, {586, 1122},{0x9E, 0xC6, 0x39, 0xFF}}},
	{{{-3, 24, 5},0, {684, 1062},{0xD6, 0xFC, 0x78, 0xFF}}},
};

Gfx power_flowers_head_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(power_flowers_head_skinned_mesh_layer_1_vtx_0 + 0, 7, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_head_mesh_layer_1_vtx_0[16] = {
	{{{8, 21, 5},0, {258, 986},{0xFA, 0xA3, 0x57, 0xFF}}},
	{{{20, 13, 0},0, {258, 987},{0xEB, 0xAC, 0x5D, 0xFF}}},
	{{{-19, 3, -7},0, {259, 982},{0x1B, 0xC8, 0x6F, 0xFF}}},
	{{{-6, -5, -13},0, {259, 983},{0x7, 0xCB, 0x73, 0xFF}}},
	{{{-7, 21, 6},0, {257, 984},{0xA, 0x9F, 0x52, 0xFF}}},
	{{{-18, 14, 1},0, {258, 983},{0x1E, 0xAD, 0x5B, 0xFF}}},
	{{{8, -5, -13},0, {259, 985},{0x0, 0xD0, 0x76, 0xFF}}},
	{{{-6, -5, -13},0, {259, 984},{0x7, 0xCB, 0x73, 0xFF}}},
	{{{8, -5, -13},0, {259, 985},{0x0, 0xD0, 0x76, 0xFF}}},
	{{{20, 2, -7},0, {259, 986},{0xEC, 0xC4, 0x6E, 0xFF}}},
	{{{20, 13, 0},0, {258, 987},{0xEB, 0xAC, 0x5D, 0xFF}}},
	{{{20, 2, -7},0, {259, 987},{0xEC, 0xC4, 0x6E, 0xFF}}},
	{{{8, 21, 5},0, {257, 985},{0xFA, 0xA3, 0x57, 0xFF}}},
	{{{-7, 21, 6},0, {257, 985},{0xA, 0x9F, 0x52, 0xFF}}},
	{{{-19, 3, -7},0, {258, 982},{0x1B, 0xC8, 0x6F, 0xFF}}},
	{{{-18, 14, 1},0, {258, 982},{0x1E, 0xAD, 0x5B, 0xFF}}},
};

Gfx power_flowers_head_mesh_layer_1_tri_0[] = {
	gsSPVertex(power_flowers_head_mesh_layer_1_vtx_0 + 0, 16, 7),
	gsSP2Triangles(7, 4, 8, 0, 5, 9, 10, 0),
	gsSP2Triangles(6, 11, 12, 0, 1, 0, 13, 0),
	gsSP2Triangles(13, 0, 14, 0, 0, 5, 14, 0),
	gsSP2Triangles(2, 1, 15, 0, 3, 2, 15, 0),
	gsSP2Triangles(16, 3, 15, 0, 17, 3, 18, 0),
	gsSP2Triangles(4, 3, 17, 0, 19, 20, 4, 0),
	gsSP2Triangles(4, 20, 6, 0, 6, 21, 5, 0),
	gsSP1Triangle(22, 21, 6, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_head_mesh_layer_1_vtx_1[54] = {
	{{{20, 2, -7},0, {41, 100},{0xEC, 0xC4, 0x6E, 0xFF}}},
	{{{8, -5, -13},0, {41, 100},{0x0, 0xD0, 0x76, 0xFF}}},
	{{{29, -4, -3},0, {41, 100},{0x0, 0xB4, 0x66, 0xFF}}},
	{{{14, -14, -11},0, {41, 100},{0xFA, 0xBA, 0x6A, 0xFF}}},
	{{{-6, -5, -13},0, {41, 100},{0x7, 0xCB, 0x73, 0xFF}}},
	{{{-9, -13, -10},0, {41, 100},{0x5, 0xBE, 0x6D, 0xFF}}},
	{{{-25, -3, -3},0, {41, 100},{0x8, 0xB7, 0x68, 0xFF}}},
	{{{-19, 3, -7},0, {41, 100},{0x1B, 0xC8, 0x6F, 0xFF}}},
	{{{-18, 14, 1},0, {41, 100},{0x1E, 0xAD, 0x5B, 0xFF}}},
	{{{-25, 12, 8},0, {41, 100},{0x9, 0xB4, 0x66, 0xFF}}},
	{{{-9, 22, 15},0, {41, 100},{0x6, 0xAB, 0x5F, 0xFF}}},
	{{{-7, 21, 6},0, {41, 100},{0xA, 0x9F, 0x52, 0xFF}}},
	{{{13, 22, 15},0, {41, 100},{0xFA, 0xB0, 0x62, 0xFF}}},
	{{{8, 21, 5},0, {41, 100},{0xFA, 0xA3, 0x57, 0xFF}}},
	{{{20, 13, 0},0, {41, 100},{0xEB, 0xAC, 0x5D, 0xFF}}},
	{{{29, 11, 7},0, {41, 100},{0xFF, 0xB8, 0x68, 0xFF}}},
	{{{43, 17, 6},0, {41, 100},{0x20, 0xC3, 0x6B, 0xFF}}},
	{{{43, -4, -10},0, {41, 100},{0x1F, 0xA9, 0x58, 0xFF}}},
	{{{19, -20, -21},0, {41, 100},{0xB, 0x99, 0x4A, 0xFF}}},
	{{{-15, -19, -21},0, {41, 100},{0xF4, 0x99, 0x49, 0xFF}}},
	{{{-39, -3, -10},0, {41, 100},{0xE2, 0xA9, 0x58, 0xFF}}},
	{{{-39, 18, 6},0, {41, 100},{0xE1, 0xC2, 0x6B, 0xFF}}},
	{{{-15, 33, 18},0, {41, 100},{0xF4, 0xD7, 0x78, 0xFF}}},
	{{{18, 33, 17},0, {41, 100},{0xE, 0xD8, 0x78, 0xFF}}},
	{{{8, 38, -16},0, {41, 100},{0xFB, 0x3C, 0x90, 0xFF}}},
	{{{-10, 39, -16},0, {41, 100},{0x5, 0x3A, 0x8F, 0xFF}}},
	{{{11, 46, -17},0, {41, 100},{0x3, 0x55, 0xA2, 0xFF}}},
	{{{-13, 47, -17},0, {41, 100},{0xFD, 0x57, 0xA3, 0xFF}}},
	{{{-30, 36, -24},0, {41, 100},{0xEC, 0x52, 0xA1, 0xFF}}},
	{{{-23, 31, -22},0, {41, 100},{0xF, 0x43, 0x95, 0xFF}}},
	{{{-30, 20, -36},0, {41, 100},{0xEB, 0x3C, 0x92, 0xFF}}},
	{{{-23, 19, -31},0, {41, 100},{0x10, 0x55, 0xA3, 0xFF}}},
	{{{-30, 20, -36},0, {41, 100},{0xEB, 0x3C, 0x92, 0xFF}}},
	{{{-23, 19, -31},0, {41, 100},{0x10, 0x55, 0xA3, 0xFF}}},
	{{{-13, 9, -44},0, {41, 100},{0xFD, 0x38, 0x8E, 0xFF}}},
	{{{-10, 10, -36},0, {41, 100},{0x3, 0x54, 0xA1, 0xFF}}},
	{{{11, 8, -44},0, {41, 100},{0x2, 0x39, 0x8E, 0xFF}}},
	{{{9, 10, -37},0, {41, 100},{0xFB, 0x59, 0xA5, 0xFF}}},
	{{{22, 18, -31},0, {41, 100},{0xEF, 0x52, 0xA0, 0xFF}}},
	{{{28, 19, -36},0, {41, 100},{0x11, 0x3E, 0x92, 0xFF}}},
	{{{22, 30, -22},0, {41, 100},{0xEB, 0x3E, 0x93, 0xFF}}},
	{{{28, 35, -25},0, {41, 100},{0x10, 0x52, 0xA0, 0xFF}}},
	{{{8, 38, -16},0, {41, 100},{0xFB, 0x3C, 0x90, 0xFF}}},
	{{{11, 46, -17},0, {41, 100},{0x3, 0x55, 0xA2, 0xFF}}},
	{{{37, 34, -17},0, {41, 100},{0xF4, 0x3F, 0x92, 0xFF}}},
	{{{14, 49, -7},0, {41, 100},{0x0, 0x44, 0x95, 0xFF}}},
	{{{-13, 47, -17},0, {41, 100},{0xFD, 0x57, 0xA3, 0xFF}}},
	{{{-16, 49, -7},0, {41, 100},{0x0, 0x45, 0x95, 0xFF}}},
	{{{-38, 35, -17},0, {41, 100},{0x8, 0x45, 0x95, 0xFF}}},
	{{{-30, 36, -24},0, {41, 100},{0xEC, 0x52, 0xA1, 0xFF}}},
	{{{-39, 14, -31},0, {41, 100},{0xF, 0x50, 0x9E, 0xFF}}},
	{{{-17, -2, -42},0, {41, 100},{0x5, 0x5D, 0xAA, 0xFF}}},
	{{{16, -3, -42},0, {41, 100},{0xF9, 0x62, 0xAF, 0xFF}}},
	{{{39, 13, -31},0, {41, 100},{0xE7, 0x54, 0xA4, 0xFF}}},
};

Gfx power_flowers_head_mesh_layer_1_tri_1[] = {
	gsSPVertex(power_flowers_head_mesh_layer_1_vtx_1 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(3, 1, 4, 0, 4, 5, 3, 0),
	gsSP2Triangles(6, 5, 4, 0, 7, 6, 4, 0),
	gsSP2Triangles(8, 6, 7, 0, 8, 9, 6, 0),
	gsSP2Triangles(9, 8, 10, 0, 10, 8, 11, 0),
	gsSP2Triangles(12, 10, 11, 0, 13, 12, 11, 0),
	gsSP2Triangles(13, 14, 12, 0, 12, 14, 15, 0),
	gsSP2Triangles(14, 0, 15, 0, 0, 2, 15, 0),
	gsSP2Triangles(2, 16, 15, 0, 2, 17, 16, 0),
	gsSP2Triangles(3, 17, 2, 0, 17, 3, 18, 0),
	gsSP2Triangles(3, 19, 18, 0, 5, 19, 3, 0),
	gsSP2Triangles(5, 20, 19, 0, 6, 20, 5, 0),
	gsSP2Triangles(6, 21, 20, 0, 9, 21, 6, 0),
	gsSP2Triangles(21, 9, 22, 0, 22, 9, 10, 0),
	gsSP2Triangles(10, 12, 22, 0, 22, 12, 23, 0),
	gsSP2Triangles(12, 15, 23, 0, 23, 15, 16, 0),
	gsSP2Triangles(24, 25, 26, 0, 26, 25, 27, 0),
	gsSP2Triangles(27, 25, 28, 0, 28, 25, 29, 0),
	gsSP2Triangles(28, 29, 30, 0, 30, 29, 31, 0),
	gsSPVertex(power_flowers_head_mesh_layer_1_vtx_1 + 32, 22, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(2, 3, 4, 0, 4, 3, 5, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
	gsSP2Triangles(8, 10, 9, 0, 9, 10, 11, 0),
	gsSP2Triangles(9, 11, 12, 0, 12, 11, 13, 0),
	gsSP2Triangles(11, 14, 13, 0, 13, 14, 15, 0),
	gsSP2Triangles(15, 14, 16, 0, 16, 14, 17, 0),
	gsSP2Triangles(16, 17, 18, 0, 18, 17, 0, 0),
	gsSP2Triangles(18, 0, 19, 0, 19, 0, 2, 0),
	gsSP2Triangles(19, 2, 20, 0, 20, 2, 4, 0),
	gsSP2Triangles(20, 4, 7, 0, 20, 7, 21, 0),
	gsSP2Triangles(21, 7, 9, 0, 12, 21, 9, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_head_mesh_layer_1_vtx_2[58] = {
	{{{-44, 22, 7},0, {41, 100},{0xBD, 0xE1, 0x67, 0xFF}}},
	{{{-39, 18, 6},0, {41, 100},{0xE1, 0xC2, 0x6B, 0xFF}}},
	{{{-15, 33, 18},0, {41, 100},{0xF4, 0xD7, 0x78, 0xFF}}},
	{{{-39, -3, -10},0, {41, 100},{0xE2, 0xA9, 0x58, 0xFF}}},
	{{{-44, -3, -10},0, {41, 100},{0xBD, 0xA9, 0x3F, 0xFF}}},
	{{{-53, 31, -1},0, {41, 100},{0x92, 0x14, 0x3D, 0xFF}}},
	{{{-22, 51, 14},0, {41, 100},{0xD8, 0x4C, 0x5D, 0xFF}}},
	{{{-18, 39, 19},0, {41, 100},{0xE8, 0x6, 0x7D, 0xFF}}},
	{{{20, 38, 19},0, {41, 100},{0x1C, 0x8, 0x7C, 0xFF}}},
	{{{18, 33, 17},0, {41, 100},{0xE, 0xD8, 0x78, 0xFF}}},
	{{{43, 17, 6},0, {41, 100},{0x20, 0xC3, 0x6B, 0xFF}}},
	{{{47, 21, 7},0, {41, 100},{0x48, 0xE5, 0x65, 0xFF}}},
	{{{43, -4, -10},0, {41, 100},{0x1F, 0xA9, 0x58, 0xFF}}},
	{{{47, -4, -11},0, {41, 100},{0x48, 0xAA, 0x3C, 0xFF}}},
	{{{19, -20, -21},0, {41, 100},{0xB, 0x99, 0x4A, 0xFF}}},
	{{{21, -21, -23},0, {41, 100},{0x1B, 0x88, 0x20, 0xFF}}},
	{{{-17, -21, -23},0, {41, 100},{0xE5, 0x89, 0x23, 0xFF}}},
	{{{-15, -19, -21},0, {41, 100},{0xF4, 0x99, 0x49, 0xFF}}},
	{{{-53, 2, -21},0, {41, 100},{0x92, 0xC0, 0x0, 0xFF}}},
	{{{-21, -19, -36},0, {41, 100},{0xD6, 0x90, 0xD6, 0xFF}}},
	{{{-53, 10, -32},0, {41, 100},{0x94, 0xF1, 0xBE, 0xFF}}},
	{{{-53, 38, -12},0, {41, 100},{0x94, 0x43, 0xF9, 0xFF}}},
	{{{-23, 58, 2},0, {41, 100},{0xD9, 0x75, 0x1D, 0xFF}}},
	{{{22, 50, 14},0, {41, 100},{0x2B, 0x50, 0x59, 0xFF}}},
	{{{54, 29, -1},0, {41, 100},{0x71, 0x1D, 0x33, 0xFF}}},
	{{{54, 0, -22},0, {41, 100},{0x71, 0xC7, 0xF6, 0xFF}}},
	{{{23, -20, -36},0, {41, 100},{0x29, 0x91, 0xD1, 0xFF}}},
	{{{-22, -10, -47},0, {41, 100},{0xD7, 0xBF, 0x9B, 0xFF}}},
	{{{21, -11, -47},0, {41, 100},{0x25, 0xC3, 0x97, 0xFF}}},
	{{{-20, -2, -49},0, {41, 100},{0xFC, 0x38, 0x8E, 0xFF}}},
	{{{-47, 16, -36},0, {41, 100},{0xE3, 0x37, 0x91, 0xFF}}},
	{{{-47, 40, -19},0, {41, 100},{0xDD, 0x56, 0xA9, 0xFF}}},
	{{{-53, 38, -12},0, {41, 100},{0x94, 0x43, 0xF9, 0xFF}}},
	{{{-20, 57, -6},0, {41, 100},{0xF6, 0x64, 0xB2, 0xFF}}},
	{{{-47, 40, -19},0, {41, 100},{0xDD, 0x56, 0xA9, 0xFF}}},
	{{{-23, 58, 2},0, {41, 100},{0xD9, 0x75, 0x1D, 0xFF}}},
	{{{21, 57, 2},0, {41, 100},{0x28, 0x76, 0x18, 0xFF}}},
	{{{22, 50, 14},0, {41, 100},{0x2B, 0x50, 0x59, 0xFF}}},
	{{{54, 29, -1},0, {41, 100},{0x71, 0x1D, 0x33, 0xFF}}},
	{{{52, 37, -12},0, {41, 100},{0x67, 0x49, 0xF0, 0xFF}}},
	{{{54, 0, -22},0, {41, 100},{0x71, 0xC7, 0xF6, 0xFF}}},
	{{{52, 9, -33},0, {41, 100},{0x67, 0xFA, 0xB5, 0xFF}}},
	{{{23, -20, -36},0, {41, 100},{0x29, 0x91, 0xD1, 0xFF}}},
	{{{21, -11, -47},0, {41, 100},{0x25, 0xC3, 0x97, 0xFF}}},
	{{{45, 15, -37},0, {41, 100},{0x13, 0x3D, 0x92, 0xFF}}},
	{{{18, -2, -49},0, {41, 100},{0x1, 0x3D, 0x90, 0xFF}}},
	{{{-20, -2, -49},0, {41, 100},{0xFC, 0x38, 0x8E, 0xFF}}},
	{{{16, -3, -42},0, {41, 100},{0xF9, 0x62, 0xAF, 0xFF}}},
	{{{-17, -2, -42},0, {41, 100},{0x5, 0x5D, 0xAA, 0xFF}}},
	{{{-47, 16, -36},0, {41, 100},{0xE3, 0x37, 0x91, 0xFF}}},
	{{{-39, 14, -31},0, {41, 100},{0xF, 0x50, 0x9E, 0xFF}}},
	{{{-38, 35, -17},0, {41, 100},{0x8, 0x45, 0x95, 0xFF}}},
	{{{-16, 49, -7},0, {41, 100},{0x0, 0x45, 0x95, 0xFF}}},
	{{{17, 57, -7},0, {41, 100},{0x9, 0x62, 0xB0, 0xFF}}},
	{{{44, 39, -19},0, {41, 100},{0x1A, 0x54, 0xA4, 0xFF}}},
	{{{39, 13, -31},0, {41, 100},{0xE7, 0x54, 0xA4, 0xFF}}},
	{{{37, 34, -17},0, {41, 100},{0xF4, 0x3F, 0x92, 0xFF}}},
	{{{14, 49, -7},0, {41, 100},{0x0, 0x44, 0x95, 0xFF}}},
};

Gfx power_flowers_head_mesh_layer_1_tri_2[] = {
	gsSPVertex(power_flowers_head_mesh_layer_1_vtx_2 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 3, 0, 0, 5, 4, 0, 0),
	gsSP2Triangles(0, 6, 5, 0, 7, 6, 0, 0),
	gsSP2Triangles(2, 7, 0, 0, 8, 7, 2, 0),
	gsSP2Triangles(9, 8, 2, 0, 10, 8, 9, 0),
	gsSP2Triangles(8, 10, 11, 0, 10, 12, 11, 0),
	gsSP2Triangles(12, 13, 11, 0, 12, 14, 13, 0),
	gsSP2Triangles(14, 15, 13, 0, 15, 14, 16, 0),
	gsSP2Triangles(14, 17, 16, 0, 16, 17, 4, 0),
	gsSP2Triangles(17, 3, 4, 0, 18, 16, 4, 0),
	gsSP2Triangles(19, 16, 18, 0, 20, 19, 18, 0),
	gsSP2Triangles(20, 18, 21, 0, 21, 18, 5, 0),
	gsSP2Triangles(18, 4, 5, 0, 5, 22, 21, 0),
	gsSP2Triangles(6, 22, 5, 0, 23, 22, 6, 0),
	gsSP2Triangles(23, 6, 8, 0, 8, 6, 7, 0),
	gsSP2Triangles(11, 23, 8, 0, 24, 23, 11, 0),
	gsSP2Triangles(11, 13, 24, 0, 13, 25, 24, 0),
	gsSP2Triangles(13, 15, 25, 0, 25, 15, 26, 0),
	gsSP2Triangles(26, 15, 19, 0, 19, 15, 16, 0),
	gsSP2Triangles(27, 26, 19, 0, 28, 26, 27, 0),
	gsSP2Triangles(29, 28, 27, 0, 29, 27, 30, 0),
	gsSP2Triangles(30, 27, 20, 0, 27, 19, 20, 0),
	gsSP2Triangles(30, 20, 31, 0, 31, 20, 21, 0),
	gsSPVertex(power_flowers_head_mesh_layer_1_vtx_2 + 32, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 1, 3, 0, 4, 3, 5, 0),
	gsSP2Triangles(6, 4, 5, 0, 7, 4, 6, 0),
	gsSP2Triangles(6, 8, 7, 0, 7, 8, 9, 0),
	gsSP2Triangles(8, 10, 9, 0, 9, 10, 11, 0),
	gsSP2Triangles(9, 11, 12, 0, 12, 11, 13, 0),
	gsSP2Triangles(13, 11, 14, 0, 15, 13, 14, 0),
	gsSP2Triangles(15, 14, 16, 0, 16, 14, 17, 0),
	gsSP2Triangles(16, 17, 18, 0, 18, 17, 19, 0),
	gsSP2Triangles(19, 17, 2, 0, 2, 20, 19, 0),
	gsSP2Triangles(1, 20, 2, 0, 21, 20, 1, 0),
	gsSP2Triangles(21, 1, 4, 0, 7, 21, 4, 0),
	gsSP2Triangles(22, 21, 7, 0, 22, 7, 9, 0),
	gsSP2Triangles(22, 9, 12, 0, 22, 12, 23, 0),
	gsSP2Triangles(23, 12, 15, 0, 12, 13, 15, 0),
	gsSP2Triangles(24, 22, 23, 0, 24, 25, 22, 0),
	gsSP2Triangles(22, 25, 21, 0, 25, 20, 21, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_head_mesh_layer_1_vtx_3[21] = {
	{{{-9, 37, -21},0, {-628, 1043},{0xEE, 0x6C, 0xBF, 0xFF}}},
	{{{6, 38, -21},0, {463, 1088},{0xC, 0x71, 0xC7, 0xFF}}},
	{{{-1, 27, -30},0, {-28, 569},{0x0, 0x4A, 0x99, 0xFF}}},
	{{{8, 15, -37},0, {608, -15},{0x12, 0x1C, 0x85, 0xFF}}},
	{{{-7, 14, -37},0, {-483, -59},{0xF5, 0xE, 0x82, 0xFF}}},
	{{{8, 38, -16},0, {548, 1037},{0xFB, 0x3C, 0x90, 0xFF}}},
	{{{-9, 37, -21},0, {-553, 972},{0xEE, 0x6C, 0xBF, 0xFF}}},
	{{{-10, 39, -16},0, {-584, 1048},{0x5, 0x3A, 0x8F, 0xFF}}},
	{{{6, 38, -21},0, {390, 1010},{0xC, 0x71, 0xC7, 0xFF}}},
	{{{17, 31, -25},0, {1074, 734},{0x28, 0x5A, 0xB0, 0xFF}}},
	{{{22, 30, -22},0, {1379, 700},{0xEB, 0x3E, 0x93, 0xFF}}},
	{{{22, 18, -31},0, {1382, 189},{0xEF, 0x52, 0xA0, 0xFF}}},
	{{{18, 22, -32},0, {1173, 341},{0x35, 0x35, 0x99, 0xFF}}},
	{{{8, 15, -37},0, {515, 57},{0x12, 0x1C, 0x85, 0xFF}}},
	{{{9, 10, -37},0, {573, -163},{0xFB, 0x59, 0xA5, 0xFF}}},
	{{{-10, 10, -36},0, {-572, -153},{0x3, 0x54, 0xA1, 0xFF}}},
	{{{-7, 14, -37},0, {-428, 19},{0xF5, 0xE, 0x82, 0xFF}}},
	{{{-18, 21, -33},0, {-1112, 295},{0xD6, 0x2B, 0x90, 0xFF}}},
	{{{-23, 19, -31},0, {-1405, 218},{0x10, 0x55, 0xA3, 0xFF}}},
	{{{-23, 31, -22},0, {-1394, 712},{0xF, 0x43, 0x95, 0xFF}}},
	{{{-20, 30, -26},0, {-1210, 688},{0xC5, 0x4D, 0xAD, 0xFF}}},
};

Gfx power_flowers_head_mesh_layer_1_tri_3[] = {
	gsSPVertex(power_flowers_head_mesh_layer_1_vtx_3 + 0, 21, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
	gsSP2Triangles(5, 6, 7, 0, 8, 6, 5, 0),
	gsSP2Triangles(9, 8, 5, 0, 10, 9, 5, 0),
	gsSP2Triangles(11, 9, 10, 0, 11, 12, 9, 0),
	gsSP2Triangles(11, 13, 12, 0, 11, 14, 13, 0),
	gsSP2Triangles(14, 15, 13, 0, 13, 15, 16, 0),
	gsSP2Triangles(16, 15, 17, 0, 15, 18, 17, 0),
	gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
	gsSP2Triangles(20, 19, 6, 0, 6, 19, 7, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_head_mesh_layer_1_vtx_4[10] = {
	{{{-1, 27, -30},0, {-232, 569},{0x0, 0x4A, 0x99, 0xFF}}},
	{{{6, 38, -21},0, {258, 1088},{0xC, 0x71, 0xC7, 0xFF}}},
	{{{17, 31, -25},0, {1049, 769},{0x28, 0x5A, 0xB0, 0xFF}}},
	{{{18, 22, -32},0, {1163, 313},{0x35, 0x35, 0x99, 0xFF}}},
	{{{8, 15, -37},0, {403, -15},{0x12, 0x1C, 0x85, 0xFF}}},
	{{{-9, 37, -21},0, {601, 1043},{0xEE, 0x6C, 0xBF, 0xFF}}},
	{{{-1, 27, -30},0, {1201, 569},{0x0, 0x4A, 0x99, 0xFF}}},
	{{{-20, 30, -26},0, {-160, 716},{0xC5, 0x4D, 0xAD, 0xFF}}},
	{{{-18, 21, -33},0, {-46, 260},{0xD6, 0x2B, 0x90, 0xFF}}},
	{{{-7, 14, -37},0, {746, -59},{0xF5, 0xE, 0x82, 0xFF}}},
};

Gfx power_flowers_head_mesh_layer_1_tri_4[] = {
	gsSPVertex(power_flowers_head_mesh_layer_1_vtx_4 + 0, 10, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(3, 4, 0, 0, 5, 6, 7, 0),
	gsSP2Triangles(6, 8, 7, 0, 9, 8, 6, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_asm_switch_root_mesh_layer_1_vtx_0[31] = {
	{{{-10, 24, 1},0, {458, 1175},{0xBD, 0x66, 0xDD, 0xFF}}},
	{{{-14, 25, 17},0, {835, 1240},{0x12, 0x28, 0x77, 0xFF}}},
	{{{-5, 25, 9},0, {639, 1090},{0xEC, 0x57, 0x5B, 0xFF}}},
	{{{-16, 24, -1},0, {460, 1270},{0x3F, 0x68, 0xDA, 0xFF}}},
	{{{-14, 13, -16},0, {122, 1240},{0x8, 0xD3, 0x89, 0xFF}}},
	{{{-5, 19, -8},0, {263, 1092},{0xF8, 0x31, 0x8B, 0xFF}}},
	{{{0, 9, -10},0, {195, 1011},{0x0, 0xB6, 0x99, 0xFF}}},
	{{{0, 17, -8},0, {258, 1011},{0x0, 0xC, 0x82, 0xFF}}},
	{{{5, 19, -8},0, {263, 921},{0x3, 0x31, 0x8B, 0xFF}}},
	{{{14, 13, -16},0, {122, 784},{0xEB, 0xD2, 0x8C, 0xFF}}},
	{{{16, 24, -1},0, {460, 754},{0xC7, 0x6B, 0xDB, 0xFF}}},
	{{{10, 24, 1},0, {458, 838},{0x41, 0x6A, 0xE5, 0xFF}}},
	{{{14, 25, 17},0, {835, 784},{0xFC, 0x28, 0x79, 0xFF}}},
	{{{5, 25, 9},0, {639, 922},{0x14, 0x57, 0x5B, 0xFF}}},
	{{{0, 18, 15},0, {716, 1011},{0x0, 0xFC, 0x7F, 0xFF}}},
	{{{-14, 5, 6},0, {524, 1240},{0xCE, 0x92, 0x26, 0xFF}}},
	{{{0, 1, 7},0, {496, 1011},{0x0, 0x88, 0x2B, 0xFF}}},
	{{{14, 5, 6},0, {524, 784},{0x33, 0x93, 0x29, 0xFF}}},
	{{{5, 19, -8},0, {302, 921},{0x3, 0x31, 0x8B, 0xFF}}},
	{{{10, 37, 0},0, {486, 847},{0x7F, 0x6, 0xFF, 0xFF}}},
	{{{10, 24, 1},0, {458, 838},{0x41, 0x6A, 0xE5, 0xFF}}},
	{{{5, 36, -9},0, {349, 927},{0x3F, 0x3, 0x92, 0xFF}}},
	{{{0, 17, -8},0, {297, 1011},{0x0, 0xC, 0x82, 0xFF}}},
	{{{-5, 36, -9},0, {349, 1086},{0xC1, 0x3, 0x92, 0xFF}}},
	{{{-5, 19, -8},0, {301, 1092},{0xF8, 0x31, 0x8B, 0xFF}}},
	{{{-10, 24, 1},0, {458, 1175},{0xBD, 0x66, 0xDD, 0xFF}}},
	{{{-9, 37, 0},0, {486, 1166},{0x81, 0x6, 0xFF, 0xFF}}},
	{{{-5, 25, 9},0, {604, 1090},{0xEC, 0x57, 0x5B, 0xFF}}},
	{{{-5, 37, 8},0, {622, 1086},{0xC0, 0x8, 0x6D, 0xFF}}},
	{{{5, 25, 9},0, {604, 922},{0x14, 0x57, 0x5B, 0xFF}}},
	{{{5, 37, 8},0, {622, 927},{0x40, 0x9, 0x6D, 0xFF}}},
};

Gfx power_flowers_asm_switch_root_mesh_layer_1_tri_0[] = {
	gsSPVertex(power_flowers_asm_switch_root_mesh_layer_1_vtx_0 + 0, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(3, 0, 4, 0, 4, 0, 5, 0),
	gsSP2Triangles(5, 6, 4, 0, 7, 6, 5, 0),
	gsSP2Triangles(8, 6, 7, 0, 8, 9, 6, 0),
	gsSP2Triangles(9, 8, 10, 0, 10, 8, 11, 0),
	gsSP2Triangles(11, 12, 10, 0, 13, 12, 11, 0),
	gsSP2Triangles(13, 14, 12, 0, 2, 14, 13, 0),
	gsSP2Triangles(2, 1, 14, 0, 14, 1, 15, 0),
	gsSP2Triangles(15, 16, 14, 0, 6, 16, 15, 0),
	gsSP2Triangles(4, 6, 15, 0, 6, 17, 16, 0),
	gsSP2Triangles(9, 17, 6, 0, 16, 17, 14, 0),
	gsSP2Triangles(14, 17, 12, 0, 18, 19, 20, 0),
	gsSP2Triangles(21, 19, 18, 0, 22, 21, 18, 0),
	gsSP2Triangles(21, 22, 23, 0, 23, 22, 24, 0),
	gsSP2Triangles(25, 23, 24, 0, 26, 23, 25, 0),
	gsSP2Triangles(27, 26, 25, 0, 28, 26, 27, 0),
	gsSP2Triangles(29, 28, 27, 0, 29, 30, 28, 0),
	gsSP2Triangles(20, 30, 29, 0, 20, 19, 30, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_asm_switch_left_leaf_skinned_mesh_layer_1_vtx_0[4] = {
	{{{-16, 24, -1},0, {460, 1270},{0x3F, 0x68, 0xDA, 0xFF}}},
	{{{-14, 25, 17},0, {835, 1240},{0x12, 0x28, 0x77, 0xFF}}},
	{{{-14, 5, 6},0, {524, 1240},{0xCE, 0x92, 0x26, 0xFF}}},
	{{{-14, 13, -16},0, {122, 1240},{0x8, 0xD3, 0x89, 0xFF}}},
};

Gfx power_flowers_asm_switch_left_leaf_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(power_flowers_asm_switch_left_leaf_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_asm_switch_left_leaf_mesh_layer_1_vtx_0[4] = {
	{{{11, 42, 30},0, {922, 1702},{0x32, 0x21, 0x70, 0xFF}}},
	{{{5, 38, 1},0, {465, 1702},{0x7C, 0x1A, 0xF5, 0xFF}}},
	{{{7, 39, -27},0, {44, 1702},{0x2B, 0x1A, 0x8B, 0xFF}}},
	{{{-7, 29, 3},0, {500, 1702},{0x81, 0x1, 0x4, 0xFF}}},
};

Gfx power_flowers_asm_switch_left_leaf_mesh_layer_1_tri_0[] = {
	gsSPVertex(power_flowers_asm_switch_left_leaf_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(1, 0, 4, 0, 4, 0, 5, 0),
	gsSP2Triangles(5, 0, 6, 0, 6, 0, 3, 0),
	gsSP2Triangles(6, 3, 7, 0, 3, 2, 7, 0),
	gsSP2Triangles(7, 2, 4, 0, 2, 1, 4, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_asm_switch_left_leaf_mesh_layer_1_vtx_1[11] = {
	{{{-1, 49, -25},0, {76, 1907},{0xF6, 0x32, 0x8C, 0xFF}}},
	{{{5, 38, 1},0, {465, 1702},{0x7C, 0x1A, 0xF5, 0xFF}}},
	{{{7, 39, -27},0, {44, 1702},{0x2B, 0x1A, 0x8B, 0xFF}}},
	{{{0, 50, 0},0, {458, 1907},{0x54, 0x5D, 0xED, 0xFF}}},
	{{{-10, 53, -12},0, {269, 2052},{0xA8, 0x47, 0xC6, 0xFF}}},
	{{{-8, 44, 2},0, {483, 1907},{0x88, 0xD9, 0xC, 0xFF}}},
	{{{-7, 29, 3},0, {500, 1702},{0x81, 0x1, 0x4, 0xFF}}},
	{{{11, 42, 30},0, {922, 1702},{0x32, 0x21, 0x70, 0xFF}}},
	{{{5, 53, 24},0, {829, 1907},{0x13, 0x5B, 0x56, 0xFF}}},
	{{{-7, 55, 14},0, {669, 2052},{0xB7, 0x52, 0x40, 0xFF}}},
	{{{-12, 53, 1},0, {477, 2070},{0x98, 0x49, 0x6, 0xFF}}},
};

Gfx power_flowers_asm_switch_left_leaf_mesh_layer_1_tri_1[] = {
	gsSPVertex(power_flowers_asm_switch_left_leaf_mesh_layer_1_vtx_1 + 0, 11, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 3, 0, 0, 0, 5, 4, 0),
	gsSP2Triangles(0, 2, 5, 0, 2, 6, 5, 0),
	gsSP2Triangles(5, 6, 7, 0, 8, 5, 7, 0),
	gsSP2Triangles(7, 1, 8, 0, 8, 1, 3, 0),
	gsSP2Triangles(8, 3, 9, 0, 9, 3, 10, 0),
	gsSP2Triangles(3, 4, 10, 0, 4, 5, 10, 0),
	gsSP2Triangles(9, 10, 5, 0, 5, 8, 9, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_asm_switch_right_leaf_skinned_mesh_layer_1_vtx_0[4] = {
	{{{16, 24, -1},0, {460, 754},{0xC7, 0x6B, 0xDB, 0xFF}}},
	{{{14, 25, 17},0, {835, 784},{0xFC, 0x28, 0x79, 0xFF}}},
	{{{14, 13, -16},0, {122, 784},{0xEB, 0xD2, 0x8C, 0xFF}}},
	{{{14, 5, 6},0, {524, 784},{0x33, 0x93, 0x29, 0xFF}}},
};

Gfx power_flowers_asm_switch_right_leaf_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(power_flowers_asm_switch_right_leaf_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_asm_switch_right_leaf_mesh_layer_1_vtx_0[4] = {
	{{{-11, 42, 30},0, {922, 331},{0xCF, 0x1C, 0x71, 0xFF}}},
	{{{7, 30, 3},0, {500, 331},{0x7E, 0x0, 0x12, 0xFF}}},
	{{{-3, 37, -30},0, {-2, 331},{0xEC, 0xC, 0x83, 0xFF}}},
	{{{-6, 38, 1},0, {465, 331},{0x84, 0x17, 0xEF, 0xFF}}},
};

Gfx power_flowers_asm_switch_right_leaf_mesh_layer_1_tri_0[] = {
	gsSPVertex(power_flowers_asm_switch_right_leaf_mesh_layer_1_vtx_0 + 0, 4, 4),
	gsSP2Triangles(1, 4, 0, 0, 4, 1, 5, 0),
	gsSP2Triangles(1, 3, 5, 0, 5, 3, 6, 0),
	gsSP2Triangles(3, 2, 6, 0, 6, 2, 0, 0),
	gsSP2Triangles(6, 0, 7, 0, 0, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_asm_switch_right_leaf_mesh_layer_1_vtx_1[11] = {
	{{{-11, 42, 30},0, {922, 331},{0xCF, 0x1C, 0x71, 0xFF}}},
	{{{-6, 53, 24},0, {829, 133},{0xEE, 0x5C, 0x55, 0xFF}}},
	{{{-6, 38, 1},0, {465, 331},{0x84, 0x17, 0xEF, 0xFF}}},
	{{{8, 44, 2},0, {483, 133},{0x79, 0xDE, 0x12, 0xFF}}},
	{{{7, 30, 3},0, {500, 331},{0x7E, 0x0, 0x12, 0xFF}}},
	{{{-3, 37, -30},0, {-2, 331},{0xEC, 0xC, 0x83, 0xFF}}},
	{{{0, 49, -25},0, {76, 133},{0x5, 0x4B, 0x9A, 0xFF}}},
	{{{-1, 50, 0},0, {458, 133},{0xAD, 0x5E, 0xED, 0xFF}}},
	{{{6, 55, 14},0, {669, -7},{0x4A, 0x51, 0x40, 0xFF}}},
	{{{11, 53, 1},0, {477, -24},{0x68, 0x48, 0x6, 0xFF}}},
	{{{10, 53, -12},0, {269, -7},{0x5A, 0x45, 0xC7, 0xFF}}},
};

Gfx power_flowers_asm_switch_right_leaf_mesh_layer_1_tri_1[] = {
	gsSPVertex(power_flowers_asm_switch_right_leaf_mesh_layer_1_vtx_1 + 0, 11, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(0, 4, 3, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 5, 6, 0, 5, 2, 6, 0),
	gsSP2Triangles(6, 2, 7, 0, 2, 1, 7, 0),
	gsSP2Triangles(1, 8, 7, 0, 1, 3, 8, 0),
	gsSP2Triangles(9, 8, 3, 0, 9, 3, 10, 0),
	gsSP2Triangles(6, 10, 3, 0, 6, 7, 10, 0),
	gsSP2Triangles(10, 7, 9, 0, 7, 8, 9, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_asm_switch_stem_skinned_mesh_layer_1_vtx_0[6] = {
	{{{5, 36, -9},0, {349, 927},{0x3F, 0x3, 0x92, 0xFF}}},
	{{{5, 37, 8},0, {622, 927},{0x40, 0x9, 0x6D, 0xFF}}},
	{{{10, 37, 0},0, {486, 847},{0x7F, 0x6, 0xFF, 0xFF}}},
	{{{-5, 36, -9},0, {349, 1086},{0xC1, 0x3, 0x92, 0xFF}}},
	{{{-9, 37, 0},0, {486, 1166},{0x81, 0x6, 0xFF, 0xFF}}},
	{{{-5, 37, 8},0, {622, 1086},{0xC0, 0x8, 0x6D, 0xFF}}},
};

Gfx power_flowers_asm_switch_stem_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(power_flowers_asm_switch_stem_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_asm_switch_stem_mesh_layer_1_vtx_0[6] = {
	{{{9, 0, 0},0, {573, 866},{0x7E, 0xC, 0x2, 0xFF}}},
	{{{4, 0, -7},0, {453, 937},{0x40, 0x15, 0x94, 0xFF}}},
	{{{-4, 0, -7},0, {453, 1076},{0xC0, 0x15, 0x94, 0xFF}}},
	{{{-8, 0, 0},0, {573, 1146},{0x82, 0xB, 0x2, 0xFF}}},
	{{{-4, 0, 8},0, {694, 1076},{0xC2, 0x6, 0x6F, 0xFF}}},
	{{{4, 0, 8},0, {694, 937},{0x3E, 0x6, 0x6F, 0xFF}}},
};

Gfx power_flowers_asm_switch_stem_mesh_layer_1_tri_0[] = {
	gsSPVertex(power_flowers_asm_switch_stem_mesh_layer_1_vtx_0 + 0, 6, 6),
	gsSP2Triangles(2, 6, 1, 0, 6, 2, 0, 0),
	gsSP2Triangles(0, 7, 6, 0, 8, 7, 0, 0),
	gsSP2Triangles(3, 8, 0, 0, 9, 8, 3, 0),
	gsSP2Triangles(4, 9, 3, 0, 9, 4, 10, 0),
	gsSP2Triangles(10, 4, 5, 0, 5, 11, 10, 0),
	gsSP2Triangles(1, 11, 5, 0, 1, 6, 11, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_asm_switch_stem_mesh_layer_1_vtx_1[13] = {
	{{{-4, 0, -7},0, {453, 1076},{0xC0, 0x15, 0x94, 0xFF}}},
	{{{-8, 0, 0},0, {573, 1146},{0x82, 0xB, 0x2, 0xFF}}},
	{{{-3, 7, -6},0, {480, 1067},{0xB1, 0xBF, 0xB5, 0xFF}}},
	{{{-7, 11, 0},0, {586, 1122},{0x8C, 0xE2, 0x29, 0xFF}}},
	{{{-3, 14, 6},0, {684, 1062},{0xCE, 0xF, 0x74, 0xFF}}},
	{{{-4, 0, 8},0, {694, 1076},{0xC2, 0x6, 0x6F, 0xFF}}},
	{{{4, 14, 6},0, {684, 951},{0x33, 0x10, 0x73, 0xFF}}},
	{{{4, 0, 8},0, {694, 937},{0x3E, 0x6, 0x6F, 0xFF}}},
	{{{7, 11, 0},0, {586, 891},{0x77, 0xE3, 0x21, 0xFF}}},
	{{{9, 0, 0},0, {573, 866},{0x7E, 0xC, 0x2, 0xFF}}},
	{{{4, 7, -6},0, {480, 946},{0x59, 0xF7, 0xA6, 0xFF}}},
	{{{4, 0, -7},0, {453, 937},{0x40, 0x15, 0x94, 0xFF}}},
	{{{0, 6, -6},0, {479, 1006},{0x0, 0xBF, 0x93, 0xFF}}},
};

Gfx power_flowers_asm_switch_stem_mesh_layer_1_tri_1[] = {
	gsSPVertex(power_flowers_asm_switch_stem_mesh_layer_1_vtx_1 + 0, 13, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(3, 1, 4, 0, 4, 1, 5, 0),
	gsSP2Triangles(5, 6, 4, 0, 7, 6, 5, 0),
	gsSP2Triangles(7, 8, 6, 0, 9, 8, 7, 0),
	gsSP2Triangles(9, 10, 8, 0, 11, 10, 9, 0),
	gsSP2Triangles(11, 12, 10, 0, 0, 12, 11, 0),
	gsSP1Triangle(12, 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_asm_switch_head_skinned_mesh_layer_1_vtx_0[7] = {
	{{{-3, 7, -6},0, {480, 1067},{0xB1, 0xBF, 0xB5, 0xFF}}},
	{{{0, 6, -6},0, {479, 1006},{0x0, 0xBF, 0x93, 0xFF}}},
	{{{4, 7, -6},0, {480, 946},{0x59, 0xF7, 0xA6, 0xFF}}},
	{{{7, 11, 0},0, {586, 891},{0x77, 0xE3, 0x21, 0xFF}}},
	{{{4, 14, 6},0, {684, 951},{0x33, 0x10, 0x73, 0xFF}}},
	{{{-7, 11, 0},0, {586, 1122},{0x8C, 0xE2, 0x29, 0xFF}}},
	{{{-3, 14, 6},0, {684, 1062},{0xCE, 0xF, 0x74, 0xFF}}},
};

Gfx power_flowers_asm_switch_head_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(power_flowers_asm_switch_head_skinned_mesh_layer_1_vtx_0 + 0, 7, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_asm_switch_head_mesh_layer_1_vtx_0[16] = {
	{{{11, 12, -1},0, {258, 986},{0x17, 0xEB, 0x7B, 0xFF}}},
	{{{16, 1, -6},0, {258, 987},{0x36, 0xCA, 0x66, 0xFF}}},
	{{{-17, 1, -6},0, {259, 982},{0xCD, 0xC9, 0x66, 0xFF}}},
	{{{-12, -8, -11},0, {259, 983},{0xCA, 0x9E, 0x3C, 0xFF}}},
	{{{0, 17, 0},0, {257, 984},{0x0, 0xD, 0x7E, 0xFF}}},
	{{{-12, 12, -1},0, {258, 983},{0xE9, 0xE9, 0x7B, 0xFF}}},
	{{{0, -12, -14},0, {259, 985},{0xF4, 0xA7, 0x5A, 0xFF}}},
	{{{-12, -8, -11},0, {259, 984},{0xCA, 0x9E, 0x3C, 0xFF}}},
	{{{0, -12, -14},0, {259, 985},{0xF4, 0xA7, 0x5A, 0xFF}}},
	{{{11, -8, -11},0, {259, 986},{0x32, 0x9C, 0x3C, 0xFF}}},
	{{{16, 1, -6},0, {258, 987},{0x36, 0xCA, 0x66, 0xFF}}},
	{{{11, -8, -11},0, {259, 987},{0x32, 0x9C, 0x3C, 0xFF}}},
	{{{11, 12, -1},0, {257, 985},{0x17, 0xEB, 0x7B, 0xFF}}},
	{{{0, 17, 0},0, {257, 985},{0x0, 0xD, 0x7E, 0xFF}}},
	{{{-17, 1, -6},0, {258, 982},{0xCD, 0xC9, 0x66, 0xFF}}},
	{{{-12, 12, -1},0, {258, 982},{0xE9, 0xE9, 0x7B, 0xFF}}},
};

Gfx power_flowers_asm_switch_head_mesh_layer_1_tri_0[] = {
	gsSPVertex(power_flowers_asm_switch_head_mesh_layer_1_vtx_0 + 0, 16, 7),
	gsSP2Triangles(7, 4, 8, 0, 5, 9, 10, 0),
	gsSP2Triangles(6, 11, 12, 0, 1, 0, 13, 0),
	gsSP2Triangles(13, 0, 14, 0, 0, 5, 14, 0),
	gsSP2Triangles(2, 1, 15, 0, 3, 2, 15, 0),
	gsSP2Triangles(16, 3, 15, 0, 17, 3, 18, 0),
	gsSP2Triangles(4, 3, 17, 0, 19, 20, 4, 0),
	gsSP2Triangles(4, 20, 6, 0, 6, 21, 5, 0),
	gsSP1Triangle(22, 21, 6, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_asm_switch_head_mesh_layer_1_vtx_1[109] = {
	{{{22, 4, -40},0, {285, 864},{0x25, 0xF, 0x87, 0xFF}}},
	{{{31, 28, -29},0, {455, 137},{0x12, 0x43, 0x95, 0xFF}}},
	{{{42, 17, -30},0, {820, 474},{0x3A, 0x10, 0x90, 0xFF}}},
	{{{0, 17, 0},0, {412, 882},{0x0, 0xD, 0x7E, 0xFF}}},
	{{{11, 12, -1},0, {412, 882},{0x17, 0xEB, 0x7B, 0xFF}}},
	{{{29, 28, 4},0, {412, 882},{0xF2, 0xF9, 0x7E, 0xFF}}},
	{{{16, 1, -6},0, {412, 882},{0x36, 0xCA, 0x66, 0xFF}}},
	{{{38, 17, 1},0, {412, 882},{0x14, 0xC7, 0x70, 0xFF}}},
	{{{22, -10, -16},0, {412, 882},{0x28, 0x9F, 0x48, 0xFF}}},
	{{{11, -8, -11},0, {412, 882},{0x32, 0x9C, 0x3C, 0xFF}}},
	{{{0, -12, -14},0, {412, 882},{0xF4, 0xA7, 0x5A, 0xFF}}},
	{{{0, -12, -14},0, {412, 882},{0xE5, 0x5A, 0x56, 0xFF}}},
	{{{-23, -10, -16},0, {412, 882},{0xD8, 0x9F, 0x48, 0xFF}}},
	{{{-12, -8, -11},0, {412, 882},{0xCA, 0x9E, 0x3C, 0xFF}}},
	{{{-17, 1, -6},0, {412, 882},{0xCD, 0xC9, 0x66, 0xFF}}},
	{{{-36, 15, 0},0, {412, 882},{0xEF, 0xC5, 0x6F, 0xFF}}},
	{{{-26, 26, 3},0, {412, 882},{0xC, 0xF9, 0x7E, 0xFF}}},
	{{{-12, 12, -1},0, {412, 882},{0xE9, 0xE9, 0x7B, 0xFF}}},
	{{{-42, 4, -11},0, {412, 882},{0xC7, 0xA7, 0x46, 0xFF}}},
	{{{43, 5, -10},0, {412, 882},{0x39, 0xA7, 0x46, 0xFF}}},
	{{{0, -20, -24},0, {412, 882},{0x0, 0x86, 0x23, 0xFF}}},
	{{{-57, 52, -4},0, {424, 994},{0x10, 0x6E, 0xC2, 0xFF}}},
	{{{-66, 57, 6},0, {424, 994},{0xFC, 0x6F, 0x3D, 0xFF}}},
	{{{-52, 54, 5},0, {424, 994},{0x28, 0x69, 0x3C, 0xFF}}},
	{{{-67, 54, -3},0, {424, 994},{0xE0, 0x63, 0xB7, 0xFF}}},
	{{{-61, 49, -9},0, {424, 994},{0xEA, 0x4E, 0x9E, 0xFF}}},
	{{{-66, 43, -10},0, {424, 994},{0xC1, 0x26, 0x98, 0xFF}}},
	{{{-76, 48, 1},0, {424, 994},{0x81, 0x6, 0xFF, 0xFF}}},
	{{{-72, 34, -7},0, {424, 994},{0x8D, 0xD2, 0xE2, 0xFF}}},
	{{{-66, 37, 2},0, {424, 994},{0xBE, 0xBA, 0x53, 0xFF}}},
	{{{-67, 48, 8},0, {424, 994},{0xDF, 0xF3, 0x7A, 0xFF}}},
	{{{-62, 40, 7},0, {424, 994},{0xEA, 0xD2, 0x74, 0xFF}}},
	{{{-57, 46, 7},0, {424, 994},{0x10, 0x2, 0x7E, 0xFF}}},
	{{{-67, 48, 8},0, {424, 994},{0xDF, 0xF3, 0x7A, 0xFF}}},
	{{{-62, 40, 7},0, {424, 994},{0xEA, 0xD2, 0x74, 0xFF}}},
	{{{-66, 57, 6},0, {424, 994},{0xFC, 0x6F, 0x3D, 0xFF}}},
	{{{-52, 54, 5},0, {424, 994},{0x28, 0x69, 0x3C, 0xFF}}},
	{{{-73, 54, 5},0, {424, 994},{0xA2, 0x48, 0x2F, 0xFF}}},
	{{{-76, 48, 1},0, {424, 994},{0x81, 0x6, 0xFF, 0xFF}}},
	{{{-67, 54, -3},0, {424, 994},{0xE0, 0x63, 0xB7, 0xFF}}},
	{{{-66, 57, 6},0, {424, 994},{0xFC, 0x6F, 0x3D, 0xFF}}},
	{{{29, 28, 4},0, {448, 960},{0xF2, 0xF9, 0x7E, 0xFF}}},
	{{{12, 40, -4},0, {448, 960},{0xE0, 0x6C, 0x3A, 0xFF}}},
	{{{-3, 38, -5},0, {448, 960},{0x9, 0x6E, 0x3F, 0xFF}}},
	{{{0, 17, 0},0, {448, 960},{0x0, 0xD, 0x7E, 0xFF}}},
	{{{-26, 26, 3},0, {448, 960},{0xC, 0xF9, 0x7E, 0xFF}}},
	{{{-28, 45, 0},0, {448, 960},{0x2D, 0x67, 0x3B, 0xFF}}},
	{{{-31, 41, -17},0, {448, 960},{0x9, 0x6B, 0xBC, 0xFF}}},
	{{{0, 32, -25},0, {448, 960},{0x0, 0x67, 0xB6, 0xFF}}},
	{{{12, 40, -4},0, {448, 960},{0xE0, 0x6C, 0x3A, 0xFF}}},
	{{{34, 42, -15},0, {448, 960},{0xF2, 0x6A, 0xBC, 0xFF}}},
	{{{-36, 43, -15},0, {448, 960},{0xC, 0x6B, 0xBD, 0xFF}}},
	{{{-36, 30, -27},0, {448, 960},{0xED, 0x42, 0x95, 0xFF}}},
	{{{-44, 36, -22},0, {448, 960},{0xEB, 0x46, 0x98, 0xFF}}},
	{{{-52, 27, -23},0, {448, 960},{0xC2, 0x18, 0x94, 0xFF}}},
	{{{-29, 7, -38},0, {448, 960},{0xD2, 0xC, 0x8A, 0xFF}}},
	{{{-58, 15, -18},0, {448, 960},{0x95, 0xC7, 0xDB, 0xFF}}},
	{{{-46, 2, -25},0, {448, 960},{0xA3, 0xB4, 0xD6, 0xFF}}},
	{{{-21, -5, -40},0, {448, 960},{0xD4, 0xDB, 0x8F, 0xFF}}},
	{{{-28, -11, -32},0, {448, 960},{0xBA, 0xA3, 0xCD, 0xFF}}},
	{{{-14, -17, -35},0, {448, 960},{0xDD, 0x95, 0xC5, 0xFF}}},
	{{{0, -10, -43},0, {448, 960},{0x0, 0xCC, 0x8C, 0xFF}}},
	{{{0, -18, -36},0, {448, 960},{0x0, 0x8F, 0xC5, 0xFF}}},
	{{{13, -17, -35},0, {448, 960},{0x23, 0x95, 0xC5, 0xFF}}},
	{{{20, -5, -40},0, {448, 960},{0x2D, 0xDA, 0x90, 0xFF}}},
	{{{13, -17, -35},0, {448, 960},{0x23, 0x95, 0xC5, 0xFF}}},
	{{{0, -10, -43},0, {448, 960},{0x0, 0xCC, 0x8C, 0xFF}}},
	{{{27, -11, -32},0, {448, 960},{0x46, 0xA3, 0xCD, 0xFF}}},
	{{{45, 2, -25},0, {448, 960},{0x5B, 0xB3, 0xD5, 0xFF}}},
	{{{42, 17, -30},0, {448, 960},{0x3A, 0x10, 0x90, 0xFF}}},
	{{{22, 4, -40},0, {448, 960},{0x25, 0xF, 0x87, 0xFF}}},
	{{{61, 18, -16},0, {448, 960},{0x6A, 0xC3, 0xDD, 0xFF}}},
	{{{43, 5, -10},0, {448, 960},{0x39, 0xA7, 0x46, 0xFF}}},
	{{{20, -15, -25},0, {448, 960},{0x2E, 0x8C, 0x16, 0xFF}}},
	{{{22, -10, -16},0, {448, 960},{0x28, 0x9F, 0x48, 0xFF}}},
	{{{0, -20, -24},0, {448, 960},{0x0, 0x86, 0x23, 0xFF}}},
	{{{0, -18, -36},0, {448, 960},{0x0, 0x8F, 0xC5, 0xFF}}},
	{{{-14, -17, -35},0, {448, 960},{0xDD, 0x95, 0xC5, 0xFF}}},
	{{{-21, -15, -25},0, {448, 960},{0xD2, 0x8C, 0x16, 0xFF}}},
	{{{-23, -10, -16},0, {448, 960},{0xD8, 0x9F, 0x48, 0xFF}}},
	{{{-42, 4, -11},0, {448, 960},{0xC7, 0xA7, 0x46, 0xFF}}},
	{{{-46, 2, -25},0, {448, 960},{0xA3, 0xB4, 0xD6, 0xFF}}},
	{{{-58, 15, -18},0, {448, 960},{0x95, 0xC7, 0xDB, 0xFF}}},
	{{{-52, 17, -6},0, {448, 960},{0xC0, 0xB0, 0x4B, 0xFF}}},
	{{{-36, 15, 0},0, {448, 960},{0xEF, 0xC5, 0x6F, 0xFF}}},
	{{{-45, 22, 2},0, {448, 960},{0xEB, 0xC9, 0x71, 0xFF}}},
	{{{-37, 32, 5},0, {448, 960},{0xE, 0xFC, 0x7E, 0xFF}}},
	{{{-26, 26, 3},0, {448, 960},{0xC, 0xF9, 0x7E, 0xFF}}},
	{{{-28, 45, 0},0, {448, 960},{0x2D, 0x67, 0x3B, 0xFF}}},
	{{{-28, -11, -32},0, {448, 960},{0xBA, 0xA3, 0xCD, 0xFF}}},
	{{{12, 40, -4},0, {445, 845},{0xE0, 0x6C, 0x3A, 0xFF}}},
	{{{59, 57, 6},0, {445, 845},{0xEC, 0x6E, 0x3D, 0xFF}}},
	{{{34, 42, -15},0, {445, 845},{0xF2, 0x6A, 0xBC, 0xFF}}},
	{{{29, 28, 4},0, {445, 845},{0xF2, 0xF9, 0x7E, 0xFF}}},
	{{{66, 47, 8},0, {445, 845},{0x22, 0xF0, 0x79, 0xFF}}},
	{{{38, 17, 1},0, {445, 845},{0x14, 0xC7, 0x70, 0xFF}}},
	{{{38, 17, 1},0, {445, 845},{0x14, 0xC7, 0x70, 0xFF}}},
	{{{43, 5, -10},0, {445, 845},{0x39, 0xA7, 0x46, 0xFF}}},
	{{{66, 47, 8},0, {445, 845},{0x22, 0xF0, 0x79, 0xFF}}},
	{{{74, 38, -2},0, {445, 845},{0x70, 0xCA, 0x1B, 0xFF}}},
	{{{61, 18, -16},0, {445, 845},{0x6A, 0xC3, 0xDD, 0xFF}}},
	{{{73, 41, -6},0, {445, 845},{0x5C, 0x10, 0xAA, 0xFF}}},
	{{{42, 17, -30},0, {445, 845},{0x3A, 0x10, 0x90, 0xFF}}},
	{{{66, 53, -4},0, {445, 845},{0x1F, 0x5F, 0xB2, 0xFF}}},
	{{{31, 28, -29},0, {445, 845},{0x12, 0x43, 0x95, 0xFF}}},
	{{{34, 42, -15},0, {445, 845},{0xF2, 0x6A, 0xBC, 0xFF}}},
	{{{59, 57, 6},0, {445, 845},{0xEC, 0x6E, 0x3D, 0xFF}}},
	{{{71, 56, 5},0, {445, 845},{0x48, 0x5C, 0x31, 0xFF}}},
	{{{76, 48, 1},0, {445, 845},{0x7C, 0x19, 0x8, 0xFF}}},
};

Gfx power_flowers_asm_switch_head_mesh_layer_1_tri_1[] = {
	gsSPVertex(power_flowers_asm_switch_head_mesh_layer_1_vtx_1 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 4, 6, 0, 6, 7, 5, 0),
	gsSP2Triangles(8, 7, 6, 0, 9, 8, 6, 0),
	gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
	gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 15, 14, 0, 14, 17, 16, 0),
	gsSP2Triangles(16, 17, 3, 0, 12, 15, 18, 0),
	gsSP2Triangles(8, 19, 7, 0, 20, 10, 12, 0),
	gsSP2Triangles(20, 8, 10, 0, 21, 22, 23, 0),
	gsSP2Triangles(21, 24, 22, 0, 21, 25, 24, 0),
	gsSP2Triangles(26, 24, 25, 0, 27, 24, 26, 0),
	gsSP2Triangles(26, 28, 27, 0, 29, 27, 28, 0),
	gsSP2Triangles(27, 29, 30, 0, 29, 31, 30, 0),
	gsSPVertex(power_flowers_asm_switch_head_mesh_layer_1_vtx_1 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(0, 4, 3, 0, 1, 3, 5, 0),
	gsSP2Triangles(5, 6, 1, 0, 5, 7, 6, 0),
	gsSP2Triangles(7, 5, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 9, 11, 0, 12, 11, 13, 0),
	gsSP2Triangles(13, 11, 14, 0, 15, 14, 11, 0),
	gsSP2Triangles(15, 11, 16, 0, 11, 17, 16, 0),
	gsSP2Triangles(18, 16, 17, 0, 15, 19, 14, 0),
	gsSP2Triangles(15, 20, 19, 0, 20, 21, 19, 0),
	gsSP2Triangles(22, 21, 20, 0, 23, 22, 20, 0),
	gsSP2Triangles(23, 24, 22, 0, 23, 25, 24, 0),
	gsSP2Triangles(23, 26, 25, 0, 25, 26, 27, 0),
	gsSP2Triangles(26, 28, 27, 0, 29, 28, 26, 0),
	gsSP2Triangles(30, 28, 29, 0, 31, 30, 29, 0),
	gsSPVertex(power_flowers_asm_switch_head_mesh_layer_1_vtx_1 + 64, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 3, 0, 0, 5, 4, 0, 0),
	gsSP2Triangles(6, 5, 0, 0, 5, 7, 4, 0),
	gsSP2Triangles(8, 4, 7, 0, 8, 9, 4, 0),
	gsSP2Triangles(10, 9, 8, 0, 10, 11, 9, 0),
	gsSP2Triangles(11, 1, 9, 0, 12, 1, 11, 0),
	gsSP2Triangles(13, 12, 11, 0, 14, 13, 11, 0),
	gsSP2Triangles(15, 14, 11, 0, 15, 16, 14, 0),
	gsSP2Triangles(16, 17, 14, 0, 16, 18, 17, 0),
	gsSP2Triangles(16, 19, 18, 0, 16, 20, 19, 0),
	gsSP2Triangles(20, 21, 19, 0, 22, 21, 20, 0),
	gsSP2Triangles(23, 22, 20, 0, 23, 24, 22, 0),
	gsSP2Triangles(17, 25, 14, 0, 25, 13, 14, 0),
	gsSP2Triangles(4, 9, 3, 0, 9, 1, 3, 0),
	gsSP2Triangles(26, 27, 28, 0, 26, 29, 27, 0),
	gsSP2Triangles(29, 30, 27, 0, 29, 31, 30, 0),
	gsSPVertex(power_flowers_asm_switch_head_mesh_layer_1_vtx_1 + 96, 13, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(6, 5, 4, 0, 7, 5, 6, 0),
	gsSP2Triangles(8, 7, 6, 0, 9, 7, 8, 0),
	gsSP2Triangles(10, 7, 9, 0, 10, 11, 7, 0),
	gsSP2Triangles(10, 2, 11, 0, 11, 2, 12, 0),
	gsSP2Triangles(12, 2, 3, 0, 3, 5, 12, 0),
	gsSP2Triangles(12, 5, 7, 0, 11, 12, 7, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_asm_switch_head_mesh_layer_1_vtx_2[16] = {
	{{{-58, 15, -18},0, {934, 986},{0x95, 0xC7, 0xDB, 0xFF}}},
	{{{-72, 34, -7},0, {934, 986},{0x8D, 0xD2, 0xE2, 0xFF}}},
	{{{-66, 43, -10},0, {934, 986},{0xC1, 0x26, 0x98, 0xFF}}},
	{{{-66, 37, 2},0, {934, 986},{0xBE, 0xBA, 0x53, 0xFF}}},
	{{{-52, 17, -6},0, {934, 986},{0xC0, 0xB0, 0x4B, 0xFF}}},
	{{{-62, 40, 7},0, {934, 986},{0xEA, 0xD2, 0x74, 0xFF}}},
	{{{-45, 22, 2},0, {934, 986},{0xEB, 0xC9, 0x71, 0xFF}}},
	{{{-57, 46, 7},0, {934, 986},{0x10, 0x2, 0x7E, 0xFF}}},
	{{{-37, 32, 5},0, {934, 986},{0xE, 0xFC, 0x7E, 0xFF}}},
	{{{-52, 54, 5},0, {934, 986},{0x28, 0x69, 0x3C, 0xFF}}},
	{{{-28, 45, 0},0, {934, 986},{0x2D, 0x67, 0x3B, 0xFF}}},
	{{{-36, 43, -15},0, {934, 986},{0xC, 0x6B, 0xBD, 0xFF}}},
	{{{-57, 52, -4},0, {934, 986},{0x10, 0x6E, 0xC2, 0xFF}}},
	{{{-44, 36, -22},0, {934, 986},{0xEB, 0x46, 0x98, 0xFF}}},
	{{{-61, 49, -9},0, {934, 986},{0xEA, 0x4E, 0x9E, 0xFF}}},
	{{{-52, 27, -23},0, {934, 986},{0xC2, 0x18, 0x94, 0xFF}}},
};

Gfx power_flowers_asm_switch_head_mesh_layer_1_tri_2[] = {
	gsSPVertex(power_flowers_asm_switch_head_mesh_layer_1_vtx_2 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 3, 0, 0, 5, 3, 4, 0),
	gsSP2Triangles(6, 5, 4, 0, 7, 5, 6, 0),
	gsSP2Triangles(8, 7, 6, 0, 9, 7, 8, 0),
	gsSP2Triangles(10, 9, 8, 0, 10, 11, 9, 0),
	gsSP2Triangles(11, 12, 9, 0, 11, 13, 12, 0),
	gsSP2Triangles(13, 14, 12, 0, 13, 15, 14, 0),
	gsSP2Triangles(15, 2, 14, 0, 15, 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx power_flowers_asm_switch_head_mesh_layer_1_vtx_3[18] = {
	{{{22, 4, -40},0, {132, 817},{0x25, 0xF, 0x87, 0xFF}}},
	{{{20, -5, -40},0, {213, 1078},{0x2D, 0xDA, 0x90, 0xFF}}},
	{{{0, -1, -45},0, {1130, 958},{0x0, 0xA, 0x81, 0xFF}}},
	{{{-2, 18, -37},0, {1200, 471},{0xFF, 0x3E, 0x91, 0xFF}}},
	{{{31, 28, -29},0, {-287, 200},{0x12, 0x43, 0x95, 0xFF}}},
	{{{0, 32, -25},0, {1130, 81},{0x0, 0x67, 0xB6, 0xFF}}},
	{{{34, 42, -15},0, {-424, -179},{0xF2, 0x6A, 0xBC, 0xFF}}},
	{{{20, -5, -40},0, {448, 960},{0x2D, 0xDA, 0x90, 0xFF}}},
	{{{0, -10, -43},0, {448, 960},{0x0, 0xCC, 0x8C, 0xFF}}},
	{{{0, -1, -45},0, {448, 960},{0x0, 0xA, 0x81, 0xFF}}},
	{{{-21, -5, -40},0, {448, 960},{0xD4, 0xDB, 0x8F, 0xFF}}},
	{{{-29, 7, -38},0, {1044, 766},{0xD2, 0xC, 0x8A, 0xFF}}},
	{{{0, -1, -45},0, {-252, 983},{0x0, 0xA, 0x81, 0xFF}}},
	{{{-21, -5, -40},0, {665, 1104},{0xD4, 0xDB, 0x8F, 0xFF}}},
	{{{-2, 18, -37},0, {-181, 497},{0xFF, 0x3E, 0x91, 0xFF}}},
	{{{-36, 30, -27},0, {1357, 161},{0xED, 0x42, 0x95, 0xFF}}},
	{{{0, 32, -25},0, {-252, 107},{0x0, 0x67, 0xB6, 0xFF}}},
	{{{-31, 41, -17},0, {1122, -115},{0x9, 0x6B, 0xBC, 0xFF}}},
};

Gfx power_flowers_asm_switch_head_mesh_layer_1_tri_3[] = {
	gsSPVertex(power_flowers_asm_switch_head_mesh_layer_1_vtx_3 + 0, 18, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	gsSP2Triangles(3, 4, 0, 0, 3, 5, 4, 0),
	gsSP2Triangles(5, 6, 4, 0, 7, 8, 9, 0),
	gsSP2Triangles(10, 9, 8, 0, 11, 12, 13, 0),
	gsSP2Triangles(12, 11, 14, 0, 11, 15, 14, 0),
	gsSP2Triangles(16, 14, 15, 0, 16, 15, 17, 0),
	gsSPEndDisplayList(),
};


Gfx mat_power_flowers_leaf[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, power_flowers_leaf_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(power_flowers_leaf_lights),
	gsSPEndDisplayList(),
};


Gfx mat_power_flowers_leaf_blue[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, power_flowers_leaf_blue_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(power_flowers_leaf_blue_lights),
	gsSPEndDisplayList(),
};


Gfx mat_revert_power_flowers_leaf[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_revert_power_flowers_leaf_blue[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_power_flowers_purple[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(power_flowers_purple_lights),
	gsSPEndDisplayList(),
};

Gfx mat_power_flowers_yellow[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(power_flowers_yellow_lights),
	gsSPEndDisplayList(),
};

Gfx mat_power_flowers_pink[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(power_flowers_pink_lights),
	gsSPEndDisplayList(),
};

Gfx mat_power_flowers_red[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(power_flowers_red_lights),
	gsSPEndDisplayList(),
};

Gfx mat_power_flowers_white[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(power_flowers_white_lights),
	gsSPEndDisplayList(),
};

Gfx mat_power_flowers_eye[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0),
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, power_flowers_eye_black_ia4),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 255, 1024),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetPrimColor(0, 0, 254, 254, 254, 255),
	gsSPSetLights1(power_flowers_eye_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_power_flowers_eye[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx mat_power_flowers_dark_blue[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(power_flowers_dark_blue_lights),
	gsSPEndDisplayList(),
};

Gfx power_flowers_root_mesh_layer_1[] = {
	gsSPDisplayList(mat_power_flowers_leaf),
	gsSPDisplayList(power_flowers_root_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_power_flowers_leaf),
	gsSPEndDisplayList(),
};

Gfx power_flowers_root_mesh_layer_1_mat_override_purple_0[] = {
	gsSPDisplayList(mat_power_flowers_leaf_blue),
	gsSPDisplayList(power_flowers_root_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_power_flowers_leaf_blue),
	gsSPEndDisplayList(),
};

Gfx power_flowers_left_leaf_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_power_flowers_leaf),
	gsSPDisplayList(power_flowers_left_leaf_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_power_flowers_leaf),
	gsSPEndDisplayList(),
};

Gfx power_flowers_left_leaf_skinned_mesh_layer_1_mat_override_purple_0[] = {
	gsSPDisplayList(mat_power_flowers_leaf_blue),
	gsSPDisplayList(power_flowers_root_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_power_flowers_leaf_blue),
	gsSPEndDisplayList(),
};

Gfx power_flowers_left_leaf_mesh_layer_1[] = {
	gsSPDisplayList(mat_power_flowers_leaf),
	gsSPDisplayList(power_flowers_left_leaf_mesh_layer_1_tri_0),
	gsSPDisplayList(power_flowers_left_leaf_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_power_flowers_leaf),
	gsSPEndDisplayList(),
};

Gfx power_flowers_left_leaf_mesh_layer_1_mat_override_purple_0[] = {
	gsSPDisplayList(mat_power_flowers_leaf_blue),
	gsSPDisplayList(power_flowers_left_leaf_mesh_layer_1_tri_0),
	gsSPDisplayList(power_flowers_left_leaf_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_power_flowers_leaf_blue),
	gsSPEndDisplayList(),
};

Gfx power_flowers_right_leaf_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_power_flowers_leaf),
	gsSPDisplayList(power_flowers_right_leaf_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_power_flowers_leaf),
	gsSPEndDisplayList(),
};

Gfx power_flowers_right_leaf_skinned_mesh_layer_1_mat_override_purple_0[] = {
	gsSPDisplayList(mat_power_flowers_leaf_blue),
	gsSPDisplayList(power_flowers_right_leaf_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_power_flowers_leaf_blue),
	gsSPEndDisplayList(),
};

Gfx power_flowers_right_leaf_mesh_layer_1[] = {
	gsSPDisplayList(mat_power_flowers_leaf),
	gsSPDisplayList(power_flowers_right_leaf_mesh_layer_1_tri_0),
	gsSPDisplayList(power_flowers_right_leaf_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_power_flowers_leaf),
	gsSPEndDisplayList(),
};

Gfx power_flowers_right_leaf_mesh_layer_1_mat_override_purple_0[] = {
	gsSPDisplayList(mat_power_flowers_leaf_blue),
	gsSPDisplayList(power_flowers_right_leaf_mesh_layer_1_tri_0),
	gsSPDisplayList(power_flowers_right_leaf_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_power_flowers_leaf_blue),
	gsSPEndDisplayList(),
};

Gfx power_flowers_stem_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_power_flowers_leaf),
	gsSPDisplayList(power_flowers_stem_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_power_flowers_leaf),
	gsSPEndDisplayList(),
};

Gfx power_flowers_stem_skinned_mesh_layer_1_mat_override_purple_0[] = {
	gsSPDisplayList(mat_power_flowers_leaf_blue),
	gsSPDisplayList(power_flowers_stem_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_power_flowers_leaf_blue),
	gsSPEndDisplayList(),
};

Gfx power_flowers_stem_mesh_layer_1[] = {
	gsSPDisplayList(mat_power_flowers_leaf),
	gsSPDisplayList(power_flowers_stem_mesh_layer_1_tri_0),
	gsSPDisplayList(power_flowers_stem_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_power_flowers_leaf),
	gsSPEndDisplayList(),
};

Gfx power_flowers_stem_mesh_layer_1_mat_override_purple_0[] = {
	gsSPDisplayList(mat_power_flowers_leaf_blue),
	gsSPDisplayList(power_flowers_stem_mesh_layer_1_tri_0),
	gsSPDisplayList(power_flowers_stem_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_power_flowers_leaf_blue),
	gsSPEndDisplayList(),
};

Gfx power_flowers_head_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_power_flowers_leaf),
	gsSPDisplayList(power_flowers_head_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_power_flowers_leaf),
	gsSPEndDisplayList(),
};

Gfx power_flowers_head_skinned_mesh_layer_1_mat_override_purple_0[] = {
	gsSPDisplayList(mat_power_flowers_leaf_blue),
	gsSPDisplayList(power_flowers_head_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_power_flowers_leaf_blue),
	gsSPEndDisplayList(),
};

Gfx power_flowers_head_mesh_layer_1[] = {
	gsSPDisplayList(mat_power_flowers_leaf),
	gsSPDisplayList(power_flowers_head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_power_flowers_leaf),
	gsSPDisplayList(mat_power_flowers_yellow),
	gsSPDisplayList(power_flowers_head_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_power_flowers_red),
	gsSPDisplayList(power_flowers_head_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_power_flowers_white),
	gsSPDisplayList(power_flowers_head_mesh_layer_1_tri_3),
	gsSPDisplayList(mat_power_flowers_eye),
	gsSPDisplayList(power_flowers_head_mesh_layer_1_tri_4),
	gsSPEndDisplayList(),
};

Gfx power_flowers_head_mesh_layer_1_mat_override_purple_0[] = {
	gsSPDisplayList(mat_power_flowers_leaf_blue),
	gsSPDisplayList(power_flowers_head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_power_flowers_leaf_blue),
	gsSPDisplayList(mat_power_flowers_purple),
	gsSPDisplayList(power_flowers_head_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_power_flowers_white),
	gsSPDisplayList(power_flowers_head_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_power_flowers_pink),
	gsSPDisplayList(power_flowers_head_mesh_layer_1_tri_3),
	gsSPDisplayList(mat_power_flowers_eye),
	gsSPDisplayList(power_flowers_head_mesh_layer_1_tri_4),
	gsSPEndDisplayList(),
};

Gfx power_flowers_asm_switch_root_mesh_layer_1[] = {
	gsSPDisplayList(mat_power_flowers_leaf),
	gsSPDisplayList(power_flowers_asm_switch_root_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_power_flowers_leaf),
	gsSPEndDisplayList(),
};

Gfx power_flowers_asm_switch_root_mesh_layer_1_mat_override_purple_0[] = {
	gsSPDisplayList(mat_power_flowers_purple),
	gsSPDisplayList(power_flowers_asm_switch_root_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx power_flowers_asm_switch_left_leaf_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_power_flowers_leaf),
	gsSPDisplayList(power_flowers_asm_switch_left_leaf_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_power_flowers_leaf),
	gsSPEndDisplayList(),
};

Gfx power_flowers_asm_switch_left_leaf_skinned_mesh_layer_1_mat_override_purple_0[] = {
	gsSPDisplayList(mat_power_flowers_purple),
	gsSPDisplayList(power_flowers_asm_switch_left_leaf_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx power_flowers_asm_switch_left_leaf_mesh_layer_1[] = {
	gsSPDisplayList(mat_power_flowers_leaf),
	gsSPDisplayList(power_flowers_asm_switch_left_leaf_mesh_layer_1_tri_0),
	gsSPDisplayList(power_flowers_asm_switch_left_leaf_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_power_flowers_leaf),
	gsSPEndDisplayList(),
};

Gfx power_flowers_asm_switch_left_leaf_mesh_layer_1_mat_override_purple_0[] = {
	gsSPDisplayList(mat_power_flowers_purple),
	gsSPDisplayList(power_flowers_asm_switch_left_leaf_mesh_layer_1_tri_0),
	gsSPDisplayList(power_flowers_asm_switch_left_leaf_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx power_flowers_asm_switch_right_leaf_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_power_flowers_leaf),
	gsSPDisplayList(power_flowers_asm_switch_right_leaf_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_power_flowers_leaf),
	gsSPEndDisplayList(),
};

Gfx power_flowers_asm_switch_right_leaf_skinned_mesh_layer_1_mat_override_purple_0[] = {
	gsSPDisplayList(mat_power_flowers_purple),
	gsSPDisplayList(power_flowers_asm_switch_right_leaf_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx power_flowers_asm_switch_right_leaf_mesh_layer_1[] = {
	gsSPDisplayList(mat_power_flowers_leaf),
	gsSPDisplayList(power_flowers_asm_switch_right_leaf_mesh_layer_1_tri_0),
	gsSPDisplayList(power_flowers_asm_switch_right_leaf_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_power_flowers_leaf),
	gsSPEndDisplayList(),
};

Gfx power_flowers_asm_switch_right_leaf_mesh_layer_1_mat_override_purple_0[] = {
	gsSPDisplayList(mat_power_flowers_purple),
	gsSPDisplayList(power_flowers_asm_switch_right_leaf_mesh_layer_1_tri_0),
	gsSPDisplayList(power_flowers_asm_switch_right_leaf_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx power_flowers_asm_switch_stem_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_power_flowers_leaf),
	gsSPDisplayList(power_flowers_asm_switch_stem_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_power_flowers_leaf),
	gsSPEndDisplayList(),
};

Gfx power_flowers_asm_switch_stem_skinned_mesh_layer_1_mat_override_purple_0[] = {
	gsSPDisplayList(mat_power_flowers_purple),
	gsSPDisplayList(power_flowers_asm_switch_stem_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx power_flowers_asm_switch_stem_mesh_layer_1[] = {
	gsSPDisplayList(mat_power_flowers_leaf),
	gsSPDisplayList(power_flowers_asm_switch_stem_mesh_layer_1_tri_0),
	gsSPDisplayList(power_flowers_asm_switch_stem_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_power_flowers_leaf),
	gsSPEndDisplayList(),
};

Gfx power_flowers_asm_switch_stem_mesh_layer_1_mat_override_purple_0[] = {
	gsSPDisplayList(mat_power_flowers_purple),
	gsSPDisplayList(power_flowers_asm_switch_stem_mesh_layer_1_tri_0),
	gsSPDisplayList(power_flowers_asm_switch_stem_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx power_flowers_asm_switch_head_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_power_flowers_leaf),
	gsSPDisplayList(power_flowers_asm_switch_head_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_power_flowers_leaf),
	gsSPEndDisplayList(),
};

Gfx power_flowers_asm_switch_head_skinned_mesh_layer_1_mat_override_purple_0[] = {
	gsSPDisplayList(mat_power_flowers_purple),
	gsSPDisplayList(power_flowers_asm_switch_head_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx power_flowers_asm_switch_head_mesh_layer_1[] = {
	gsSPDisplayList(mat_power_flowers_leaf),
	gsSPDisplayList(power_flowers_asm_switch_head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_power_flowers_leaf),
	gsSPDisplayList(mat_power_flowers_white),
	gsSPDisplayList(power_flowers_asm_switch_head_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_power_flowers_dark_blue),
	gsSPDisplayList(power_flowers_asm_switch_head_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_power_flowers_eye),
	gsSPDisplayList(power_flowers_asm_switch_head_mesh_layer_1_tri_3),
	gsSPEndDisplayList(),
};

Gfx power_flowers_asm_switch_head_mesh_layer_1_mat_override_purple_0[] = {
	gsSPDisplayList(mat_power_flowers_purple),
	gsSPDisplayList(power_flowers_asm_switch_head_mesh_layer_1_tri_0),
	gsSPDisplayList(power_flowers_asm_switch_head_mesh_layer_1_tri_1),
	gsSPDisplayList(power_flowers_asm_switch_head_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_power_flowers_eye),
	gsSPDisplayList(power_flowers_asm_switch_head_mesh_layer_1_tri_3),
	gsSPEndDisplayList(),
};

Gfx power_flowers_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

