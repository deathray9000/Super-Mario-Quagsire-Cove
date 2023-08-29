#include "texture.inc.c"

Lights1 mario_button_v3_lights = gdSPDefLights1(
	0x0, 0x0, 0x7F,
	0x0, 0x0, 0xFE, 0x28, 0x28, 0x28);

Lights1 mario_hat_v3_lights = gdSPDefLights1(
	0x7F, 0x0, 0x0,
	0xFE, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 mario_skin_v3_lights = gdSPDefLights1(
	0x7E, 0x60, 0x3C,
	0xFD, 0xC0, 0x79, 0x28, 0x28, 0x28);

Lights1 mario_shoes_v3_lights = gdSPDefLights1(
	0x39, 0xD, 0x7,
	0x72, 0x1B, 0xE, 0x28, 0x28, 0x28);

Lights1 mario_moustache_v3_lights = gdSPDefLights1(
	0x7E, 0x60, 0x3C,
	0xFD, 0xC0, 0x79, 0x28, 0x28, 0x28);

Lights1 mario_face_0___Open_Eyes_v3_lights = gdSPDefLights1(
	0x7E, 0x60, 0x3C,
	0xFD, 0xC0, 0x79, 0x28, 0x28, 0x28);

Lights1 mario_sideburns_v3_lights = gdSPDefLights1(
	0x7E, 0x60, 0x3C,
	0xFD, 0xC0, 0x79, 0x28, 0x28, 0x28);

Lights1 mario_face_1___Half_Eyes_v3_lights = gdSPDefLights1(
	0x7E, 0x60, 0x3C,
	0xFD, 0xC0, 0x79, 0x28, 0x28, 0x28);

Lights1 mario_face_2___Closed_Eyes_v3_lights = gdSPDefLights1(
	0x7E, 0x60, 0x3C,
	0xFD, 0xC0, 0x79, 0x28, 0x28, 0x28);

Lights1 mario_face_7___Dead_Eyes_v3_lights = gdSPDefLights1(
	0x7E, 0x60, 0x3C,
	0xFD, 0xC0, 0x79, 0x28, 0x28, 0x28);

Lights1 mario_hair_v3_lights = gdSPDefLights1(
	0x39, 0x2, 0x0,
	0x73, 0x5, 0x0, 0x28, 0x28, 0x28);

Lights1 mario_white_v3_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 mario_button_v3_001_lights = gdSPDefLights1(
	0x7F, 0x0, 0xB,
	0xFE, 0x0, 0x17, 0x28, 0x28, 0x28);

Lights1 mario_hat_v3_001_lights = gdSPDefLights1(
	0x7F, 0x0, 0x0,
	0xFE, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 mario_moustache_v3_001_lights = gdSPDefLights1(
	0x7E, 0x60, 0x3C,
	0xFD, 0xC0, 0x79, 0x28, 0x28, 0x28);

Lights1 mario_face_0___Open_Eyes_v3_002_lights = gdSPDefLights1(
	0x7E, 0x60, 0x3C,
	0xFD, 0xC0, 0x79, 0x28, 0x28, 0x28);

Lights1 mario_sideburns_v3_001_lights = gdSPDefLights1(
	0x7E, 0x60, 0x3C,
	0xFD, 0xC0, 0x79, 0x28, 0x28, 0x28);

Lights1 mario_f3d_material_lights = gdSPDefLights1(
	0x7F, 0x7C, 0x0,
	0xFE, 0xF8, 0x0, 0x28, 0x28, 0x28);

Lights1 mario_face_1___Half_Eyes_v3_002_lights = gdSPDefLights1(
	0x7E, 0x60, 0x3C,
	0xFD, 0xC0, 0x79, 0x28, 0x28, 0x28);

Lights1 mario_face_2___Closed_Eyes_v3_002_lights = gdSPDefLights1(
	0x7E, 0x60, 0x3C,
	0xFD, 0xC0, 0x79, 0x28, 0x28, 0x28);

Lights1 mario_face_7___Dead_Eyes_v3_002_lights = gdSPDefLights1(
	0x7E, 0x60, 0x3C,
	0xFD, 0xC0, 0x79, 0x28, 0x28, 0x28);

Lights1 mario_white_v3_001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 mario_shoes_v3_001_lights = gdSPDefLights1(
	0x2, 0x0, 0x7F,
	0x4, 0x0, 0xFE, 0x28, 0x28, 0x28);

Vtx mario_000_offset_bottom_mesh_layer_1_vtx_0[4] = {
	{{{-23, 57, 0},0, {-16, -16},{0x86, 0x22, 0x0, 0xFF}}},
	{{{47, 83, -9},0, {-16, -16},{0xE6, 0x7C, 0xFB, 0xFF}}},
	{{{49, 65, -63},0, {-16, -16},{0xCA, 0x3F, 0xA0, 0xFF}}},
	{{{49, 65, 63},0, {-16, -16},{0xC8, 0x41, 0x5E, 0xFF}}},
};

Gfx mario_000_offset_bottom_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_bottom_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_001_Chest_skinned_mesh_layer_1_vtx_0[10] = {
	{{{14, -40, -90},0, {-16, -16},{0xB6, 0xE1, 0x9D, 0xFF}}},
	{{{14, -41, 90},0, {-16, -16},{0xB5, 0xE1, 0x62, 0xFF}}},
	{{{49, 65, 63},0, {-16, -16},{0xC8, 0x41, 0x5E, 0xFF}}},
	{{{49, 65, 63},0, {93, 1419},{0xC8, 0x41, 0x5E, 0xFF}}},
	{{{-6, -66, 0},0, {-16, -16},{0x85, 0xDF, 0x0, 0xFF}}},
	{{{49, 65, -63},0, {-16, -16},{0xCA, 0x3F, 0xA0, 0xFF}}},
	{{{49, 65, -63},0, {93, 1419},{0xCA, 0x3F, 0xA0, 0xFF}}},
	{{{47, 83, -9},0, {-16, -16},{0xE6, 0x7C, 0xFB, 0xFF}}},
	{{{47, 83, -9},0, {1407, 1340},{0xE6, 0x7C, 0xFB, 0xFF}}},
	{{{47, 83, -9},0, {1721, 1313},{0xE6, 0x7C, 0xFB, 0xFF}}},
};

Gfx mario_000_offset_001_Chest_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_001_Chest_skinned_mesh_layer_1_vtx_0 + 0, 10, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_001_Chest_mesh_layer_1_vtx_0[15] = {
	{{{51, 74, 30},0, {-16, -16},{0x30, 0x74, 0x14, 0xFF}}},
	{{{51, 74, -29},0, {-16, -16},{0x30, 0x72, 0xE2, 0xFF}}},
	{{{22, 33, 86},0, {-618, 505},{0xF9, 0x22, 0x7A, 0xFF}}},
	{{{53, 51, 75},0, {-221, -182},{0x28, 0x4F, 0x5B, 0xFF}}},
	{{{51, 74, 30},0, {998, -2},{0x30, 0x74, 0x14, 0xFF}}},
	{{{21, 33, -85},0, {-618, 505},{0xF9, 0x22, 0x86, 0xFF}}},
	{{{52, 51, -74},0, {-221, -182},{0x28, 0x4A, 0xA1, 0xFF}}},
	{{{51, 74, -29},0, {998, -2},{0x30, 0x72, 0xE2, 0xFF}}},
	{{{22, 33, 86},0, {-16, -16},{0xF9, 0x22, 0x7A, 0xFF}}},
	{{{-3, -25, 85},0, {-16, -16},{0x1, 0xE4, 0x7C, 0xFF}}},
	{{{39, -61, 65},0, {-16, -16},{0x15, 0x97, 0x45, 0xFF}}},
	{{{-9, -78, 0},0, {-16, -16},{0xEC, 0x83, 0x0, 0xFF}}},
	{{{39, -61, -64},0, {-16, -16},{0x15, 0x98, 0xBA, 0xFF}}},
	{{{-3, -25, -84},0, {-16, -16},{0x5, 0xE2, 0x85, 0xFF}}},
	{{{21, 33, -85},0, {-16, -16},{0xF9, 0x22, 0x86, 0xFF}}},
};

Gfx mario_000_offset_001_Chest_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_001_Chest_mesh_layer_1_vtx_0 + 0, 15, 10),
	gsSP2Triangles(10, 11, 7, 0, 12, 13, 3, 0),
	gsSP2Triangles(3, 13, 14, 0, 3, 14, 9, 0),
	gsSP2Triangles(15, 6, 16, 0, 6, 17, 16, 0),
	gsSP2Triangles(6, 8, 17, 0, 2, 1, 18, 0),
	gsSP2Triangles(1, 19, 18, 0, 1, 20, 19, 0),
	gsSP2Triangles(20, 1, 21, 0, 1, 4, 21, 0),
	gsSP2Triangles(21, 4, 0, 0, 22, 21, 0, 0),
	gsSP2Triangles(22, 0, 23, 0, 24, 23, 0, 0),
	gsSP1Triangle(5, 24, 0, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_001_Chest_mesh_layer_1_vtx_1[21] = {
	{{{21, 33, -85},0, {-16, -16},{0xF9, 0x22, 0x86, 0xFF}}},
	{{{29, -2, -91},0, {-16, -16},{0x8, 0x9, 0x82, 0xFF}}},
	{{{-3, -25, -84},0, {-16, -16},{0x5, 0xE2, 0x85, 0xFF}}},
	{{{52, 51, -74},0, {-16, -16},{0x28, 0x4A, 0xA1, 0xFF}}},
	{{{54, -44, -80},0, {-16, -16},{0x22, 0xC3, 0x96, 0xFF}}},
	{{{39, -61, -64},0, {-16, -16},{0x15, 0x98, 0xBA, 0xFF}}},
	{{{93, -29, -62},0, {-16, -16},{0x63, 0xD3, 0xBE, 0xFF}}},
	{{{39, -61, 65},0, {-16, -16},{0x15, 0x97, 0x45, 0xFF}}},
	{{{52, -38, 90},0, {-16, -16},{0x1B, 0xCD, 0x71, 0xFF}}},
	{{{-3, -25, 85},0, {-16, -16},{0x1, 0xE4, 0x7C, 0xFF}}},
	{{{93, -29, 63},0, {-16, -16},{0x63, 0xD4, 0x43, 0xFF}}},
	{{{29, -2, 91},0, {-16, -16},{0x4, 0x12, 0x7E, 0xFF}}},
	{{{22, 33, 86},0, {-16, -16},{0xF9, 0x22, 0x7A, 0xFF}}},
	{{{53, 51, 75},0, {-16, -16},{0x28, 0x4F, 0x5B, 0xFF}}},
	{{{51, 74, -29},0, {-16, -16},{0x30, 0x72, 0xE2, 0xFF}}},
	{{{51, 74, 30},0, {-16, -16},{0x30, 0x74, 0x14, 0xFF}}},
	{{{91, 32, 27},0, {-16, -16},{0x5E, 0x54, 0xF3, 0xFF}}},
	{{{91, 32, -26},0, {-16, -16},{0x69, 0x3B, 0xD7, 0xFF}}},
	{{{102, -26, -32},0, {-16, -16},{0x60, 0xE3, 0xB2, 0xFF}}},
	{{{102, -26, 33},0, {-16, -16},{0x76, 0xD1, 0x9, 0xFF}}},
	{{{63, -67, 0},0, {-16, -16},{0x3D, 0x91, 0xFB, 0xFF}}},
};

Gfx mario_000_offset_001_Chest_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_000_offset_001_Chest_mesh_layer_1_vtx_1 + 0, 21, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(2, 1, 4, 0, 5, 2, 4, 0),
	gsSP2Triangles(6, 5, 4, 0, 7, 8, 9, 0),
	gsSP2Triangles(8, 7, 10, 0, 8, 11, 9, 0),
	gsSP2Triangles(11, 12, 9, 0, 13, 12, 11, 0),
	gsSP2Triangles(14, 15, 16, 0, 16, 17, 14, 0),
	gsSP2Triangles(17, 16, 18, 0, 18, 16, 19, 0),
	gsSP1Triangle(20, 18, 19, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_001_Chest_mesh_layer_1_vtx_2[16] = {
	{{{51, 74, -29},0, {-16, -16},{0x30, 0x72, 0xE2, 0xFF}}},
	{{{91, 32, -26},0, {-16, -16},{0x69, 0x3B, 0xD7, 0xFF}}},
	{{{52, 51, -74},0, {-16, -16},{0x28, 0x4A, 0xA1, 0xFF}}},
	{{{89, 14, -61},0, {-16, -16},{0x67, 0x29, 0xC2, 0xFF}}},
	{{{102, -26, -32},0, {-16, -16},{0x60, 0xE3, 0xB2, 0xFF}}},
	{{{93, -29, -62},0, {-16, -16},{0x63, 0xD3, 0xBE, 0xFF}}},
	{{{63, -67, 0},0, {-16, -16},{0x3D, 0x91, 0xFB, 0xFF}}},
	{{{39, -61, -64},0, {-16, -16},{0x15, 0x98, 0xBA, 0xFF}}},
	{{{-9, -78, 0},0, {-16, -16},{0xEC, 0x83, 0x0, 0xFF}}},
	{{{39, -61, 65},0, {-16, -16},{0x15, 0x97, 0x45, 0xFF}}},
	{{{93, -29, 63},0, {-16, -16},{0x63, 0xD4, 0x43, 0xFF}}},
	{{{102, -26, 33},0, {-16, -16},{0x76, 0xD1, 0x9, 0xFF}}},
	{{{89, 14, 62},0, {-16, -16},{0x6C, 0x2B, 0x33, 0xFF}}},
	{{{91, 32, 27},0, {-16, -16},{0x5E, 0x54, 0xF3, 0xFF}}},
	{{{53, 51, 75},0, {-16, -16},{0x28, 0x4F, 0x5B, 0xFF}}},
	{{{51, 74, 30},0, {-16, -16},{0x30, 0x74, 0x14, 0xFF}}},
};

Gfx mario_000_offset_001_Chest_mesh_layer_1_tri_2[] = {
	gsSPVertex(mario_000_offset_001_Chest_mesh_layer_1_vtx_2 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(3, 1, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
	gsSP2Triangles(6, 8, 7, 0, 9, 8, 6, 0),
	gsSP2Triangles(9, 6, 10, 0, 6, 11, 10, 0),
	gsSP2Triangles(12, 10, 11, 0, 11, 13, 12, 0),
	gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_Head_mesh_layer_1_vtx_0[58] = {
	{{{101, 88, 80},0, {-16, -16},{0x3A, 0x4F, 0x51, 0xFF}}},
	{{{103, 64, 90},0, {-16, -16},{0x7, 0x47, 0x69, 0xFF}}},
	{{{106, 97, 1},0, {708, 942},{0x65, 0x4D, 0x0, 0xFF}}},
	{{{86, 108, 34},0, {326, 352},{0x29, 0x3A, 0x6A, 0xFF}}},
	{{{101, 88, 80},0, {882, -34},{0x3A, 0x4F, 0x51, 0xFF}}},
	{{{106, 97, 1},0, {208, 130},{0x65, 0x4D, 0x0, 0xFF}}},
	{{{101, 88, -79},0, {906, -20},{0x3B, 0x4F, 0xAF, 0xFF}}},
	{{{86, 108, -33},0, {346, 328},{0x2A, 0x3A, 0x97, 0xFF}}},
	{{{106, 97, 1},0, {258, 84},{0x65, 0x4D, 0x0, 0xFF}}},
	{{{103, 64, -89},0, {-35, 89},{0x7, 0x47, 0x97, 0xFF}}},
	{{{101, 88, -79},0, {-176, 882},{0x3B, 0x4F, 0xAF, 0xFF}}},
	{{{106, 97, 1},0, {240, 954},{0x65, 0x4D, 0x0, 0xFF}}},
	{{{51, 0, 103},0, {1575, 393},{0xB5, 0x9, 0x66, 0xFF}}},
	{{{57, 84, 76},0, {872, 548},{0xCD, 0x49, 0x5B, 0xFF}}},
	{{{9, 36, 49},0, {876, 1074},{0x8C, 0x1A, 0x2D, 0xFF}}},
	{{{51, 0, 103},0, {-16, -16},{0xB5, 0x9, 0x66, 0xFF}}},
	{{{57, 84, 76},0, {842, 592},{0xCD, 0x49, 0x5B, 0xFF}}},
	{{{9, 36, -48},0, {790, 1146},{0x8A, 0x16, 0xD6, 0xFF}}},
	{{{57, 84, -75},0, {840, 592},{0xCD, 0x49, 0xA5, 0xFF}}},
	{{{51, 0, -102},0, {1513, 502},{0xB5, 0x9, 0x9A, 0xFF}}},
	{{{51, 0, -102},0, {1550, 425},{0xB5, 0x9, 0x9A, 0xFF}}},
	{{{57, 84, -75},0, {842, 592},{0xCD, 0x49, 0xA5, 0xFF}}},
	{{{9, 36, 49},0, {-16, -16},{0x8C, 0x1A, 0x2D, 0xFF}}},
	{{{11, -24, 33},0, {-16, -16},{0x86, 0xEA, 0x1C, 0xFF}}},
	{{{51, 0, 103},0, {-16, -16},{0xB5, 0x9, 0x66, 0xFF}}},
	{{{65, -45, 77},0, {-16, -16},{0xB5, 0xAB, 0x39, 0xFF}}},
	{{{73, -25, 135},0, {-16, -16},{0xD4, 0xEE, 0x76, 0xFF}}},
	{{{102, -55, 82},0, {-16, -16},{0x9, 0x96, 0x46, 0xFF}}},
	{{{111, -33, 135},0, {-16, -16},{0x1C, 0xDA, 0x76, 0xFF}}},
	{{{129, -11, 111},0, {-16, -16},{0x2F, 0x2A, 0x6E, 0xFF}}},
	{{{9, 36, -48},0, {-16, -16},{0x8A, 0x16, 0xD6, 0xFF}}},
	{{{11, -24, -32},0, {-16, -16},{0x85, 0xF3, 0xE5, 0xFF}}},
	{{{51, 0, -102},0, {-16, -16},{0xB5, 0x9, 0x9A, 0xFF}}},
	{{{11, -24, -32},0, {-16, -16},{0x85, 0xF3, 0xE5, 0xFF}}},
	{{{9, 36, -48},0, {-16, -16},{0x8A, 0x16, 0xD6, 0xFF}}},
	{{{65, -45, -76},0, {-16, -16},{0xB7, 0xA9, 0xC7, 0xFF}}},
	{{{73, -25, -134},0, {-16, -16},{0xD4, 0xEE, 0x8A, 0xFF}}},
	{{{129, -12, -109},0, {-16, -16},{0x31, 0x28, 0x92, 0xFF}}},
	{{{111, -33, -134},0, {-16, -16},{0x1C, 0xDC, 0x89, 0xFF}}},
	{{{103, -54, -81},0, {-16, -16},{0xB, 0x97, 0xB9, 0xFF}}},
	{{{9, 36, -48},0, {790, 1146},{0x8A, 0x16, 0xD6, 0xFF}}},
	{{{11, -24, 33},0, {-16, -16},{0x86, 0xEA, 0x1C, 0xFF}}},
	{{{9, 36, 49},0, {876, 1074},{0x8C, 0x1A, 0x2D, 0xFF}}},
	{{{18, 85, 0},0, {-16, -16},{0x95, 0x45, 0x0, 0xFF}}},
	{{{58, 147, 41},0, {-16, -16},{0xC3, 0x30, 0x65, 0xFF}}},
	{{{61, 111, 31},0, {-16, -16},{0xAE, 0x37, 0x4F, 0xFF}}},
	{{{86, 108, 34},0, {-16, -16},{0x29, 0x3A, 0x6A, 0xFF}}},
	{{{41, 148, 0},0, {-16, -16},{0x89, 0x2C, 0x0, 0xFF}}},
	{{{68, 181, 1},0, {-16, -16},{0xD8, 0x79, 0x0, 0xFF}}},
	{{{106, 146, 45},0, {-16, -16},{0x41, 0x2F, 0x63, 0xFF}}},
	{{{106, 97, 1},0, {-16, -16},{0x65, 0x4D, 0x0, 0xFF}}},
	{{{127, 144, 0},0, {-16, -16},{0x7C, 0x1A, 0x0, 0xFF}}},
	{{{107, 146, -43},0, {-16, -16},{0x42, 0x30, 0x9F, 0xFF}}},
	{{{86, 108, -33},0, {-16, -16},{0x2A, 0x3A, 0x97, 0xFF}}},
	{{{58, 147, -40},0, {-16, -16},{0xC5, 0x32, 0x9B, 0xFF}}},
	{{{61, 111, -30},0, {-16, -16},{0xAE, 0x37, 0xB0, 0xFF}}},
	{{{50, 109, 0},0, {-16, -16},{0x8D, 0x36, 0x0, 0xFF}}},
	{{{109, 179, 1},0, {-16, -16},{0x48, 0x69, 0x0, 0xFF}}},
};

Gfx mario_000_displaylist_Head_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_displaylist_Head_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 15, 1, 16, 0),
	gsSP2Triangles(17, 18, 19, 0, 9, 20, 21, 0),
	gsSP2Triangles(22, 23, 24, 0, 23, 25, 24, 0),
	gsSP2Triangles(26, 24, 25, 0, 26, 25, 27, 0),
	gsSP2Triangles(26, 27, 28, 0, 27, 29, 28, 0),
	gsSP2Triangles(26, 28, 29, 0, 24, 26, 29, 0),
	gsSP1Triangle(30, 31, 23, 0),
	gsSPVertex(mario_000_displaylist_Head_mesh_layer_1_vtx_0 + 32, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(0, 4, 3, 0, 5, 4, 0, 0),
	gsSP2Triangles(5, 6, 4, 0, 6, 5, 7, 0),
	gsSP2Triangles(4, 6, 7, 0, 3, 4, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
	gsSP2Triangles(12, 13, 14, 0, 13, 12, 15, 0),
	gsSP2Triangles(15, 12, 16, 0, 12, 17, 16, 0),
	gsSP2Triangles(17, 12, 14, 0, 14, 18, 17, 0),
	gsSP2Triangles(19, 17, 18, 0, 18, 20, 19, 0),
	gsSP2Triangles(20, 18, 21, 0, 22, 20, 21, 0),
	gsSP2Triangles(21, 23, 22, 0, 15, 22, 23, 0),
	gsSP2Triangles(23, 24, 15, 0, 15, 24, 13, 0),
	gsSP2Triangles(15, 16, 22, 0, 16, 20, 22, 0),
	gsSP2Triangles(20, 16, 25, 0, 16, 17, 25, 0),
	gsSP2Triangles(25, 17, 19, 0, 25, 19, 20, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_Head_mesh_layer_1_vtx_1[17] = {
	{{{73, -103, 52},0, {-16, -16},{0xE0, 0x98, 0x41, 0xFF}}},
	{{{102, -55, 82},0, {-16, -16},{0xCC, 0xCD, 0x68, 0xFF}}},
	{{{65, -45, 77},0, {-16, -16},{0xEF, 0xFE, 0x7E, 0xFF}}},
	{{{40, -85, 87},0, {-16, -16},{0xD7, 0xD8, 0x71, 0xFF}}},
	{{{11, -24, 33},0, {-16, -16},{0x85, 0xEA, 0x19, 0xFF}}},
	{{{18, -88, 59},0, {-16, -16},{0x94, 0xC7, 0x24, 0xFF}}},
	{{{40, -84, 0},0, {-16, -16},{0xA2, 0xAA, 0x0, 0xFF}}},
	{{{11, -24, -32},0, {-16, -16},{0x87, 0xE3, 0xE8, 0xFF}}},
	{{{18, -88, -58},0, {-16, -16},{0x94, 0xC7, 0xDC, 0xFF}}},
	{{{40, -85, -86},0, {-16, -16},{0xD7, 0xD8, 0x8F, 0xFF}}},
	{{{65, -45, -76},0, {-16, -16},{0xEE, 0xFF, 0x82, 0xFF}}},
	{{{73, -103, -51},0, {-16, -16},{0xE1, 0x9A, 0xBB, 0xFF}}},
	{{{103, -54, -81},0, {-16, -16},{0xCC, 0xCD, 0x98, 0xFF}}},
	{{{54, -120, -67},0, {-16, -16},{0xFC, 0x93, 0xBF, 0xFF}}},
	{{{39, -116, -35},0, {-16, -16},{0xD0, 0x8C, 0x12, 0xFF}}},
	{{{39, -116, 36},0, {-16, -16},{0xD0, 0x8C, 0xEE, 0xFF}}},
	{{{54, -120, 68},0, {-16, -16},{0xFC, 0x93, 0x41, 0xFF}}},
};

Gfx mario_000_displaylist_Head_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_000_displaylist_Head_mesh_layer_1_vtx_1 + 0, 17, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	gsSP2Triangles(3, 2, 4, 0, 4, 5, 3, 0),
	gsSP2Triangles(5, 4, 6, 0, 7, 6, 4, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 8, 7, 0),
	gsSP2Triangles(7, 10, 9, 0, 11, 9, 10, 0),
	gsSP2Triangles(10, 12, 11, 0, 13, 9, 11, 0),
	gsSP2Triangles(9, 13, 8, 0, 8, 13, 14, 0),
	gsSP2Triangles(14, 13, 11, 0, 6, 14, 11, 0),
	gsSP2Triangles(6, 11, 0, 0, 6, 0, 15, 0),
	gsSP2Triangles(0, 16, 15, 0, 3, 16, 0, 0),
	gsSP2Triangles(5, 16, 3, 0, 15, 16, 5, 0),
	gsSP2Triangles(6, 15, 5, 0, 8, 14, 6, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_Head_mesh_layer_1_vtx_2[14] = {
	{{{103, 64, 90},0, {1131, -22},{0x7, 0x47, 0x69, 0xFF}}},
	{{{101, 88, 80},0, {908, -18},{0x3A, 0x4F, 0x51, 0xFF}}},
	{{{57, 84, 76},0, {842, 592},{0xCD, 0x49, 0x5B, 0xFF}}},
	{{{86, 108, 34},0, {328, 348},{0x29, 0x3A, 0x6A, 0xFF}}},
	{{{61, 111, 31},0, {331, 671},{0xAE, 0x37, 0x4F, 0xFF}}},
	{{{18, 85, 0},0, {230, 1417},{0x95, 0x45, 0x0, 0xFF}}},
	{{{50, 109, 0},0, {34, 882},{0x8D, 0x36, 0x0, 0xFF}}},
	{{{61, 111, -30},0, {331, 671},{0xAE, 0x37, 0xB0, 0xFF}}},
	{{{57, 84, -75},0, {842, 592},{0xCD, 0x49, 0xA5, 0xFF}}},
	{{{86, 108, -33},0, {328, 348},{0x2A, 0x3A, 0x97, 0xFF}}},
	{{{101, 88, -79},0, {908, -18},{0x3B, 0x4F, 0xAF, 0xFF}}},
	{{{103, 64, -89},0, {1131, -22},{0x7, 0x47, 0x97, 0xFF}}},
	{{{9, 36, -48},0, {791, 1142},{0x8A, 0x16, 0xD6, 0xFF}}},
	{{{9, 36, 49},0, {791, 1142},{0x8C, 0x1A, 0x2D, 0xFF}}},
};

Gfx mario_000_displaylist_Head_mesh_layer_1_tri_2[] = {
	gsSPVertex(mario_000_displaylist_Head_mesh_layer_1_vtx_2 + 0, 14, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(3, 4, 2, 0, 5, 2, 4, 0),
	gsSP2Triangles(5, 4, 6, 0, 6, 7, 5, 0),
	gsSP2Triangles(7, 8, 5, 0, 8, 7, 9, 0),
	gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
	gsSP2Triangles(5, 8, 12, 0, 13, 2, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_Head_mesh_layer_1_vtx_3[6] = {
	{{{103, 64, 90},0, {-347, 894},{0x7, 0x47, 0x69, 0xFF}}},
	{{{168, 48, 92},0, {-192, 202},{0xE, 0x58, 0x5B, 0xFF}}},
	{{{184, 88, 0},0, {504, 99},{0xF2, 0x76, 0x2C, 0xFF}}},
	{{{106, 97, 1},0, {507, 898},{0x65, 0x4D, 0x0, 0xFF}}},
	{{{103, 64, -89},0, {-347, 894},{0x7, 0x47, 0x97, 0xFF}}},
	{{{168, 48, -91},0, {-192, 202},{0x10, 0x59, 0xA7, 0xFF}}},
};

Gfx mario_000_displaylist_Head_mesh_layer_1_tri_3[] = {
	gsSPVertex(mario_000_displaylist_Head_mesh_layer_1_vtx_3 + 0, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(2, 4, 3, 0, 2, 5, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_Head_mesh_layer_1_vtx_4[8] = {
	{{{51, 0, 103},0, {952, 1176},{0xB5, 0x9, 0x66, 0xFF}}},
	{{{129, -11, 111},0, {906, 106},{0x2F, 0x2A, 0x6E, 0xFF}}},
	{{{103, 64, 90},0, {-352, 803},{0x7, 0x47, 0x69, 0xFF}}},
	{{{168, 48, 92},0, {-343, -133},{0xE, 0x58, 0x5B, 0xFF}}},
	{{{129, -12, -109},0, {900, 168},{0x31, 0x28, 0x92, 0xFF}}},
	{{{103, 64, -89},0, {-336, 757},{0x7, 0x47, 0x97, 0xFF}}},
	{{{168, 48, -91},0, {-241, -145},{0x10, 0x59, 0xA7, 0xFF}}},
	{{{51, 0, -102},0, {826, 1194},{0xB5, 0x9, 0x9A, 0xFF}}},
};

Gfx mario_000_displaylist_Head_mesh_layer_1_tri_4[] = {
	gsSPVertex(mario_000_displaylist_Head_mesh_layer_1_vtx_4 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_Head_mesh_layer_1_vtx_5[31] = {
	{{{278, 77, -63},0, {-88, -53},{0x56, 0x45, 0xC1, 0xFF}}},
	{{{168, 48, -91},0, {-204, 591},{0xED, 0x4B, 0x9B, 0xFF}}},
	{{{204, 93, -31},0, {209, 400},{0x43, 0x64, 0xD8, 0xFF}}},
	{{{278, 77, 64},0, {1087, -53},{0x5D, 0x44, 0x35, 0xFF}}},
	{{{204, 93, 32},0, {791, 400},{0x3E, 0x65, 0x2E, 0xFF}}},
	{{{168, 48, 92},0, {1197, 591},{0xF0, 0x4D, 0x64, 0xFF}}},
	{{{129, -12, -109},0, {-16, -16},{0xBD, 0x12, 0x96, 0xFF}}},
	{{{140, -56, -123},0, {-16, -16},{0xE9, 0xD3, 0x8B, 0xFF}}},
	{{{73, -103, -51},0, {-16, -16},{0xE1, 0x9A, 0xBB, 0xFF}}},
	{{{196, -6, -133},0, {-16, -16},{0x25, 0x4, 0x87, 0xFF}}},
	{{{168, 48, -91},0, {-16, -16},{0xED, 0x4B, 0x9B, 0xFF}}},
	{{{278, 77, -63},0, {-16, -16},{0x56, 0x45, 0xC1, 0xFF}}},
	{{{280, 0, -41},0, {-16, -16},{0x74, 0xD8, 0xE0, 0xFF}}},
	{{{278, 77, 64},0, {-16, -16},{0x5D, 0x44, 0x35, 0xFF}}},
	{{{280, 0, 42},0, {-16, -16},{0x70, 0xD9, 0x2E, 0xFF}}},
	{{{196, -6, 134},0, {-16, -16},{0x25, 0x3, 0x7A, 0xFF}}},
	{{{168, 48, 92},0, {-16, -16},{0xF0, 0x4D, 0x64, 0xFF}}},
	{{{129, -11, 111},0, {-16, -16},{0xBE, 0x11, 0x6B, 0xFF}}},
	{{{140, -56, 124},0, {-16, -16},{0xEA, 0xD3, 0x75, 0xFF}}},
	{{{73, -103, 52},0, {-16, -16},{0xE0, 0x98, 0x41, 0xFF}}},
	{{{94, -144, 51},0, {-16, -16},{0xDB, 0x92, 0x33, 0xFF}}},
	{{{94, -144, -50},0, {-16, -16},{0xDD, 0x8C, 0xDB, 0xFF}}},
	{{{162, -119, -74},0, {-16, -16},{0x30, 0x9E, 0xBE, 0xFF}}},
	{{{162, -119, 75},0, {-16, -16},{0x33, 0x99, 0x37, 0xFF}}},
	{{{184, 88, 0},0, {-16, -16},{0x89, 0xF, 0xD7, 0xFF}}},
	{{{175, 132, -65},0, {-16, -16},{0xE6, 0x64, 0xB6, 0xFF}}},
	{{{168, 48, -91},0, {-16, -16},{0xED, 0x4B, 0x9B, 0xFF}}},
	{{{184, 155, 0},0, {-16, -16},{0xF7, 0x7F, 0x0, 0xFF}}},
	{{{175, 132, 66},0, {-16, -16},{0xE6, 0x64, 0x4A, 0xFF}}},
	{{{204, 93, 32},0, {-16, -16},{0x3E, 0x65, 0x2E, 0xFF}}},
	{{{204, 93, -31},0, {-16, -16},{0x43, 0x64, 0xD8, 0xFF}}},
};

Gfx mario_000_displaylist_Head_mesh_layer_1_tri_5[] = {
	gsSPVertex(mario_000_displaylist_Head_mesh_layer_1_vtx_5 + 0, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(3, 2, 4, 0, 4, 5, 3, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
	gsSP2Triangles(10, 9, 6, 0, 10, 11, 9, 0),
	gsSP2Triangles(12, 9, 11, 0, 11, 13, 12, 0),
	gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
	gsSP2Triangles(15, 13, 16, 0, 15, 16, 17, 0),
	gsSP2Triangles(17, 18, 15, 0, 19, 18, 17, 0),
	gsSP2Triangles(18, 19, 20, 0, 20, 19, 21, 0),
	gsSP2Triangles(19, 8, 21, 0, 21, 8, 7, 0),
	gsSP2Triangles(21, 7, 22, 0, 9, 22, 7, 0),
	gsSP2Triangles(22, 9, 12, 0, 22, 12, 23, 0),
	gsSP2Triangles(12, 14, 23, 0, 14, 15, 23, 0),
	gsSP2Triangles(18, 23, 15, 0, 23, 18, 20, 0),
	gsSP2Triangles(21, 23, 20, 0, 23, 21, 22, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
	gsSP2Triangles(28, 27, 24, 0, 16, 28, 24, 0),
	gsSP2Triangles(29, 28, 16, 0, 29, 27, 28, 0),
	gsSP2Triangles(30, 27, 29, 0, 25, 27, 30, 0),
	gsSP1Triangle(25, 30, 26, 0),
	gsSPEndDisplayList(),
};

Vtx mario_switchboneHead_displaylistbone_mesh_layer_1_vtx_0[56] = {
	{{{206, 70, -97},0, {-16, -16},{0x15, 0x42, 0x95, 0xFF}}},
	{{{160, 48, -91},0, {-16, -16},{0xF0, 0x48, 0x98, 0xFF}}},
	{{{148, 60, -71},0, {-16, -16},{0xD9, 0x70, 0xD3, 0xFF}}},
	{{{182, -9, -115},0, {-16, -16},{0x2D, 0xF8, 0x89, 0xFF}}},
	{{{221, 35, -84},0, {-16, -16},{0x6D, 0xF1, 0xC0, 0xFF}}},
	{{{248, 104, -43},0, {-16, -16},{0x68, 0x42, 0xDF, 0xFF}}},
	{{{201, 125, -13},0, {-16, -16},{0xF2, 0x7E, 0x0, 0xFF}}},
	{{{165, 67, -47},0, {-16, -16},{0xC1, 0x65, 0xD4, 0xFF}}},
	{{{159, 92, 0},0, {-16, -16},{0xB4, 0x66, 0xA, 0xFF}}},
	{{{166, 69, 45},0, {-16, -16},{0xCD, 0x6E, 0x26, 0xFF}}},
	{{{209, 86, 60},0, {-16, -16},{0x22, 0x69, 0x3F, 0xFF}}},
	{{{200, 75, 84},0, {-16, -16},{0x19, 0x59, 0x58, 0xFF}}},
	{{{147, 60, 72},0, {-16, -16},{0xD6, 0x6E, 0x31, 0xFF}}},
	{{{160, 48, 92},0, {-16, -16},{0xFA, 0x49, 0x68, 0xFF}}},
	{{{181, -9, 116},0, {-16, -16},{0x32, 0xFF, 0x75, 0xFF}}},
	{{{120, -11, 111},0, {-16, -16},{0x6, 0xB, 0x7E, 0xFF}}},
	{{{145, -83, 105},0, {-16, -16},{0x2, 0xB9, 0x6A, 0xFF}}},
	{{{64, -103, 52},0, {-16, -16},{0x13, 0x8F, 0x36, 0xFF}}},
	{{{56, -45, 77},0, {-16, -16},{0xCB, 0xCB, 0x67, 0xFF}}},
	{{{31, -85, 87},0, {-16, -16},{0xE9, 0xEE, 0x7C, 0xFF}}},
	{{{3, -24, 33},0, {-16, -16},{0x86, 0xEB, 0x1C, 0xFF}}},
	{{{9, -88, 59},0, {-16, -16},{0x8A, 0xDB, 0x1E, 0xFF}}},
	{{{31, -84, 0},0, {-16, -16},{0xA2, 0xAA, 0x0, 0xFF}}},
	{{{3, -24, -32},0, {-16, -16},{0x86, 0xEB, 0xE4, 0xFF}}},
	{{{9, -88, -58},0, {-16, -16},{0x8A, 0xDB, 0xE3, 0xFF}}},
	{{{31, -85, -86},0, {-16, -16},{0xE9, 0xEE, 0x84, 0xFF}}},
	{{{56, -45, -76},0, {-16, -16},{0xCC, 0xCB, 0x99, 0xFF}}},
	{{{64, -103, -51},0, {-16, -16},{0x13, 0x8F, 0xCA, 0xFF}}},
	{{{120, -12, -109},0, {-16, -16},{0x7, 0xA, 0x82, 0xFF}}},
	{{{145, -84, -104},0, {-16, -16},{0x4, 0xB9, 0x97, 0xFF}}},
	{{{179, -92, -71},0, {-16, -16},{0x4E, 0xA9, 0xCF, 0xFF}}},
	{{{234, -22, -1},0, {-16, -16},{0x7A, 0xDE, 0xFF, 0xFF}}},
	{{{230, 49, 62},0, {-16, -16},{0x73, 0xC, 0x35, 0xFF}}},
	{{{234, -22, -1},0, {-16, -16},{0x7A, 0xDE, 0xFF, 0xFF}}},
	{{{221, 35, -84},0, {-16, -16},{0x6D, 0xF1, 0xC0, 0xFF}}},
	{{{248, 104, -43},0, {-16, -16},{0x68, 0x42, 0xDF, 0xFF}}},
	{{{209, 86, 60},0, {-16, -16},{0x22, 0x69, 0x3F, 0xFF}}},
	{{{201, 125, -13},0, {-16, -16},{0xF2, 0x7E, 0x0, 0xFF}}},
	{{{200, 75, 84},0, {-16, -16},{0x19, 0x59, 0x58, 0xFF}}},
	{{{181, -9, 116},0, {-16, -16},{0x32, 0xFF, 0x75, 0xFF}}},
	{{{185, -91, 72},0, {-16, -16},{0x50, 0xAB, 0x32, 0xFF}}},
	{{{145, -83, 105},0, {-16, -16},{0x2, 0xB9, 0x6A, 0xFF}}},
	{{{119, -134, 0},0, {-16, -16},{0x4, 0x81, 0x0, 0xFF}}},
	{{{64, -103, 52},0, {-16, -16},{0x13, 0x8F, 0x36, 0xFF}}},
	{{{64, -103, -51},0, {-16, -16},{0x13, 0x8F, 0xCA, 0xFF}}},
	{{{31, -84, 0},0, {-16, -16},{0xA2, 0xAA, 0x0, 0xFF}}},
	{{{30, -116, 36},0, {-16, -16},{0xDC, 0x90, 0xD0, 0xFF}}},
	{{{46, -120, 68},0, {-16, -16},{0x19, 0x94, 0x3E, 0xFF}}},
	{{{31, -85, 87},0, {-16, -16},{0xE9, 0xEE, 0x7C, 0xFF}}},
	{{{9, -88, 59},0, {-16, -16},{0x8A, 0xDB, 0x1E, 0xFF}}},
	{{{30, -116, -35},0, {-16, -16},{0xDC, 0x90, 0x31, 0xFF}}},
	{{{9, -88, -58},0, {-16, -16},{0x8A, 0xDB, 0xE3, 0xFF}}},
	{{{46, -120, -67},0, {-16, -16},{0x19, 0x94, 0xC2, 0xFF}}},
	{{{31, -85, -86},0, {-16, -16},{0xE9, 0xEE, 0x84, 0xFF}}},
	{{{179, -92, -71},0, {-16, -16},{0x4E, 0xA9, 0xCF, 0xFF}}},
	{{{145, -84, -104},0, {-16, -16},{0x4, 0xB9, 0x97, 0xFF}}},
};

Gfx mario_switchboneHead_displaylistbone_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_switchboneHead_displaylistbone_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(0, 6, 5, 0, 0, 7, 6, 0),
	gsSP2Triangles(7, 0, 2, 0, 7, 8, 6, 0),
	gsSP2Triangles(6, 8, 9, 0, 10, 6, 9, 0),
	gsSP2Triangles(9, 11, 10, 0, 9, 12, 11, 0),
	gsSP2Triangles(13, 11, 12, 0, 13, 14, 11, 0),
	gsSP2Triangles(13, 15, 14, 0, 16, 14, 15, 0),
	gsSP2Triangles(17, 16, 15, 0, 17, 15, 18, 0),
	gsSP2Triangles(18, 19, 17, 0, 19, 18, 20, 0),
	gsSP2Triangles(20, 21, 19, 0, 21, 20, 22, 0),
	gsSP2Triangles(23, 22, 20, 0, 22, 23, 24, 0),
	gsSP2Triangles(25, 24, 23, 0, 23, 26, 25, 0),
	gsSP2Triangles(27, 25, 26, 0, 26, 28, 27, 0),
	gsSP2Triangles(28, 29, 27, 0, 3, 29, 28, 0),
	gsSP2Triangles(28, 1, 3, 0, 3, 30, 29, 0),
	gsSP2Triangles(30, 3, 4, 0, 31, 30, 4, 0),
	gsSPVertex(mario_switchboneHead_displaylistbone_mesh_layer_1_vtx_0 + 32, 24, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(4, 0, 3, 0, 5, 4, 3, 0),
	gsSP2Triangles(6, 0, 4, 0, 7, 0, 6, 0),
	gsSP2Triangles(0, 7, 8, 0, 9, 8, 7, 0),
	gsSP2Triangles(10, 8, 9, 0, 11, 10, 9, 0),
	gsSP2Triangles(11, 12, 10, 0, 13, 12, 11, 0),
	gsSP2Triangles(13, 11, 14, 0, 11, 15, 14, 0),
	gsSP2Triangles(16, 15, 11, 0, 17, 15, 16, 0),
	gsSP2Triangles(14, 15, 17, 0, 13, 14, 17, 0),
	gsSP2Triangles(13, 18, 12, 0, 19, 18, 13, 0),
	gsSP2Triangles(19, 20, 18, 0, 21, 20, 19, 0),
	gsSP2Triangles(20, 21, 12, 0, 18, 20, 12, 0),
	gsSP2Triangles(1, 0, 8, 0, 8, 22, 1, 0),
	gsSP2Triangles(10, 22, 8, 0, 22, 10, 23, 0),
	gsSP1Triangle(23, 10, 12, 0),
	gsSPEndDisplayList(),
};

Vtx mario_switchboneHead_displaylistbone_mesh_layer_1_vtx_1[8] = {
	{{{120, -12, -109},0, {900, 168},{0x7, 0xA, 0x82, 0xFF}}},
	{{{94, 64, -89},0, {-336, 757},{0x11, 0x40, 0x93, 0xFF}}},
	{{{160, 48, -91},0, {-241, -145},{0xF0, 0x48, 0x98, 0xFF}}},
	{{{42, 0, -102},0, {826, 1194},{0xB2, 0x4, 0x9C, 0xFF}}},
	{{{42, 0, 103},0, {952, 1176},{0xB2, 0x4, 0x64, 0xFF}}},
	{{{120, -11, 111},0, {906, 106},{0x6, 0xB, 0x7E, 0xFF}}},
	{{{94, 64, 90},0, {-352, 803},{0x11, 0x41, 0x6C, 0xFF}}},
	{{{160, 48, 92},0, {-343, -133},{0xFA, 0x49, 0x68, 0xFF}}},
};

Gfx mario_switchboneHead_displaylistbone_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_switchboneHead_displaylistbone_mesh_layer_1_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 7, 6, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_switchboneHead_displaylistbone_mesh_layer_1_vtx_2[6] = {
	{{{175, 88, 0},0, {504, 99},{0x14, 0x7D, 0x0, 0xFF}}},
	{{{160, 48, -91},0, {-192, 202},{0xF0, 0x48, 0x98, 0xFF}}},
	{{{94, 64, -89},0, {-347, 894},{0x11, 0x40, 0x93, 0xFF}}},
	{{{97, 97, 1},0, {507, 898},{0x6A, 0x46, 0x0, 0xFF}}},
	{{{94, 64, 90},0, {-347, 894},{0x11, 0x41, 0x6C, 0xFF}}},
	{{{160, 48, 92},0, {-192, 202},{0xFA, 0x49, 0x68, 0xFF}}},
};

Gfx mario_switchboneHead_displaylistbone_mesh_layer_1_tri_2[] = {
	gsSPVertex(mario_switchboneHead_displaylistbone_mesh_layer_1_vtx_2 + 0, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 0, 3, 0, 4, 5, 0, 0),
	gsSPEndDisplayList(),
};

Vtx mario_switchboneHead_displaylistbone_mesh_layer_1_vtx_3[58] = {
	{{{92, 88, 80},0, {-16, -16},{0x42, 0x4E, 0x4B, 0xFF}}},
	{{{94, 64, 90},0, {-16, -16},{0x11, 0x41, 0x6C, 0xFF}}},
	{{{97, 97, 1},0, {708, 942},{0x6A, 0x46, 0x0, 0xFF}}},
	{{{77, 108, 34},0, {326, 352},{0x37, 0x31, 0x68, 0xFF}}},
	{{{92, 88, 80},0, {882, -34},{0x42, 0x4E, 0x4B, 0xFF}}},
	{{{97, 97, 1},0, {208, 130},{0x6A, 0x46, 0x0, 0xFF}}},
	{{{92, 88, -79},0, {906, -20},{0x43, 0x4E, 0xB5, 0xFF}}},
	{{{77, 108, -33},0, {346, 328},{0x37, 0x32, 0x99, 0xFF}}},
	{{{97, 97, 1},0, {258, 84},{0x6A, 0x46, 0x0, 0xFF}}},
	{{{94, 64, -89},0, {-35, 89},{0x11, 0x40, 0x93, 0xFF}}},
	{{{92, 88, -79},0, {-176, 882},{0x43, 0x4E, 0xB5, 0xFF}}},
	{{{97, 97, 1},0, {240, 954},{0x6A, 0x46, 0x0, 0xFF}}},
	{{{42, 0, 103},0, {1575, 393},{0xB2, 0x4, 0x64, 0xFF}}},
	{{{48, 84, 76},0, {872, 548},{0xCB, 0x4D, 0x57, 0xFF}}},
	{{{0, 36, 49},0, {876, 1074},{0x8C, 0x14, 0x30, 0xFF}}},
	{{{42, 0, 103},0, {-16, -16},{0xB2, 0x4, 0x64, 0xFF}}},
	{{{48, 84, 76},0, {842, 592},{0xCB, 0x4D, 0x57, 0xFF}}},
	{{{0, 36, -48},0, {790, 1146},{0x8C, 0x14, 0xD0, 0xFF}}},
	{{{48, 84, -75},0, {840, 592},{0xCB, 0x4D, 0xA9, 0xFF}}},
	{{{42, 0, -102},0, {1513, 502},{0xB2, 0x4, 0x9C, 0xFF}}},
	{{{42, 0, -102},0, {1550, 425},{0xB2, 0x4, 0x9C, 0xFF}}},
	{{{48, 84, -75},0, {842, 592},{0xCB, 0x4D, 0xA9, 0xFF}}},
	{{{0, 36, 49},0, {-16, -16},{0x8C, 0x14, 0x30, 0xFF}}},
	{{{3, -24, 33},0, {-16, -16},{0x86, 0xEB, 0x1C, 0xFF}}},
	{{{42, 0, 103},0, {-16, -16},{0xB2, 0x4, 0x64, 0xFF}}},
	{{{56, -45, 77},0, {-16, -16},{0xCB, 0xCB, 0x67, 0xFF}}},
	{{{64, -25, 135},0, {-16, -16},{0xCA, 0xF6, 0x73, 0xFF}}},
	{{{95, -55, 83},0, {-16, -16},{0x7, 0x89, 0x2C, 0xFF}}},
	{{{102, -33, 135},0, {-16, -16},{0x34, 0xD9, 0x6D, 0xFF}}},
	{{{120, -11, 111},0, {-16, -16},{0x6, 0xB, 0x7E, 0xFF}}},
	{{{0, 36, -48},0, {-16, -16},{0x8C, 0x14, 0xD0, 0xFF}}},
	{{{3, -24, -32},0, {-16, -16},{0x86, 0xEB, 0xE4, 0xFF}}},
	{{{42, 0, -102},0, {-16, -16},{0xB2, 0x4, 0x9C, 0xFF}}},
	{{{3, -24, -32},0, {-16, -16},{0x86, 0xEB, 0xE4, 0xFF}}},
	{{{0, 36, -48},0, {-16, -16},{0x8C, 0x14, 0xD0, 0xFF}}},
	{{{56, -45, -76},0, {-16, -16},{0xCC, 0xCB, 0x99, 0xFF}}},
	{{{64, -25, -134},0, {-16, -16},{0xCB, 0xF7, 0x8D, 0xFF}}},
	{{{120, -12, -109},0, {-16, -16},{0x7, 0xA, 0x82, 0xFF}}},
	{{{102, -33, -134},0, {-16, -16},{0x34, 0xDB, 0x92, 0xFF}}},
	{{{95, -54, -82},0, {-16, -16},{0x8, 0x89, 0xD5, 0xFF}}},
	{{{0, 36, -48},0, {790, 1146},{0x8C, 0x14, 0xD0, 0xFF}}},
	{{{3, -24, 33},0, {-16, -16},{0x86, 0xEB, 0x1C, 0xFF}}},
	{{{0, 36, 49},0, {876, 1074},{0x8C, 0x14, 0x30, 0xFF}}},
	{{{10, 85, 0},0, {-16, -16},{0x97, 0x48, 0x0, 0xFF}}},
	{{{50, 147, 41},0, {-16, -16},{0xBC, 0x21, 0x66, 0xFF}}},
	{{{52, 111, 31},0, {-16, -16},{0xB1, 0x32, 0x56, 0xFF}}},
	{{{77, 108, 34},0, {-16, -16},{0x37, 0x31, 0x68, 0xFF}}},
	{{{33, 148, 0},0, {-16, -16},{0x84, 0x1D, 0x0, 0xFF}}},
	{{{59, 181, 1},0, {-16, -16},{0xD7, 0x78, 0x1, 0xFF}}},
	{{{97, 146, 45},0, {-16, -16},{0x3D, 0x15, 0x6D, 0xFF}}},
	{{{97, 97, 1},0, {-16, -16},{0x6A, 0x46, 0x0, 0xFF}}},
	{{{118, 144, 0},0, {-16, -16},{0x7F, 0x2, 0xFF, 0xFF}}},
	{{{98, 146, -43},0, {-16, -16},{0x3F, 0x17, 0x94, 0xFF}}},
	{{{77, 108, -33},0, {-16, -16},{0x37, 0x32, 0x99, 0xFF}}},
	{{{50, 147, -40},0, {-16, -16},{0xBE, 0x23, 0x99, 0xFF}}},
	{{{52, 111, -30},0, {-16, -16},{0xB1, 0x32, 0xA9, 0xFF}}},
	{{{41, 109, 0},0, {-16, -16},{0x8C, 0x34, 0x0, 0xFF}}},
	{{{100, 179, 1},0, {-16, -16},{0x3D, 0x70, 0x0, 0xFF}}},
};

Gfx mario_switchboneHead_displaylistbone_mesh_layer_1_tri_3[] = {
	gsSPVertex(mario_switchboneHead_displaylistbone_mesh_layer_1_vtx_3 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 15, 1, 16, 0),
	gsSP2Triangles(17, 18, 19, 0, 9, 20, 21, 0),
	gsSP2Triangles(22, 23, 24, 0, 23, 25, 24, 0),
	gsSP2Triangles(26, 24, 25, 0, 26, 25, 27, 0),
	gsSP2Triangles(26, 27, 28, 0, 27, 29, 28, 0),
	gsSP2Triangles(26, 28, 29, 0, 24, 26, 29, 0),
	gsSP1Triangle(30, 31, 23, 0),
	gsSPVertex(mario_switchboneHead_displaylistbone_mesh_layer_1_vtx_3 + 32, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(0, 4, 3, 0, 5, 4, 0, 0),
	gsSP2Triangles(5, 6, 4, 0, 6, 5, 7, 0),
	gsSP2Triangles(4, 6, 7, 0, 3, 4, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
	gsSP2Triangles(12, 13, 14, 0, 13, 12, 15, 0),
	gsSP2Triangles(15, 12, 16, 0, 12, 17, 16, 0),
	gsSP2Triangles(17, 12, 14, 0, 14, 18, 17, 0),
	gsSP2Triangles(19, 17, 18, 0, 18, 20, 19, 0),
	gsSP2Triangles(20, 18, 21, 0, 22, 20, 21, 0),
	gsSP2Triangles(21, 23, 22, 0, 15, 22, 23, 0),
	gsSP2Triangles(23, 24, 15, 0, 15, 24, 13, 0),
	gsSP2Triangles(15, 16, 22, 0, 16, 20, 22, 0),
	gsSP2Triangles(20, 16, 25, 0, 16, 17, 25, 0),
	gsSP2Triangles(25, 17, 19, 0, 25, 19, 20, 0),
	gsSPEndDisplayList(),
};

Vtx mario_switchboneHead_displaylistbone_mesh_layer_1_vtx_4[14] = {
	{{{94, 64, 90},0, {1131, -22},{0x11, 0x41, 0x6C, 0xFF}}},
	{{{92, 88, 80},0, {908, -18},{0x42, 0x4E, 0x4B, 0xFF}}},
	{{{48, 84, 76},0, {842, 592},{0xCB, 0x4D, 0x57, 0xFF}}},
	{{{77, 108, 34},0, {328, 348},{0x37, 0x31, 0x68, 0xFF}}},
	{{{52, 111, 31},0, {331, 671},{0xB1, 0x32, 0x56, 0xFF}}},
	{{{10, 85, 0},0, {230, 1417},{0x97, 0x48, 0x0, 0xFF}}},
	{{{41, 109, 0},0, {34, 882},{0x8C, 0x34, 0x0, 0xFF}}},
	{{{52, 111, -30},0, {331, 671},{0xB1, 0x32, 0xA9, 0xFF}}},
	{{{48, 84, -75},0, {842, 592},{0xCB, 0x4D, 0xA9, 0xFF}}},
	{{{77, 108, -33},0, {328, 348},{0x37, 0x32, 0x99, 0xFF}}},
	{{{92, 88, -79},0, {908, -18},{0x43, 0x4E, 0xB5, 0xFF}}},
	{{{94, 64, -89},0, {1131, -22},{0x11, 0x40, 0x93, 0xFF}}},
	{{{0, 36, -48},0, {791, 1142},{0x8C, 0x14, 0xD0, 0xFF}}},
	{{{0, 36, 49},0, {791, 1142},{0x8C, 0x14, 0x30, 0xFF}}},
};

Gfx mario_switchboneHead_displaylistbone_mesh_layer_1_tri_4[] = {
	gsSPVertex(mario_switchboneHead_displaylistbone_mesh_layer_1_vtx_4 + 0, 14, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(3, 4, 2, 0, 5, 2, 4, 0),
	gsSP2Triangles(5, 4, 6, 0, 6, 7, 5, 0),
	gsSP2Triangles(7, 8, 5, 0, 8, 7, 9, 0),
	gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
	gsSP2Triangles(5, 8, 12, 0, 13, 2, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_001_RWing_mesh_layer_4_vtx_0[3] = {
	{{{-157, -4, 21},0, {-509, 2059},{0xEA, 0x0, 0x83, 0xFF}}},
	{{{6, 340, -6},0, {1061, -1152},{0xEA, 0x0, 0x83, 0xFF}}},
	{{{182, 2, -39},0, {2903, 1940},{0xEA, 0x0, 0x83, 0xFF}}},
};

Gfx mario_000_displaylist_001_RWing_mesh_layer_4_tri_0[] = {
	gsSPVertex(mario_000_displaylist_001_RWing_mesh_layer_4_vtx_0 + 0, 3, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_002_LWing_mesh_layer_4_vtx_0[3] = {
	{{{-157, -4, -21},0, {-509, 2059},{0xEA, 0x0, 0x7D, 0xFF}}},
	{{{182, 2, 39},0, {2903, 1940},{0xEA, 0x0, 0x7D, 0xFF}}},
	{{{6, 340, 6},0, {1061, -1152},{0xEA, 0x0, 0x7D, 0xFF}}},
};

Gfx mario_000_displaylist_002_LWing_mesh_layer_4_tri_0[] = {
	gsSPVertex(mario_000_displaylist_002_LWing_mesh_layer_4_vtx_0 + 0, 3, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_003_LShoulder_skinned_mesh_layer_1_vtx_0[5] = {
	{{{53, 51, 75},0, {-16, -16},{0x28, 0x4F, 0x5B, 0xFF}}},
	{{{89, 14, 62},0, {-16, -16},{0x6C, 0x2B, 0x33, 0xFF}}},
	{{{93, -29, 63},0, {-16, -16},{0x63, 0xD4, 0x43, 0xFF}}},
	{{{29, -2, 91},0, {-16, -16},{0x4, 0x12, 0x7E, 0xFF}}},
	{{{52, -38, 90},0, {-16, -16},{0x1B, 0xCD, 0x71, 0xFF}}},
};

Gfx mario_000_offset_003_LShoulder_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_003_LShoulder_skinned_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_003_LShoulder_mesh_layer_1_vtx_0[5] = {
	{{{6, -16, 41},0, {-16, -16},{0x91, 0xC5, 0x12, 0xFF}}},
	{{{31, -37, 4},0, {-16, -16},{0xD3, 0x89, 0x2, 0xFF}}},
	{{{60, -14, -25},0, {-16, -16},{0xD6, 0xE4, 0x8B, 0xFF}}},
	{{{80, 21, -12},0, {-16, -16},{0xD9, 0x6D, 0xCC, 0xFF}}},
	{{{80, 19, 24},0, {-16, -16},{0xD6, 0x5F, 0x4A, 0xFF}}},
};

Gfx mario_000_offset_003_LShoulder_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_003_LShoulder_mesh_layer_1_vtx_0 + 0, 5, 5),
	gsSP2Triangles(1, 5, 2, 0, 0, 5, 1, 0),
	gsSP2Triangles(5, 0, 6, 0, 6, 0, 7, 0),
	gsSP2Triangles(0, 3, 7, 0, 7, 3, 8, 0),
	gsSP2Triangles(3, 4, 8, 0, 4, 2, 8, 0),
	gsSP2Triangles(2, 9, 8, 0, 2, 5, 9, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_003_LShoulder_mesh_layer_1_vtx_1[4] = {
	{{{6, -16, 41},0, {-16, -16},{0x91, 0xC5, 0x12, 0xFF}}},
	{{{60, -16, 34},0, {-16, -16},{0xEA, 0xE7, 0x7B, 0xFF}}},
	{{{80, 19, 24},0, {-16, -16},{0xD6, 0x5F, 0x4A, 0xFF}}},
	{{{31, -37, 4},0, {-16, -16},{0xD3, 0x89, 0x2, 0xFF}}},
};

Gfx mario_000_offset_003_LShoulder_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_000_offset_003_LShoulder_mesh_layer_1_vtx_1 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_004_LArm_skinned_mesh_layer_1_vtx_0[5] = {
	{{{80, 19, 24},0, {-16, -16},{0xD6, 0x5F, 0x4A, 0xFF}}},
	{{{80, 21, -12},0, {-16, -16},{0xD9, 0x6D, 0xCC, 0xFF}}},
	{{{60, -16, 34},0, {-16, -16},{0xEA, 0xE7, 0x7B, 0xFF}}},
	{{{31, -37, 4},0, {-16, -16},{0xD3, 0x89, 0x2, 0xFF}}},
	{{{60, -14, -25},0, {-16, -16},{0xD6, 0xE4, 0x8B, 0xFF}}},
};

Gfx mario_000_offset_004_LArm_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_004_LArm_skinned_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_004_LArm_mesh_layer_1_vtx_0[5] = {
	{{{58, 14, 22},0, {-16, -16},{0x96, 0xF, 0x44, 0xFF}}},
	{{{58, 16, -10},0, {-16, -16},{0x89, 0x24, 0xE6, 0xFF}}},
	{{{57, -17, 31},0, {-16, -16},{0xCD, 0xBE, 0x60, 0xFF}}},
	{{{56, -34, 5},0, {-16, -16},{0xD1, 0x8B, 0xF3, 0xFF}}},
	{{{57, -20, -18},0, {-16, -16},{0xBC, 0xD4, 0x9E, 0xFF}}},
};

Gfx mario_000_offset_004_LArm_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_004_LArm_mesh_layer_1_vtx_0 + 0, 5, 5),
	gsSP2Triangles(0, 5, 6, 0, 0, 2, 5, 0),
	gsSP2Triangles(2, 7, 5, 0, 2, 3, 7, 0),
	gsSP2Triangles(3, 8, 7, 0, 3, 4, 8, 0),
	gsSP2Triangles(4, 9, 8, 0, 4, 1, 9, 0),
	gsSP2Triangles(1, 6, 9, 0, 1, 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_005_LHand_skinned_mesh_layer_1_vtx_0[5] = {
	{{{57, -20, -18},0, {-16, -16},{0xBC, 0xD4, 0x9E, 0xFF}}},
	{{{58, 16, -10},0, {-16, -16},{0x89, 0x24, 0xE6, 0xFF}}},
	{{{57, -17, 31},0, {-16, -16},{0xCD, 0xBE, 0x60, 0xFF}}},
	{{{56, -34, 5},0, {-16, -16},{0xD1, 0x8B, 0xF3, 0xFF}}},
	{{{58, 14, 22},0, {-16, 1008},{0x96, 0xF, 0x44, 0xFF}}},
};

Gfx mario_000_offset_005_LHand_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_005_LHand_skinned_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_005_LHand_mesh_layer_1_vtx_0[5] = {
	{{{-10, 26, -29},0, {-16, -16},{0xB8, 0x31, 0xA3, 0xFF}}},
	{{{17, -38, -30},0, {-16, -16},{0x5, 0xAB, 0xA1, 0xFF}}},
	{{{27, -58, 15},0, {-16, -16},{0x18, 0x8A, 0x2A, 0xFF}}},
	{{{5, -6, 45},0, {-16, -16},{0xE4, 0xFF, 0x7C, 0xFF}}},
	{{{-18, 45, 17},0, {-16, -16},{0xA4, 0x50, 0x25, 0xFF}}},
};

Gfx mario_000_offset_005_LHand_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_005_LHand_mesh_layer_1_vtx_0 + 0, 5, 5),
	gsSP2Triangles(5, 0, 1, 0, 5, 6, 0, 0),
	gsSP2Triangles(6, 3, 0, 0, 6, 7, 3, 0),
	gsSP2Triangles(7, 2, 3, 0, 7, 8, 2, 0),
	gsSP2Triangles(2, 8, 4, 0, 4, 8, 9, 0),
	gsSP2Triangles(9, 1, 4, 0, 9, 5, 1, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_005_LHand_mesh_layer_1_vtx_1[10] = {
	{{{-1, 39, 14},0, {-16, -16},{0xDF, 0x73, 0x2A, 0xFF}}},
	{{{4, 24, -22},0, {-16, -16},{0xF2, 0x47, 0x97, 0xFF}}},
	{{{-10, 26, -29},0, {-16, -16},{0xB8, 0x31, 0xA3, 0xFF}}},
	{{{26, -25, -23},0, {-16, -16},{0x1A, 0xD7, 0x8B, 0xFF}}},
	{{{17, -38, -30},0, {-16, -16},{0x5, 0xAB, 0xA1, 0xFF}}},
	{{{34, -41, 12},0, {-16, -16},{0x45, 0x9B, 0x23, 0xFF}}},
	{{{27, -58, 15},0, {-16, -16},{0x18, 0x8A, 0x2A, 0xFF}}},
	{{{5, -6, 45},0, {-16, -16},{0xE4, 0xFF, 0x7C, 0xFF}}},
	{{{17, -1, 36},0, {-16, -16},{0x3, 0x2, 0x7F, 0xFF}}},
	{{{-18, 45, 17},0, {-16, -16},{0xA4, 0x50, 0x25, 0xFF}}},
};

Gfx mario_000_offset_005_LHand_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_000_offset_005_LHand_mesh_layer_1_vtx_1 + 0, 10, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(3, 4, 2, 0, 4, 3, 5, 0),
	gsSP2Triangles(5, 6, 4, 0, 7, 6, 5, 0),
	gsSP2Triangles(5, 8, 7, 0, 7, 8, 0, 0),
	gsSP2Triangles(0, 9, 7, 0, 2, 9, 0, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_003_LHand_mesh_layer_1_vtx_0[12] = {
	{{{-1, 39, 14},0, {-16, -16},{0xEF, 0x77, 0x2A, 0xFF}}},
	{{{17, -1, 36},0, {-16, -16},{0x2, 0xFF, 0x7F, 0xFF}}},
	{{{36, 6, 51},0, {-16, -16},{0xFB, 0xFB, 0x7F, 0xFF}}},
	{{{34, -41, 12},0, {-16, -16},{0x50, 0xA2, 0x20, 0xFF}}},
	{{{88, -33, 13},0, {-16, -16},{0x5D, 0xB1, 0x22, 0xFF}}},
	{{{80, -8, -47},0, {-16, -16},{0x42, 0xE4, 0x97, 0xFF}}},
	{{{26, -25, -23},0, {-16, -16},{0x30, 0xD3, 0x93, 0xFF}}},
	{{{4, 24, -22},0, {-16, -16},{0x7, 0x41, 0x93, 0xFF}}},
	{{{44, 59, -24},0, {-16, -16},{0x5, 0x69, 0xB8, 0xFF}}},
	{{{36, 64, 17},0, {-16, -16},{0xFC, 0x76, 0x2F, 0xFF}}},
	{{{86, 29, 50},0, {-16, -16},{0x47, 0x23, 0x63, 0xFF}}},
	{{{99, 40, -7},0, {-16, -16},{0x6B, 0x41, 0xEA, 0xFF}}},
};

Gfx mario_000_displaylist_003_LHand_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_displaylist_003_LHand_mesh_layer_1_vtx_0 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(3, 4, 2, 0, 5, 4, 3, 0),
	gsSP2Triangles(6, 5, 3, 0, 6, 7, 5, 0),
	gsSP2Triangles(5, 7, 8, 0, 0, 8, 7, 0),
	gsSP2Triangles(8, 0, 9, 0, 2, 9, 0, 0),
	gsSP2Triangles(2, 10, 9, 0, 4, 10, 2, 0),
	gsSP2Triangles(4, 11, 10, 0, 5, 11, 4, 0),
	gsSP2Triangles(5, 8, 11, 0, 9, 11, 8, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_layer_1_vtx_0[15] = {
	{{{17, -1, 27},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{77, 41, 21},0, {-16, -16},{0x1D, 0x24, 0x76, 0xFF}}},
	{{{-1, 39, 5},0, {-16, -16},{0xC1, 0x60, 0x37, 0xFF}}},
	{{{83, -17, 10},0, {-16, -16},{0x45, 0xC4, 0x58, 0xFF}}},
	{{{34, -41, 3},0, {-16, -16},{0x1, 0x90, 0x3D, 0xFF}}},
	{{{89, -47, -37},0, {-16, -16},{0x49, 0xAA, 0xC5, 0xFF}}},
	{{{26, -25, -32},0, {-16, -16},{0xE0, 0xC6, 0x94, 0xFF}}},
	{{{26, 41, -41},0, {-16, -16},{0xD3, 0x2E, 0x93, 0xFF}}},
	{{{4, 24, -31},0, {-16, -16},{0xB7, 0x26, 0x9F, 0xFF}}},
	{{{70, 89, -20},0, {-16, -16},{0xEE, 0x7D, 0xF8, 0xFF}}},
	{{{121, 73, -21},0, {-16, -16},{0x54, 0x56, 0x29, 0xFF}}},
	{{{137, 31, -23},0, {-16, -16},{0x7B, 0xE1, 0xF5, 0xFF}}},
	{{{89, -6, -27},0, {-16, -16},{0x55, 0xE1, 0xA7, 0xFF}}},
	{{{78, 59, -34},0, {-16, -16},{0xF6, 0x13, 0x83, 0xFF}}},
	{{{119, 70, -42},0, {-16, -16},{0x37, 0x38, 0x9C, 0xFF}}},
};

Gfx mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_layer_1_vtx_0 + 0, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 3, 0, 0, 5, 3, 4, 0),
	gsSP2Triangles(4, 6, 5, 0, 5, 6, 7, 0),
	gsSP2Triangles(6, 8, 7, 0, 2, 7, 8, 0),
	gsSP2Triangles(7, 2, 9, 0, 1, 9, 2, 0),
	gsSP2Triangles(10, 9, 1, 0, 11, 10, 1, 0),
	gsSP2Triangles(3, 11, 1, 0, 12, 11, 3, 0),
	gsSP2Triangles(5, 12, 3, 0, 5, 7, 12, 0),
	gsSP2Triangles(7, 13, 12, 0, 9, 13, 7, 0),
	gsSP2Triangles(14, 13, 9, 0, 9, 10, 14, 0),
	gsSP2Triangles(10, 11, 14, 0, 11, 12, 14, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_006_Rshoulder_skinned_mesh_layer_1_vtx_0[5] = {
	{{{29, -2, -91},0, {-16, -16},{0x8, 0x9, 0x82, 0xFF}}},
	{{{52, 51, -74},0, {-16, -16},{0x28, 0x4A, 0xA1, 0xFF}}},
	{{{93, -29, -62},0, {-16, -16},{0x63, 0xD3, 0xBE, 0xFF}}},
	{{{54, -44, -80},0, {-16, -16},{0x22, 0xC3, 0x96, 0xFF}}},
	{{{89, 14, -61},0, {-16, -16},{0x67, 0x29, 0xC2, 0xFF}}},
};

Gfx mario_000_offset_006_Rshoulder_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_006_Rshoulder_skinned_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_006_Rshoulder_mesh_layer_1_vtx_0[5] = {
	{{{60, -17, 29},0, {-16, -16},{0xD9, 0xCB, 0x6D, 0xFF}}},
	{{{80, 18, 19},0, {-16, -16},{0xE0, 0x67, 0x43, 0xFF}}},
	{{{80, 20, -18},0, {-16, -16},{0xDD, 0x6A, 0xC3, 0xFF}}},
	{{{6, -15, -39},0, {-16, -16},{0xE9, 0xF, 0x84, 0xFF}}},
	{{{31, -38, -3},0, {-16, -16},{0xC4, 0x90, 0xF7, 0xFF}}},
};

Gfx mario_000_offset_006_Rshoulder_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_006_Rshoulder_mesh_layer_1_vtx_0 + 0, 5, 5),
	gsSP2Triangles(5, 0, 1, 0, 5, 6, 0, 0),
	gsSP2Triangles(6, 3, 0, 0, 6, 2, 3, 0),
	gsSP2Triangles(6, 7, 2, 0, 7, 8, 2, 0),
	gsSP2Triangles(4, 2, 8, 0, 4, 8, 1, 0),
	gsSP2Triangles(9, 1, 8, 0, 9, 5, 1, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_006_Rshoulder_mesh_layer_1_vtx_1[4] = {
	{{{60, -14, -31},0, {-16, -16},{0xF5, 0xF9, 0x82, 0xFF}}},
	{{{31, -38, -3},0, {-16, -16},{0xC4, 0x90, 0xF7, 0xFF}}},
	{{{6, -15, -39},0, {-16, -16},{0xE9, 0xF, 0x84, 0xFF}}},
	{{{80, 20, -18},0, {-16, -16},{0xDD, 0x6A, 0xC3, 0xFF}}},
};

Gfx mario_000_offset_006_Rshoulder_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_000_offset_006_Rshoulder_mesh_layer_1_vtx_1 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_007_RArm_skinned_mesh_layer_1_vtx_0[5] = {
	{{{60, -17, 29},0, {-16, -16},{0xD9, 0xCB, 0x6D, 0xFF}}},
	{{{31, -38, -3},0, {-16, -16},{0xC4, 0x90, 0xF7, 0xFF}}},
	{{{60, -14, -31},0, {-16, -16},{0xF5, 0xF9, 0x82, 0xFF}}},
	{{{80, 20, -18},0, {-16, -16},{0xDD, 0x6A, 0xC3, 0xFF}}},
	{{{80, 18, 19},0, {-16, -16},{0xE0, 0x67, 0x43, 0xFF}}},
};

Gfx mario_000_offset_007_RArm_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_007_RArm_skinned_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_007_RArm_mesh_layer_1_vtx_0[5] = {
	{{{52, -36, -3},0, {-16, -16},{0xD5, 0x88, 0x2, 0xFF}}},
	{{{53, -23, 22},0, {-16, -16},{0xC0, 0xCE, 0x62, 0xFF}}},
	{{{54, 13, 16},0, {-16, -16},{0xA2, 0x41, 0x38, 0xFF}}},
	{{{54, 15, -16},0, {-16, -16},{0xA4, 0x2B, 0xB4, 0xFF}}},
	{{{53, -15, -28},0, {-16, -16},{0xD1, 0xC9, 0x97, 0xFF}}},
};

Gfx mario_000_offset_007_RArm_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_007_RArm_mesh_layer_1_vtx_0 + 0, 5, 5),
	gsSP2Triangles(5, 0, 1, 0, 5, 6, 0, 0),
	gsSP2Triangles(6, 4, 0, 0, 6, 7, 4, 0),
	gsSP2Triangles(7, 3, 4, 0, 7, 8, 3, 0),
	gsSP2Triangles(8, 2, 3, 0, 8, 9, 2, 0),
	gsSP2Triangles(9, 1, 2, 0, 9, 5, 1, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_008_RHand_skinned_mesh_layer_1_vtx_0[6] = {
	{{{54, 13, 16},0, {-16, 1008},{0xA2, 0x41, 0x38, 0xFF}}},
	{{{54, 15, -16},0, {-16, 1008},{0xA4, 0x2B, 0xB4, 0xFF}}},
	{{{54, 15, -16},0, {-16, -16},{0xA4, 0x2B, 0xB4, 0xFF}}},
	{{{52, -36, -3},0, {-16, -16},{0xD5, 0x88, 0x2, 0xFF}}},
	{{{53, -15, -28},0, {-16, -16},{0xD1, 0xC9, 0x97, 0xFF}}},
	{{{53, -23, 22},0, {-16, 1008},{0xC0, 0xCE, 0x62, 0xFF}}},
};

Gfx mario_000_offset_008_RHand_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_008_RHand_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_008_RHand_mesh_layer_1_vtx_0[6] = {
	{{{-19, 47, -13},0, {-16, 1008},{0xBA, 0x65, 0xDE, 0xFF}}},
	{{{-14, 27, 32},0, {-16, 1008},{0xDA, 0x3C, 0x6A, 0xFF}}},
	{{{13, -37, 33},0, {-16, 1008},{0x9, 0xAA, 0x5D, 0xFF}}},
	{{{24, -57, -12},0, {-16, -16},{0x1A, 0x8C, 0xD4, 0xFF}}},
	{{{4, -3, -41},0, {-16, -16},{0xEE, 0x6, 0x82, 0xFF}}},
	{{{-19, 47, -13},0, {-16, -16},{0xBA, 0x65, 0xDE, 0xFF}}},
};

Gfx mario_000_offset_008_RHand_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_008_RHand_mesh_layer_1_vtx_0 + 0, 6, 6),
	gsSP2Triangles(0, 6, 1, 0, 0, 7, 6, 0),
	gsSP2Triangles(7, 0, 5, 0, 7, 5, 8, 0),
	gsSP2Triangles(8, 5, 3, 0, 8, 3, 9, 0),
	gsSP2Triangles(9, 3, 4, 0, 9, 4, 10, 0),
	gsSP2Triangles(10, 4, 2, 0, 10, 2, 11, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_008_RHand_mesh_layer_1_vtx_1[10] = {
	{{{-14, 27, 32},0, {-16, -16},{0xDA, 0x3C, 0x6A, 0xFF}}},
	{{{13, -37, 33},0, {-16, -16},{0x9, 0xAA, 0x5D, 0xFF}}},
	{{{23, -26, 26},0, {-16, -16},{0x1E, 0xD2, 0x73, 0xFF}}},
	{{{31, -40, -10},0, {-16, -16},{0x43, 0x9C, 0xD7, 0xFF}}},
	{{{24, -57, -12},0, {-16, -16},{0x1A, 0x8C, 0xD4, 0xFF}}},
	{{{4, -3, -41},0, {-16, -16},{0xEE, 0x6, 0x82, 0xFF}}},
	{{{15, 0, -32},0, {-16, -16},{0xB, 0x4, 0x82, 0xFF}}},
	{{{-2, 41, -10},0, {-16, -16},{0xEB, 0x77, 0xD9, 0xFF}}},
	{{{-19, 47, -13},0, {-16, -16},{0xBA, 0x65, 0xDE, 0xFF}}},
	{{{1, 24, 26},0, {-16, -16},{0xFB, 0x43, 0x6C, 0xFF}}},
};

Gfx mario_000_offset_008_RHand_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_000_offset_008_RHand_mesh_layer_1_vtx_1 + 0, 10, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
	gsSP2Triangles(1, 4, 3, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 6, 3, 0, 7, 6, 5, 0),
	gsSP2Triangles(5, 8, 7, 0, 7, 8, 0, 0),
	gsSP2Triangles(0, 9, 7, 0, 2, 9, 0, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_004_Rhand_mesh_layer_1_vtx_0[12] = {
	{{{31, -40, -10},0, {-16, -16},{0x4C, 0xA2, 0xD9, 0xFF}}},
	{{{76, -10, 53},0, {-16, -16},{0x3E, 0xDE, 0x6A, 0xFF}}},
	{{{23, -26, 26},0, {-16, -16},{0x2D, 0xCA, 0x6A, 0xFF}}},
	{{{85, -33, -8},0, {-16, -16},{0x5D, 0xB0, 0xDD, 0xFF}}},
	{{{35, 9, -46},0, {-16, -16},{0x0, 0x1, 0x81, 0xFF}}},
	{{{15, 0, -32},0, {-16, -16},{0x9, 0x1, 0x81, 0xFF}}},
	{{{-2, 41, -10},0, {-16, -16},{0xF3, 0x78, 0xD7, 0xFF}}},
	{{{35, 64, -9},0, {-16, -16},{0x0, 0x78, 0xD6, 0xFF}}},
	{{{42, 58, 30},0, {-16, -16},{0x4, 0x67, 0x4B, 0xFF}}},
	{{{1, 24, 26},0, {-16, -16},{0x6, 0x3C, 0x70, 0xFF}}},
	{{{97, 39, 15},0, {-16, -16},{0x6B, 0x3F, 0x1C, 0xFF}}},
	{{{86, 30, -42},0, {-16, -16},{0x4C, 0x25, 0xA1, 0xFF}}},
};

Gfx mario_000_displaylist_004_Rhand_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_displaylist_004_Rhand_mesh_layer_1_vtx_0 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 0, 5, 4, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
	gsSP2Triangles(7, 6, 8, 0, 8, 6, 9, 0),
	gsSP2Triangles(8, 9, 1, 0, 1, 9, 2, 0),
	gsSP2Triangles(10, 8, 1, 0, 8, 10, 7, 0),
	gsSP2Triangles(7, 10, 11, 0, 11, 10, 3, 0),
	gsSP2Triangles(3, 10, 1, 0, 4, 11, 3, 0),
	gsSP1Triangle(7, 11, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_layer_1_vtx_0[15] = {
	{{{15, 0, -23},0, {-16, -16},{0xF1, 0xFC, 0x82, 0xFF}}},
	{{{86, -19, -13},0, {-16, -16},{0x3D, 0xBA, 0xA9, 0xFF}}},
	{{{31, -40, -1},0, {-16, -16},{0xFA, 0x8F, 0xC7, 0xFF}}},
	{{{81, 37, -28},0, {-16, -16},{0x16, 0x19, 0x85, 0xFF}}},
	{{{-2, 41, -1},0, {-16, -16},{0xC1, 0x67, 0xD7, 0xFF}}},
	{{{76, 88, 9},0, {-16, -16},{0xF2, 0x7E, 0xFF, 0xFF}}},
	{{{34, 43, 36},0, {-16, -16},{0xE9, 0x39, 0x6F, 0xFF}}},
	{{{1, 24, 35},0, {-16, -16},{0xDE, 0x36, 0x6E, 0xFF}}},
	{{{93, -45, 36},0, {-16, -16},{0x4D, 0xAE, 0x3C, 0xFF}}},
	{{{23, -26, 35},0, {-16, -16},{0xF1, 0xCC, 0x73, 0xFF}}},
	{{{93, -5, 22},0, {-16, -16},{0x5A, 0xE8, 0x57, 0xFF}}},
	{{{139, 30, 15},0, {-16, -16},{0x7A, 0xDF, 0xC, 0xFF}}},
	{{{125, 71, 9},0, {-16, -16},{0x55, 0x51, 0xCE, 0xFF}}},
	{{{124, 69, 30},0, {-16, -16},{0x3D, 0x3D, 0x5D, 0xFF}}},
	{{{84, 59, 25},0, {-16, -16},{0xFD, 0x1D, 0x7C, 0xFF}}},
};

Gfx mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_layer_1_vtx_0 + 0, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 0, 4, 0, 5, 3, 4, 0),
	gsSP2Triangles(5, 4, 6, 0, 7, 6, 4, 0),
	gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
	gsSP2Triangles(8, 9, 2, 0, 2, 1, 8, 0),
	gsSP2Triangles(1, 10, 8, 0, 1, 11, 10, 0),
	gsSP2Triangles(3, 11, 1, 0, 3, 12, 11, 0),
	gsSP2Triangles(3, 5, 12, 0, 13, 12, 5, 0),
	gsSP2Triangles(5, 14, 13, 0, 6, 14, 5, 0),
	gsSP2Triangles(10, 14, 6, 0, 10, 6, 8, 0),
	gsSP2Triangles(14, 10, 13, 0, 10, 11, 13, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_layer_1_vtx_0[19] = {
	{{{23, -26, 35},0, {-16, -16},{0x22, 0xBC, 0x66, 0xFF}}},
	{{{31, -40, -1},0, {-16, -16},{0x18, 0x86, 0xE8, 0xFF}}},
	{{{85, 8, 31},0, {-16, -16},{0x24, 0xE7, 0x77, 0xFF}}},
	{{{102, -21, 14},0, {-16, -16},{0x10, 0x96, 0x44, 0xFF}}},
	{{{94, -22, -18},0, {-16, -16},{0x19, 0xA9, 0xA7, 0xFF}}},
	{{{15, 0, -23},0, {-16, -16},{0xF0, 0x0, 0x82, 0xFF}}},
	{{{93, 21, -24},0, {-16, -16},{0x1F, 0x13, 0x86, 0xFF}}},
	{{{50, 76, -3},0, {-16, -16},{0xF5, 0x79, 0xDB, 0xFF}}},
	{{{-2, 41, -1},0, {-16, -16},{0xBC, 0x63, 0xD7, 0xFF}}},
	{{{46, 49, 45},0, {-16, -16},{0xFC, 0x3F, 0x6E, 0xFF}}},
	{{{1, 24, 35},0, {-16, -16},{0xCD, 0x32, 0x69, 0xFF}}},
	{{{84, 48, 24},0, {-16, -16},{0x12, 0x4C, 0x64, 0xFF}}},
	{{{146, 55, 25},0, {-16, -16},{0x5A, 0xF4, 0x59, 0xFF}}},
	{{{160, 9, 24},0, {-16, -16},{0x40, 0x26, 0x67, 0xFF}}},
	{{{168, -12, 2},0, {-16, -16},{0x5C, 0xA9, 0xF4, 0xFF}}},
	{{{169, 16, -11},0, {-16, -16},{0x57, 0x3E, 0xBB, 0xFF}}},
	{{{153, 61, -8},0, {-16, -16},{0x68, 0xC, 0xB8, 0xFF}}},
	{{{132, 80, 9},0, {-16, -16},{0xF, 0x7E, 0x7, 0xFF}}},
	{{{84, 60, -7},0, {-16, -16},{0xD, 0x6B, 0xBD, 0xFF}}},
};

Gfx mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_layer_1_vtx_0 + 0, 19, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(3, 1, 4, 0, 1, 5, 4, 0),
	gsSP2Triangles(5, 6, 4, 0, 7, 6, 5, 0),
	gsSP2Triangles(8, 7, 5, 0, 9, 7, 8, 0),
	gsSP2Triangles(9, 8, 10, 0, 0, 9, 10, 0),
	gsSP2Triangles(0, 2, 9, 0, 2, 11, 9, 0),
	gsSP2Triangles(11, 2, 12, 0, 12, 2, 6, 0),
	gsSP2Triangles(6, 2, 13, 0, 3, 13, 2, 0),
	gsSP2Triangles(3, 14, 13, 0, 4, 14, 3, 0),
	gsSP2Triangles(14, 4, 6, 0, 6, 15, 14, 0),
	gsSP2Triangles(6, 13, 15, 0, 14, 15, 13, 0),
	gsSP2Triangles(12, 6, 16, 0, 6, 17, 16, 0),
	gsSP2Triangles(17, 6, 18, 0, 7, 18, 6, 0),
	gsSP2Triangles(7, 11, 18, 0, 9, 11, 7, 0),
	gsSP2Triangles(18, 11, 17, 0, 12, 17, 11, 0),
	gsSP1Triangle(17, 12, 16, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_option_RCAP_000_displaylist_003_RCAP_mesh_layer_1_vtx_0[29] = {
	{{{91, 14, 39},0, {791, 400},{0xC8, 0x3A, 0x9E, 0xFF}}},
	{{{126, 66, 93},0, {1197, 591},{0xA5, 0x4F, 0x2A, 0xFF}}},
	{{{135, 49, -22},0, {1087, -53},{0xDF, 0x49, 0x9D, 0xFF}}},
	{{{86, -48, 32},0, {209, 400},{0xBF, 0xE4, 0x96, 0xFF}}},
	{{{124, -77, -34},0, {-88, -53},{0xD5, 0xD2, 0x92, 0xFF}}},
	{{{110, -115, 75},0, {-204, 591},{0x98, 0xBC, 0x1B, 0xFF}}},
	{{{110, -115, 75},0, {-16, -16},{0x98, 0xBC, 0x1B, 0xFF}}},
	{{{166, -161, 63},0, {-16, -16},{0xFA, 0x87, 0xDA, 0xFF}}},
	{{{166, -134, 152},0, {-16, -16},{0xB1, 0xC2, 0x4E, 0xFF}}},
	{{{124, -77, -34},0, {-16, -16},{0xD5, 0xD2, 0x92, 0xFF}}},
	{{{198, -64, -8},0, {-16, -16},{0x4F, 0xE0, 0xA1, 0xFF}}},
	{{{135, 49, -22},0, {-16, -16},{0xDF, 0x49, 0x9D, 0xFF}}},
	{{{205, 18, 0},0, {-16, -16},{0x55, 0x24, 0xA8, 0xFF}}},
	{{{190, 104, 90},0, {-16, -16},{0xF, 0x7D, 0xF2, 0xFF}}},
	{{{126, 66, 93},0, {-16, -16},{0xA5, 0x4F, 0x2A, 0xFF}}},
	{{{183, 60, 172},0, {-16, -16},{0xBB, 0x3B, 0x59, 0xFF}}},
	{{{110, -115, 75},0, {-16, -16},{0x98, 0xBC, 0x1B, 0xFF}}},
	{{{48, 51, 56},0, {-16, -16},{0xAE, 0x61, 0x1, 0xFF}}},
	{{{91, 14, 39},0, {-16, -16},{0xC8, 0x3A, 0x9E, 0xFF}}},
	{{{23, -11, 33},0, {-16, -16},{0x87, 0x4, 0xD8, 0xFF}}},
	{{{86, -48, 32},0, {-16, -16},{0xBF, 0xE4, 0x96, 0xFF}}},
	{{{45, -77, 45},0, {-16, -16},{0x9F, 0xAE, 0xF7, 0xFF}}},
	{{{226, -48, 225},0, {-16, -16},{0xD1, 0xF9, 0x76, 0xFF}}},
	{{{267, -101, 213},0, {-16, -16},{0x44, 0xBF, 0x55, 0xFF}}},
	{{{194, -161, 134},0, {-16, -16},{0x1, 0x85, 0x1E, 0xFF}}},
	{{{266, -118, 139},0, {-16, -16},{0x6B, 0xBE, 0xEC, 0xFF}}},
	{{{278, 30, 154},0, {-16, -16},{0x75, 0x32, 0xF8, 0xFF}}},
	{{{216, 84, 158},0, {-16, -16},{0x16, 0x71, 0x36, 0xFF}}},
	{{{276, -1, 223},0, {-16, -16},{0x4D, 0x22, 0x5F, 0xFF}}},
};

Gfx mario_002_switch_option_RCAP_000_displaylist_003_RCAP_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_option_RCAP_000_displaylist_003_RCAP_mesh_layer_1_vtx_0 + 0, 29, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	gsSP2Triangles(2, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
	gsSP2Triangles(10, 7, 9, 0, 9, 11, 10, 0),
	gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
	gsSP2Triangles(13, 11, 14, 0, 13, 14, 15, 0),
	gsSP2Triangles(14, 16, 15, 0, 14, 17, 16, 0),
	gsSP2Triangles(18, 17, 14, 0, 18, 19, 17, 0),
	gsSP2Triangles(20, 19, 18, 0, 21, 19, 20, 0),
	gsSP2Triangles(21, 20, 16, 0, 16, 19, 21, 0),
	gsSP2Triangles(17, 19, 16, 0, 8, 15, 16, 0),
	gsSP2Triangles(22, 15, 8, 0, 22, 8, 23, 0),
	gsSP2Triangles(8, 24, 23, 0, 7, 24, 8, 0),
	gsSP2Triangles(7, 25, 24, 0, 25, 7, 10, 0),
	gsSP2Triangles(25, 10, 26, 0, 10, 12, 26, 0),
	gsSP2Triangles(12, 13, 26, 0, 27, 26, 13, 0),
	gsSP2Triangles(15, 27, 13, 0, 27, 15, 28, 0),
	gsSP2Triangles(15, 22, 28, 0, 28, 22, 23, 0),
	gsSP2Triangles(23, 26, 28, 0, 26, 23, 25, 0),
	gsSP2Triangles(23, 24, 25, 0, 26, 27, 28, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_option_RCAP_000_displaylist_003_RCAP_mesh_layer_1_vtx_1[12] = {
	{{{31, -40, -1},0, {-16, -16},{0x22, 0x8C, 0xD9, 0xFF}}},
	{{{60, -8, 68},0, {-16, -16},{0x20, 0xD4, 0x73, 0xFF}}},
	{{{23, -26, 35},0, {-16, -16},{0xE6, 0xA1, 0x50, 0xFF}}},
	{{{87, -16, 7},0, {-16, -16},{0x65, 0xB5, 0xEC, 0xFF}}},
	{{{35, 9, -37},0, {-16, -16},{0xF9, 0xF5, 0x82, 0xFF}}},
	{{{15, 0, -23},0, {-16, -16},{0xC1, 0xE5, 0x95, 0xFF}}},
	{{{-2, 41, -1},0, {-16, -16},{0xAD, 0x57, 0xD7, 0xFF}}},
	{{{53, 80, -3},0, {-16, -16},{0xD, 0x79, 0xDD, 0xFF}}},
	{{{33, 54, 49},0, {-16, -16},{0xE6, 0x52, 0x5E, 0xFF}}},
	{{{1, 24, 35},0, {-16, -16},{0xAB, 0x24, 0x58, 0xFF}}},
	{{{86, 42, 28},0, {-16, -16},{0x69, 0x34, 0x31, 0xFF}}},
	{{{87, 30, -14},0, {-16, -16},{0x64, 0x15, 0xB4, 0xFF}}},
};

Gfx mario_002_switch_option_RCAP_000_displaylist_003_RCAP_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_002_switch_option_RCAP_000_displaylist_003_RCAP_mesh_layer_1_vtx_1 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 0, 5, 4, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
	gsSP2Triangles(7, 6, 8, 0, 8, 6, 9, 0),
	gsSP2Triangles(8, 9, 1, 0, 1, 9, 2, 0),
	gsSP2Triangles(10, 8, 1, 0, 8, 10, 7, 0),
	gsSP2Triangles(7, 10, 11, 0, 11, 10, 3, 0),
	gsSP2Triangles(3, 10, 1, 0, 4, 11, 3, 0),
	gsSP1Triangle(7, 11, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_option_RCAPHAND_000_displaylist_003_RCAPHAND_mesh_layer_4_vtx_0[29] = {
	{{{91, 14, 39},0, {791, 400},{0xC7, 0x42, 0xA3, 0xFF}}},
	{{{126, 66, 93},0, {1197, 591},{0xA5, 0x4F, 0x2A, 0xFF}}},
	{{{135, 49, -22},0, {1087, -53},{0xDF, 0x49, 0x9D, 0xFF}}},
	{{{86, -48, 32},0, {209, 400},{0xBD, 0xDA, 0x9B, 0xFF}}},
	{{{124, -77, -34},0, {-88, -53},{0xD5, 0xD2, 0x92, 0xFF}}},
	{{{110, -115, 75},0, {-204, 591},{0x98, 0xBC, 0x1B, 0xFF}}},
	{{{110, -115, 75},0, {-16, -16},{0x98, 0xBC, 0x1B, 0xFF}}},
	{{{166, -161, 63},0, {-16, -16},{0xFA, 0x87, 0xDA, 0xFF}}},
	{{{166, -134, 152},0, {-16, -16},{0xB1, 0xC2, 0x4E, 0xFF}}},
	{{{124, -77, -34},0, {-16, -16},{0xD5, 0xD2, 0x92, 0xFF}}},
	{{{198, -64, -8},0, {-16, -16},{0x4F, 0xE0, 0xA1, 0xFF}}},
	{{{135, 49, -22},0, {-16, -16},{0xDF, 0x49, 0x9D, 0xFF}}},
	{{{205, 18, 0},0, {-16, -16},{0x55, 0x24, 0xA8, 0xFF}}},
	{{{190, 104, 90},0, {-16, -16},{0xF, 0x7D, 0xF2, 0xFF}}},
	{{{126, 66, 93},0, {-16, -16},{0xA5, 0x4F, 0x2A, 0xFF}}},
	{{{183, 60, 172},0, {-16, -16},{0xBB, 0x3B, 0x59, 0xFF}}},
	{{{110, -115, 75},0, {-16, -16},{0x98, 0xBC, 0x1B, 0xFF}}},
	{{{48, 51, 56},0, {-16, -16},{0xAE, 0x61, 0x1, 0xFF}}},
	{{{91, 14, 39},0, {-16, -16},{0xC7, 0x42, 0xA3, 0xFF}}},
	{{{23, -11, 33},0, {-16, -16},{0x87, 0x4, 0xD8, 0xFF}}},
	{{{86, -48, 32},0, {-16, -16},{0xBD, 0xDA, 0x9B, 0xFF}}},
	{{{45, -77, 45},0, {-16, -16},{0x9F, 0xAE, 0xF7, 0xFF}}},
	{{{226, -48, 225},0, {-16, -16},{0xD1, 0xF9, 0x76, 0xFF}}},
	{{{267, -101, 213},0, {-16, -16},{0x44, 0xBF, 0x55, 0xFF}}},
	{{{194, -161, 134},0, {-16, -16},{0x1, 0x85, 0x1E, 0xFF}}},
	{{{266, -118, 139},0, {-16, -16},{0x6B, 0xBE, 0xEC, 0xFF}}},
	{{{278, 30, 154},0, {-16, -16},{0x75, 0x32, 0xF8, 0xFF}}},
	{{{216, 84, 158},0, {-16, -16},{0x16, 0x71, 0x36, 0xFF}}},
	{{{276, -1, 223},0, {-16, -16},{0x4D, 0x22, 0x5F, 0xFF}}},
};

Gfx mario_002_switch_option_RCAPHAND_000_displaylist_003_RCAPHAND_mesh_layer_4_tri_0[] = {
	gsSPVertex(mario_002_switch_option_RCAPHAND_000_displaylist_003_RCAPHAND_mesh_layer_4_vtx_0 + 0, 29, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	gsSP2Triangles(2, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
	gsSP2Triangles(10, 7, 9, 0, 9, 11, 10, 0),
	gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
	gsSP2Triangles(13, 11, 14, 0, 13, 14, 15, 0),
	gsSP2Triangles(14, 16, 15, 0, 14, 17, 16, 0),
	gsSP2Triangles(18, 17, 14, 0, 18, 19, 17, 0),
	gsSP2Triangles(20, 19, 18, 0, 21, 19, 20, 0),
	gsSP2Triangles(21, 20, 16, 0, 16, 19, 21, 0),
	gsSP2Triangles(17, 19, 16, 0, 8, 15, 16, 0),
	gsSP2Triangles(22, 15, 8, 0, 22, 8, 23, 0),
	gsSP2Triangles(8, 24, 23, 0, 7, 24, 8, 0),
	gsSP2Triangles(7, 25, 24, 0, 25, 7, 10, 0),
	gsSP2Triangles(25, 10, 26, 0, 10, 12, 26, 0),
	gsSP2Triangles(12, 13, 26, 0, 27, 26, 13, 0),
	gsSP2Triangles(15, 27, 13, 0, 27, 15, 28, 0),
	gsSP2Triangles(15, 22, 28, 0, 28, 22, 23, 0),
	gsSP2Triangles(23, 26, 28, 0, 26, 23, 25, 0),
	gsSP2Triangles(23, 24, 25, 0, 26, 27, 28, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_option_RCAPHAND_000_displaylist_003_RCAPHAND_mesh_layer_4_vtx_1[6] = {
	{{{91, 14, 39},0, {-509, 2059},{0xC6, 0x65, 0xCD, 0xFF}}},
	{{{275, 222, 239},0, {2903, 1940},{0xC6, 0x65, 0xCD, 0xFF}}},
	{{{464, 164, -88},0, {1061, -1152},{0xC6, 0x65, 0xCD, 0xFF}}},
	{{{86, -48, 32},0, {-509, 2059},{0xBA, 0xA9, 0xC3, 0xFF}}},
	{{{421, -216, -114},0, {1061, -1152},{0xBA, 0xA9, 0xC3, 0xFF}}},
	{{{246, -305, 214},0, {2903, 1940},{0xBA, 0xA9, 0xC3, 0xFF}}},
};

Gfx mario_002_switch_option_RCAPHAND_000_displaylist_003_RCAPHAND_mesh_layer_4_tri_1[] = {
	gsSPVertex(mario_002_switch_option_RCAPHAND_000_displaylist_003_RCAPHAND_mesh_layer_4_vtx_1 + 0, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_option_RCAPHAND_000_displaylist_003_RCAPHAND_mesh_layer_4_vtx_2[12] = {
	{{{31, -40, -1},0, {-16, -16},{0x21, 0x8C, 0xD9, 0xFF}}},
	{{{60, -8, 68},0, {-16, -16},{0x20, 0xD4, 0x73, 0xFF}}},
	{{{23, -26, 35},0, {-16, -16},{0xE6, 0xA1, 0x50, 0xFF}}},
	{{{87, -16, 7},0, {-16, -16},{0x65, 0xB5, 0xEE, 0xFF}}},
	{{{43, 14, -40},0, {-16, -16},{0x2, 0xFB, 0x81, 0xFF}}},
	{{{15, 0, -23},0, {-16, -16},{0xCA, 0xE7, 0x90, 0xFF}}},
	{{{-2, 41, -1},0, {-16, -16},{0xAD, 0x57, 0xD8, 0xFF}}},
	{{{53, 80, -3},0, {-16, -16},{0xD, 0x7A, 0xDF, 0xFF}}},
	{{{33, 54, 49},0, {-16, -16},{0xE6, 0x52, 0x5E, 0xFF}}},
	{{{1, 24, 35},0, {-16, -16},{0xAB, 0x24, 0x58, 0xFF}}},
	{{{86, 42, 28},0, {-16, -16},{0x69, 0x34, 0x31, 0xFF}}},
	{{{87, 30, -14},0, {-16, -16},{0x68, 0x16, 0xBA, 0xFF}}},
};

Gfx mario_002_switch_option_RCAPHAND_000_displaylist_003_RCAPHAND_mesh_layer_4_tri_2[] = {
	gsSPVertex(mario_002_switch_option_RCAPHAND_000_displaylist_003_RCAPHAND_mesh_layer_4_vtx_2 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 0, 5, 4, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
	gsSP2Triangles(7, 6, 8, 0, 8, 6, 9, 0),
	gsSP2Triangles(8, 9, 1, 0, 1, 9, 2, 0),
	gsSP2Triangles(10, 8, 1, 0, 8, 10, 7, 0),
	gsSP2Triangles(7, 10, 11, 0, 11, 10, 3, 0),
	gsSP2Triangles(3, 10, 1, 0, 4, 11, 3, 0),
	gsSP1Triangle(7, 11, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_009_LThigh_skinned_mesh_layer_1_vtx_0[4] = {
	{{{14, -41, 90},0, {-16, -16},{0xB5, 0xE1, 0x62, 0xFF}}},
	{{{-6, -66, 0},0, {-16, -16},{0x85, 0xDF, 0x0, 0xFF}}},
	{{{-23, 57, 0},0, {-16, -16},{0x86, 0x22, 0x0, 0xFF}}},
	{{{49, 65, 63},0, {-16, -16},{0xC8, 0x41, 0x5E, 0xFF}}},
};

Gfx mario_000_offset_009_LThigh_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_009_LThigh_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_009_LThigh_mesh_layer_1_vtx_0[5] = {
	{{{56, 47, 32},0, {-16, -16},{0xB1, 0x46, 0x47, 0xFF}}},
	{{{87, -15, 49},0, {-16, -16},{0xC7, 0xDA, 0x6B, 0xFF}}},
	{{{85, -46, 9},0, {-16, -16},{0xCA, 0x8E, 0xF, 0xFF}}},
	{{{87, -15, -31},0, {-16, -16},{0xDA, 0xD5, 0x8F, 0xFF}}},
	{{{57, 47, -16},0, {-16, -16},{0xBE, 0x55, 0xBC, 0xFF}}},
};

Gfx mario_000_offset_009_LThigh_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_009_LThigh_mesh_layer_1_vtx_0 + 0, 5, 4),
	gsSP2Triangles(0, 4, 1, 0, 0, 5, 4, 0),
	gsSP2Triangles(5, 0, 3, 0, 6, 5, 3, 0),
	gsSP2Triangles(3, 2, 6, 0, 2, 7, 6, 0),
	gsSP2Triangles(8, 7, 2, 0, 2, 1, 8, 0),
	gsSP1Triangle(4, 8, 1, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_010_LLeg_skinned_mesh_layer_1_vtx_0[5] = {
	{{{85, -46, 9},0, {-16, -16},{0xCA, 0x8E, 0xF, 0xFF}}},
	{{{56, 47, 32},0, {-16, -16},{0xB1, 0x46, 0x47, 0xFF}}},
	{{{57, 47, -16},0, {-16, -16},{0xBE, 0x55, 0xBC, 0xFF}}},
	{{{87, -15, -31},0, {-16, -16},{0xDA, 0xD5, 0x8F, 0xFF}}},
	{{{87, -15, 49},0, {-16, -16},{0xC7, 0xDA, 0x6B, 0xFF}}},
};

Gfx mario_000_offset_010_LLeg_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_010_LLeg_skinned_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_010_LLeg_mesh_layer_1_vtx_0[5] = {
	{{{59, 44, -16},0, {-16, -16},{0x8D, 0xF3, 0xCB, 0xFF}}},
	{{{59, 44, 36},0, {-16, -16},{0x93, 0xF2, 0x40, 0xFF}}},
	{{{53, -5, 55},0, {-16, -16},{0xED, 0xD1, 0x75, 0xFF}}},
	{{{38, -38, 11},0, {-16, -16},{0xA, 0x82, 0xC, 0xFF}}},
	{{{54, -18, -30},0, {-16, -16},{0xF2, 0xC2, 0x92, 0xFF}}},
};

Gfx mario_000_offset_010_LLeg_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_010_LLeg_mesh_layer_1_vtx_0 + 0, 5, 5),
	gsSP2Triangles(1, 5, 2, 0, 1, 6, 5, 0),
	gsSP2Triangles(1, 7, 6, 0, 1, 4, 7, 0),
	gsSP2Triangles(7, 4, 0, 0, 0, 8, 7, 0),
	gsSP2Triangles(0, 9, 8, 0, 0, 3, 9, 0),
	gsSP2Triangles(9, 3, 2, 0, 2, 5, 9, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_011_LFoot_skinned_mesh_layer_1_vtx_0[5] = {
	{{{53, -5, 55},0, {-16, -16},{0xED, 0xD1, 0x75, 0xFF}}},
	{{{59, 44, 36},0, {-16, -16},{0x93, 0xF2, 0x40, 0xFF}}},
	{{{38, -38, 11},0, {-16, -16},{0xA, 0x82, 0xC, 0xFF}}},
	{{{54, -18, -30},0, {-16, -16},{0xF2, 0xC2, 0x92, 0xFF}}},
	{{{59, 44, -16},0, {-16, -16},{0x8D, 0xF3, 0xCB, 0xFF}}},
};

Gfx mario_000_offset_011_LFoot_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_011_LFoot_skinned_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_011_LFoot_mesh_layer_1_vtx_0[6] = {
	{{{-14, 46, 53},0, {-16, -16},{0xB0, 0x52, 0x37, 0xFF}}},
	{{{75, 13, 61},0, {-16, -16},{0x4D, 0x24, 0x5F, 0xFF}}},
	{{{77, -39, 7},0, {-16, -16},{0x46, 0x96, 0x0, 0xFF}}},
	{{{73, 12, -41},0, {-16, -16},{0x4F, 0x16, 0x9F, 0xFF}}},
	{{{-15, 45, -32},0, {-16, -16},{0xAE, 0x56, 0xD4, 0xFF}}},
	{{{-45, 57, 9},0, {-16, -16},{0x77, 0xD5, 0xF6, 0xFF}}},
};

Gfx mario_000_offset_011_LFoot_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_011_LFoot_mesh_layer_1_vtx_0 + 0, 6, 5),
	gsSP2Triangles(1, 0, 5, 0, 0, 6, 5, 0),
	gsSP2Triangles(0, 7, 6, 0, 7, 0, 2, 0),
	gsSP2Triangles(2, 3, 7, 0, 7, 3, 8, 0),
	gsSP2Triangles(3, 9, 8, 0, 3, 4, 9, 0),
	gsSP2Triangles(10, 9, 4, 0, 10, 4, 1, 0),
	gsSP1Triangle(1, 5, 10, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_011_LFoot_mesh_layer_1_vtx_1[7] = {
	{{{-14, 46, 53},0, {-16, -16},{0xB0, 0x52, 0x37, 0xFF}}},
	{{{-15, 45, -32},0, {-16, -16},{0xAE, 0x56, 0xD4, 0xFF}}},
	{{{-45, 57, 9},0, {-16, -16},{0x77, 0xD5, 0xF6, 0xFF}}},
	{{{75, 13, 61},0, {-16, -16},{0x4D, 0x24, 0x5F, 0xFF}}},
	{{{73, 12, -41},0, {-16, -16},{0x4F, 0x16, 0x9F, 0xFF}}},
	{{{107, 1, 8},0, {-16, -16},{0x7F, 0x8, 0xFD, 0xFF}}},
	{{{77, -39, 7},0, {-16, -16},{0x46, 0x96, 0x0, 0xFF}}},
};

Gfx mario_000_offset_011_LFoot_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_000_offset_011_LFoot_mesh_layer_1_vtx_1 + 0, 7, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
	gsSP2Triangles(6, 5, 3, 0, 5, 6, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_012_RThigh_skinned_mesh_layer_1_vtx_0[4] = {
	{{{49, 65, -63},0, {-16, -16},{0xCA, 0x3F, 0xA0, 0xFF}}},
	{{{14, -40, -90},0, {-16, -16},{0xB6, 0xE1, 0x9D, 0xFF}}},
	{{{-6, -66, 0},0, {-16, -16},{0x85, 0xDF, 0x0, 0xFF}}},
	{{{-23, 57, 0},0, {-16, -16},{0x86, 0x22, 0x0, 0xFF}}},
};

Gfx mario_000_offset_012_RThigh_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_012_RThigh_skinned_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_012_RThigh_mesh_layer_1_vtx_0[5] = {
	{{{86, -12, -50},0, {-16, -16},{0xC6, 0xDC, 0x95, 0xFF}}},
	{{{55, 49, -32},0, {-16, -16},{0xB6, 0x46, 0xB4, 0xFF}}},
	{{{56, 48, 16},0, {-16, -16},{0xB9, 0x55, 0x3E, 0xFF}}},
	{{{87, -15, 30},0, {-16, -16},{0xD8, 0xD3, 0x70, 0xFF}}},
	{{{85, -45, -10},0, {-16, -16},{0xCA, 0x8E, 0xEE, 0xFF}}},
};

Gfx mario_000_offset_012_RThigh_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_012_RThigh_mesh_layer_1_vtx_0 + 0, 5, 4),
	gsSP2Triangles(1, 4, 0, 0, 5, 4, 1, 0),
	gsSP2Triangles(1, 2, 5, 0, 2, 6, 5, 0),
	gsSP2Triangles(2, 3, 6, 0, 3, 7, 6, 0),
	gsSP2Triangles(8, 7, 3, 0, 8, 3, 0, 0),
	gsSP1Triangle(4, 8, 0, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_013_RLeg_skinned_mesh_layer_1_vtx_0[5] = {
	{{{85, -45, -10},0, {-16, -16},{0xCA, 0x8E, 0xEE, 0xFF}}},
	{{{56, 48, 16},0, {-16, -16},{0xB9, 0x55, 0x3E, 0xFF}}},
	{{{87, -15, 30},0, {-16, -16},{0xD8, 0xD3, 0x70, 0xFF}}},
	{{{55, 49, -32},0, {-16, -16},{0xB6, 0x46, 0xB4, 0xFF}}},
	{{{86, -12, -50},0, {-16, -16},{0xC6, 0xDC, 0x95, 0xFF}}},
};

Gfx mario_000_offset_013_RLeg_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_013_RLeg_skinned_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_013_RLeg_mesh_layer_1_vtx_0[5] = {
	{{{54, -18, 31},0, {-16, -16},{0xF2, 0xC4, 0x6F, 0xFF}}},
	{{{37, -38, -11},0, {-16, -16},{0x9, 0x82, 0xF4, 0xFF}}},
	{{{54, -5, -55},0, {-16, -16},{0xEE, 0xD0, 0x8C, 0xFF}}},
	{{{58, 44, -35},0, {-16, -16},{0x91, 0xF8, 0xC3, 0xFF}}},
	{{{58, 44, 12},0, {-16, -16},{0x91, 0xEF, 0x3B, 0xFF}}},
};

Gfx mario_000_offset_013_RLeg_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_offset_013_RLeg_mesh_layer_1_vtx_0 + 0, 5, 5),
	gsSP2Triangles(1, 2, 5, 0, 5, 2, 0, 0),
	gsSP2Triangles(6, 5, 0, 0, 7, 6, 0, 0),
	gsSP2Triangles(0, 4, 7, 0, 7, 4, 3, 0),
	gsSP2Triangles(8, 7, 3, 0, 8, 3, 1, 0),
	gsSP2Triangles(9, 8, 1, 0, 5, 9, 1, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_005_RFoot_skinned_mesh_layer_1_vtx_0[5] = {
	{{{58, 44, 12},0, {-16, -16},{0x91, 0xEF, 0x3B, 0xFF}}},
	{{{54, -18, 31},0, {-16, -16},{0xF2, 0xC4, 0x6F, 0xFF}}},
	{{{58, 44, -35},0, {-16, -16},{0x91, 0xF8, 0xC3, 0xFF}}},
	{{{54, -5, -55},0, {-16, -16},{0xEE, 0xD0, 0x8C, 0xFF}}},
	{{{37, -38, -11},0, {-16, -16},{0x9, 0x82, 0xF4, 0xFF}}},
};

Gfx mario_000_displaylist_005_RFoot_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_displaylist_005_RFoot_skinned_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_005_RFoot_mesh_layer_1_vtx_0[6] = {
	{{{-17, 46, 29},0, {-16, -16},{0xAB, 0x56, 0x27, 0xFF}}},
	{{{-46, 56, -12},0, {-16, -16},{0x79, 0xD8, 0xFF, 0xFF}}},
	{{{-14, 45, -56},0, {-16, -16},{0xB0, 0x4E, 0xC3, 0xFF}}},
	{{{75, 14, -61},0, {-16, -16},{0x4C, 0x23, 0xA1, 0xFF}}},
	{{{77, -37, -7},0, {-16, -16},{0x47, 0x97, 0x0, 0xFF}}},
	{{{72, 15, 40},0, {-16, -16},{0x4E, 0x1A, 0x61, 0xFF}}},
};

Gfx mario_000_displaylist_005_RFoot_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_000_displaylist_005_RFoot_mesh_layer_1_vtx_0 + 0, 6, 5),
	gsSP2Triangles(5, 0, 1, 0, 0, 5, 6, 0),
	gsSP2Triangles(2, 0, 6, 0, 6, 7, 2, 0),
	gsSP2Triangles(7, 3, 2, 0, 7, 8, 3, 0),
	gsSP2Triangles(3, 8, 9, 0, 4, 3, 9, 0),
	gsSP2Triangles(9, 1, 4, 0, 1, 9, 10, 0),
	gsSP1Triangle(10, 5, 1, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_005_RFoot_mesh_layer_1_vtx_1[7] = {
	{{{-46, 56, -12},0, {-16, -16},{0x79, 0xD8, 0xFF, 0xFF}}},
	{{{-17, 46, 29},0, {-16, -16},{0xAB, 0x56, 0x27, 0xFF}}},
	{{{-14, 45, -56},0, {-16, -16},{0xB0, 0x4E, 0xC3, 0xFF}}},
	{{{75, 14, -61},0, {-16, -16},{0x4C, 0x23, 0xA1, 0xFF}}},
	{{{72, 15, 40},0, {-16, -16},{0x4E, 0x1A, 0x61, 0xFF}}},
	{{{107, 3, -8},0, {-16, -16},{0x7F, 0xA, 0x3, 0xFF}}},
	{{{77, -37, -7},0, {-16, -16},{0x47, 0x97, 0x0, 0xFF}}},
};

Gfx mario_000_displaylist_005_RFoot_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_000_displaylist_005_RFoot_mesh_layer_1_vtx_1 + 0, 7, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(6, 5, 4, 0, 3, 5, 6, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_bottom_mesh_layer_1_vtx_0[6] = {
	{{{-23, 57, 0},0, {-88, 1257},{0x86, 0x22, 0x0, 0xFF}}},
	{{{47, 83, -9},0, {-134, 698},{0xE6, 0x7C, 0xFB, 0xFF}}},
	{{{49, 65, -63},0, {419, 709},{0xCA, 0x3F, 0xA0, 0xFF}}},
	{{{47, 83, -9},0, {395, 698},{0xE6, 0x7C, 0xFB, 0xFF}}},
	{{{-23, 57, 0},0, {441, 1257},{0x86, 0x22, 0x0, 0xFF}}},
	{{{49, 65, 63},0, {948, 709},{0xC8, 0x41, 0x5E, 0xFF}}},
};

Gfx mario_002_switch_000_offset_bottom_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_bottom_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_001_Chest_skinned_mesh_layer_1_vtx_0[16] = {
	{{{14, -40, -90},0, {1268, 976},{0xB6, 0xE1, 0x9D, 0xFF}}},
	{{{14, -41, 90},0, {1268, 976},{0xB5, 0xE1, 0x62, 0xFF}}},
	{{{49, 65, 63},0, {813, 708},{0xC8, 0x41, 0x5E, 0xFF}}},
	{{{14, -41, 90},0, {1678, 977},{0xB5, 0xE1, 0x62, 0xFF}}},
	{{{49, 65, 63},0, {117, 595},{0xC8, 0x41, 0x5E, 0xFF}}},
	{{{14, -41, 90},0, {776, 975},{0xB5, 0xE1, 0x62, 0xFF}}},
	{{{14, -40, -90},0, {776, 975},{0xB6, 0xE1, 0x9D, 0xFF}}},
	{{{14, -41, 90},0, {587, 968},{0xB5, 0xE1, 0x62, 0xFF}}},
	{{{-6, -66, 0},0, {1313, 1116},{0x85, 0xDF, 0x0, 0xFF}}},
	{{{14, -40, -90},0, {587, 968},{0xB6, 0xE1, 0x9D, 0xFF}}},
	{{{49, 65, -63},0, {813, 708},{0xCA, 0x3F, 0xA0, 0xFF}}},
	{{{14, -40, -90},0, {1678, 977},{0xB6, 0xE1, 0x9D, 0xFF}}},
	{{{49, 65, -63},0, {169, 374},{0xCA, 0x3F, 0xA0, 0xFF}}},
	{{{49, 65, -63},0, {-31, 688},{0xCA, 0x3F, 0xA0, 0xFF}}},
	{{{47, 83, -9},0, {395, 698},{0xE6, 0x7C, 0xFB, 0xFF}}},
	{{{49, 65, 63},0, {948, 709},{0xC8, 0x41, 0x5E, 0xFF}}},
};

Gfx mario_002_switch_000_offset_001_Chest_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_001_Chest_skinned_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_001_Chest_mesh_layer_1_vtx_0[20] = {
	{{{22, 33, 86},0, {1106, 368},{0xF9, 0x22, 0x7A, 0xFF}}},
	{{{22, 33, 86},0, {62, 524},{0xF9, 0x22, 0x7A, 0xFF}}},
	{{{53, 51, 75},0, {93, 471},{0x28, 0x4F, 0x5B, 0xFF}}},
	{{{39, -61, 65},0, {1021, 206},{0x15, 0x97, 0x45, 0xFF}}},
	{{{-9, -78, 0},0, {1569, 596},{0xEC, 0x83, 0x0, 0xFF}}},
	{{{39, -61, -64},0, {1021, 206},{0x15, 0x98, 0xBA, 0xFF}}},
	{{{21, 33, -85},0, {1106, 368},{0xF9, 0x22, 0x86, 0xFF}}},
	{{{21, 33, -85},0, {91, 274},{0xF9, 0x22, 0x86, 0xFF}}},
	{{{52, 51, -74},0, {135, 198},{0x28, 0x4B, 0xA1, 0xFF}}},
	{{{21, 33, -85},0, {677, 370},{0xF9, 0x22, 0x86, 0xFF}}},
	{{{-3, -25, -84},0, {1142, 567},{0x4, 0xE2, 0x85, 0xFF}}},
	{{{39, -61, -64},0, {1451, 208},{0x15, 0x98, 0xBA, 0xFF}}},
	{{{39, -61, 65},0, {1451, 208},{0x15, 0x97, 0x45, 0xFF}}},
	{{{-3, -25, 85},0, {1142, 567},{0x1, 0xE4, 0x7C, 0xFF}}},
	{{{22, 33, 86},0, {677, 370},{0xF9, 0x22, 0x7A, 0xFF}}},
	{{{-9, -78, 0},0, {1336, 598},{0xEC, 0x83, 0x0, 0xFF}}},
	{{{51, 74, -29},0, {266, 202},{0x30, 0x72, 0xE2, 0xFF}}},
	{{{52, 51, -74},0, {-91, 128},{0x28, 0x4B, 0xA1, 0xFF}}},
	{{{51, 74, 30},0, {668, 212},{0x30, 0x74, 0x14, 0xFF}}},
	{{{53, 51, 75},0, {1031, 136},{0x28, 0x4F, 0x5B, 0xFF}}},
};

Gfx mario_002_switch_000_offset_001_Chest_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_001_Chest_mesh_layer_1_vtx_0 + 0, 16, 16),
	gsSP2Triangles(2, 3, 16, 0, 17, 18, 4, 0),
	gsSP2Triangles(19, 5, 20, 0, 21, 20, 6, 0),
	gsSP2Triangles(10, 22, 11, 0, 23, 12, 24, 0),
	gsSP2Triangles(25, 26, 0, 0, 27, 0, 26, 0),
	gsSP2Triangles(1, 28, 29, 0, 1, 29, 30, 0),
	gsSP2Triangles(7, 8, 31, 0, 31, 8, 9, 0),
	gsSPVertex(mario_002_switch_000_offset_001_Chest_mesh_layer_1_vtx_0 + 16, 4, 16),
	gsSP2Triangles(13, 16, 17, 0, 13, 14, 16, 0),
	gsSP2Triangles(18, 16, 14, 0, 15, 18, 14, 0),
	gsSP1Triangle(15, 19, 18, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_001_Chest_mesh_layer_1_vtx_1[42] = {
	{{{53, 51, 75},0, {-16, -16},{0x28, 0x4F, 0x5B, 0xFF}}},
	{{{22, 33, 86},0, {-16, -16},{0xF9, 0x22, 0x7A, 0xFF}}},
	{{{29, -2, 91},0, {-16, -16},{0x4, 0x12, 0x7E, 0xFF}}},
	{{{63, -67, 0},0, {716, 412},{0x3D, 0x91, 0xFB, 0xFF}}},
	{{{102, -26, -32},0, {716, 409},{0x60, 0xE3, 0xB2, 0xFF}}},
	{{{102, -26, 33},0, {713, 411},{0x76, 0xD1, 0x9, 0xFF}}},
	{{{29, -2, 91},0, {707, 405},{0x4, 0x12, 0x7E, 0xFF}}},
	{{{22, 33, 86},0, {713, 400},{0xF9, 0x22, 0x7A, 0xFF}}},
	{{{-3, -25, 85},0, {700, 401},{0x1, 0xE4, 0x7C, 0xFF}}},
	{{{52, -38, 90},0, {706, 408},{0x1B, 0xCD, 0x71, 0xFF}}},
	{{{39, -61, 65},0, {702, 411},{0x15, 0x97, 0x45, 0xFF}}},
	{{{93, -29, 63},0, {710, 410},{0x63, 0xD4, 0x43, 0xFF}}},
	{{{89, 14, 62},0, {976, -278},{0x6C, 0x2B, 0x33, 0xFF}}},
	{{{91, 32, 27},0, {674, -218},{0x5E, 0x54, 0xF3, 0xFF}}},
	{{{53, 51, 75},0, {1031, 136},{0x28, 0x4F, 0x5B, 0xFF}}},
	{{{51, 74, 30},0, {668, 212},{0x30, 0x74, 0x14, 0xFF}}},
	{{{51, 74, -29},0, {266, 202},{0x30, 0x72, 0xE2, 0xFF}}},
	{{{91, 32, -26},0, {263, -216},{0x69, 0x3B, 0xD7, 0xFF}}},
	{{{52, 51, -74},0, {-91, 128},{0x28, 0x4B, 0xA1, 0xFF}}},
	{{{89, 14, -61},0, {-29, -278},{0x67, 0x29, 0xC2, 0xFF}}},
	{{{21, 33, -85},0, {333, 500},{0xF9, 0x22, 0x86, 0xFF}}},
	{{{29, -2, -91},0, {345, 489},{0x7, 0x9, 0x82, 0xFF}}},
	{{{-3, -25, -84},0, {342, 474},{0x4, 0xE2, 0x85, 0xFF}}},
	{{{52, 51, -74},0, {341, 518},{0x28, 0x4B, 0xA1, 0xFF}}},
	{{{54, -44, -80},0, {359, 485},{0x23, 0xC3, 0x96, 0xFF}}},
	{{{39, -61, -64},0, {364, 479},{0x15, 0x98, 0xBA, 0xFF}}},
	{{{93, -29, -62},0, {361, 492},{0x63, 0xD3, 0xBE, 0xFF}}},
	{{{39, -61, 65},0, {-16, -16},{0x15, 0x97, 0x45, 0xFF}}},
	{{{-9, -78, 0},0, {-16, -16},{0xEC, 0x83, 0x0, 0xFF}}},
	{{{63, -67, 0},0, {-16, -16},{0x3D, 0x91, 0xFB, 0xFF}}},
	{{{39, -61, -64},0, {-16, -16},{0x15, 0x98, 0xBA, 0xFF}}},
	{{{93, -29, -62},0, {-16, -16},{0x63, 0xD3, 0xBE, 0xFF}}},
	{{{102, -26, -32},0, {-16, -16},{0x60, 0xE3, 0xB2, 0xFF}}},
	{{{63, -67, 0},0, {-16, -16},{0x3D, 0x91, 0xFB, 0xFF}}},
	{{{93, -29, -62},0, {-16, -16},{0x63, 0xD3, 0xBE, 0xFF}}},
	{{{89, 14, -61},0, {-16, -16},{0x67, 0x29, 0xC2, 0xFF}}},
	{{{91, 32, -26},0, {-16, -16},{0x69, 0x3B, 0xD7, 0xFF}}},
	{{{91, 32, 27},0, {-16, -16},{0x5E, 0x54, 0xF3, 0xFF}}},
	{{{102, -26, 33},0, {-16, -16},{0x76, 0xD1, 0x9, 0xFF}}},
	{{{89, 14, 62},0, {-16, -16},{0x6C, 0x2B, 0x33, 0xFF}}},
	{{{93, -29, 63},0, {-16, -16},{0x63, 0xD4, 0x43, 0xFF}}},
	{{{39, -61, 65},0, {-16, -16},{0x15, 0x97, 0x45, 0xFF}}},
};

Gfx mario_002_switch_000_offset_001_Chest_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_002_switch_000_offset_001_Chest_mesh_layer_1_vtx_1 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 6, 8, 0),
	gsSP2Triangles(10, 9, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
	gsSP2Triangles(16, 15, 13, 0, 13, 17, 16, 0),
	gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
	gsSP2Triangles(20, 21, 22, 0, 21, 20, 23, 0),
	gsSP2Triangles(22, 21, 24, 0, 25, 22, 24, 0),
	gsSP2Triangles(26, 25, 24, 0, 27, 28, 29, 0),
	gsSP2Triangles(29, 28, 30, 0, 29, 30, 31, 0),
	gsSPVertex(mario_002_switch_000_offset_001_Chest_mesh_layer_1_vtx_1 + 32, 10, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(3, 4, 0, 0, 4, 5, 0, 0),
	gsSP2Triangles(0, 5, 6, 0, 6, 5, 7, 0),
	gsSP2Triangles(7, 8, 6, 0, 1, 6, 8, 0),
	gsSP1Triangle(9, 1, 8, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_displaylist_Head_mesh_layer_1_vtx_0[110] = {
	{{{9, 36, -48},0, {74, 67},{0x82, 0xF5, 0xFA, 0xFF}}},
	{{{11, -24, -68},0, {74, 67},{0x8C, 0xEF, 0xCE, 0xFF}}},
	{{{11, -24, 68},0, {74, 67},{0x82, 0xF7, 0xF6, 0xFF}}},
	{{{11, -24, -68},0, {53, 79},{0xA1, 0xED, 0xAE, 0xFF}}},
	{{{49, -6, -115},0, {53, 79},{0xA1, 0xED, 0xAE, 0xFF}}},
	{{{40, -85, -86},0, {53, 79},{0xA1, 0xED, 0xAE, 0xFF}}},
	{{{51, 0, 103},0, {53, 66},{0x2B, 0x61, 0x46, 0xFF}}},
	{{{49, -6, 115},0, {53, 66},{0x91, 0xC, 0x3D, 0xFF}}},
	{{{129, 25, 113},0, {53, 66},{0x24, 0x2C, 0x72, 0xFF}}},
	{{{129, 25, -113},0, {53, 66},{0x28, 0x25, 0x8D, 0xFF}}},
	{{{49, -6, -115},0, {53, 66},{0xE8, 0x3B, 0x92, 0xFF}}},
	{{{51, 0, -102},0, {53, 66},{0xD7, 0x4D, 0xA4, 0xFF}}},
	{{{51, 0, -102},0, {53, 66},{0x8F, 0xC6, 0xF7, 0xFF}}},
	{{{49, -6, -115},0, {53, 66},{0x82, 0x2, 0x10, 0xFF}}},
	{{{40, -85, -86},0, {53, 66},{0x8E, 0x37, 0xF9, 0xFF}}},
	{{{40, -85, 87},0, {53, 66},{0xDA, 0xD3, 0x71, 0xFF}}},
	{{{10, 30, 62},0, {65, 67},{0xB3, 0x55, 0x37, 0xFF}}},
	{{{9, 36, 49},0, {76, 68},{0x92, 0x28, 0x32, 0xFF}}},
	{{{9, 36, -48},0, {76, 68},{0x82, 0xF5, 0xFA, 0xFF}}},
	{{{51, 0, 103},0, {77, 68},{0x2B, 0x61, 0x46, 0xFF}}},
	{{{129, 25, 113},0, {77, 67},{0x24, 0x2C, 0x72, 0xFF}}},
	{{{116, 26, 101},0, {75, 67},{0xEC, 0x3B, 0x6F, 0xFF}}},
	{{{168, 48, 92},0, {74, 67},{0xA, 0x66, 0x4B, 0xFF}}},
	{{{10, 30, 62},0, {76, 67},{0xB3, 0x55, 0x37, 0xFF}}},
	{{{51, 0, 103},0, {74, 68},{0x2B, 0x61, 0x46, 0xFF}}},
	{{{9, 36, 49},0, {75, 67},{0x92, 0x28, 0x32, 0xFF}}},
	{{{49, -6, 115},0, {77, 68},{0x91, 0xC, 0x3D, 0xFF}}},
	{{{116, 26, -99},0, {75, 68},{0xFF, 0x45, 0x95, 0xFF}}},
	{{{129, 25, -113},0, {75, 68},{0x28, 0x25, 0x8D, 0xFF}}},
	{{{51, 0, -102},0, {75, 68},{0xD7, 0x4D, 0xA4, 0xFF}}},
	{{{148, 36, -102},0, {75, 68},{0xDA, 0x72, 0xD7, 0xFF}}},
	{{{168, 48, -91},0, {75, 68},{0xB, 0x68, 0xB7, 0xFF}}},
	{{{168, 48, -91},0, {53, 66},{0xB, 0x38, 0x8E, 0xFF}}},
	{{{129, 25, -113},0, {53, 66},{0x28, 0x25, 0x8D, 0xFF}}},
	{{{148, 36, -102},0, {53, 66},{0x52, 0x26, 0xA7, 0xFF}}},
	{{{196, -6, -107},0, {53, 66},{0x3C, 0xFC, 0x90, 0xFF}}},
	{{{255, 77, -63},0, {53, 66},{0x4B, 0x48, 0xB7, 0xFF}}},
	{{{257, -41, -41},0, {53, 66},{0x68, 0xC8, 0xD2, 0xFF}}},
	{{{286, 18, 0},0, {53, 66},{0x7F, 0x1, 0x6, 0xFF}}},
	{{{255, 77, 64},0, {53, 66},{0x53, 0x47, 0x41, 0xFF}}},
	{{{257, -41, 42},0, {53, 66},{0x62, 0xCA, 0x3C, 0xFF}}},
	{{{196, -6, 108},0, {53, 66},{0x3C, 0xFF, 0x70, 0xFF}}},
	{{{168, 48, 92},0, {53, 66},{0xE, 0x3A, 0x70, 0xFF}}},
	{{{129, 25, 113},0, {53, 66},{0x24, 0x2C, 0x72, 0xFF}}},
	{{{162, -119, 75},0, {53, 66},{0x32, 0x9B, 0x3B, 0xFF}}},
	{{{162, -119, -74},0, {53, 66},{0x2A, 0xA3, 0xB5, 0xFF}}},
	{{{94, -144, -50},0, {53, 66},{0xDD, 0x8D, 0xD7, 0xFF}}},
	{{{94, -144, 51},0, {53, 66},{0xDB, 0x92, 0x33, 0xFF}}},
	{{{54, -120, 68},0, {53, 66},{0xEE, 0x9A, 0x49, 0xFF}}},
	{{{54, -120, -67},0, {53, 66},{0xF4, 0x94, 0xBE, 0xFF}}},
	{{{18, -88, 59},0, {53, 66},{0x99, 0xC0, 0x27, 0xFF}}},
	{{{40, -85, 87},0, {53, 66},{0xDA, 0xD3, 0x71, 0xFF}}},
	{{{11, -24, 68},0, {53, 66},{0x82, 0xF7, 0xF6, 0xFF}}},
	{{{11, -24, -68},0, {53, 66},{0x85, 0xEB, 0xE9, 0xFF}}},
	{{{18, -88, -58},0, {53, 66},{0x99, 0xBE, 0xDE, 0xFF}}},
	{{{40, -85, -86},0, {53, 66},{0xA3, 0xD1, 0xB7, 0xFF}}},
	{{{255, 77, -63},0, {77, 68},{0x4B, 0x48, 0xB7, 0xFF}}},
	{{{168, 48, -91},0, {77, 66},{0xB, 0x38, 0x8E, 0xFF}}},
	{{{204, 93, -31},0, {76, 67},{0x46, 0x63, 0xDA, 0xFF}}},
	{{{255, 77, 64},0, {74, 68},{0x53, 0x47, 0x41, 0xFF}}},
	{{{204, 93, 32},0, {75, 67},{0x42, 0x64, 0x2B, 0xFF}}},
	{{{168, 48, 92},0, {74, 66},{0xE, 0x3A, 0x70, 0xFF}}},
	{{{9, 36, -48},0, {75, 69},{0x82, 0xF5, 0xFA, 0xFF}}},
	{{{10, 30, -62},0, {73, 68},{0xB2, 0x5C, 0xD7, 0xFF}}},
	{{{11, -24, -68},0, {71, 66},{0x8C, 0xEF, 0xCE, 0xFF}}},
	{{{51, 0, -102},0, {79, 68},{0xD7, 0x4D, 0xA4, 0xFF}}},
	{{{49, -6, -115},0, {71, 66},{0xD2, 0x3B, 0x99, 0xFF}}},
	{{{49, -6, -115},0, {824, 628},{0xE8, 0x3B, 0x92, 0xFF}}},
	{{{129, 25, -113},0, {1132, 228},{0x28, 0x25, 0x8D, 0xFF}}},
	{{{140, -35, -123},0, {544, 189},{0x4, 0xD8, 0x87, 0xFF}}},
	{{{196, -6, -107},0, {789, -101},{0x3C, 0xFC, 0x90, 0xFF}}},
	{{{162, -119, -74},0, {-381, 54},{0x2A, 0xA3, 0xB5, 0xFF}}},
	{{{94, -144, -50},0, {-748, 398},{0xDD, 0x8D, 0xD7, 0xFF}}},
	{{{54, -120, -67},0, {-447, 607},{0xF4, 0x94, 0xBE, 0xFF}}},
	{{{40, -85, -86},0, {-38, 681},{0xA3, 0xD1, 0xB7, 0xFF}}},
	{{{129, 25, 113},0, {-133, 224},{0x24, 0x2C, 0x72, 0xFF}}},
	{{{49, -6, 115},0, {196, 619},{0x91, 0xC, 0x3D, 0xFF}}},
	{{{140, -56, 124},0, {629, 183},{0xFB, 0xD8, 0x78, 0xFF}}},
	{{{40, -85, 87},0, {1055, 658},{0xDA, 0xD3, 0x71, 0xFF}}},
	{{{54, -120, 68},0, {1456, 577},{0xEE, 0x9A, 0x49, 0xFF}}},
	{{{94, -144, 51},0, {1740, 364},{0xDB, 0x92, 0x33, 0xFF}}},
	{{{162, -119, 75},0, {1345, 35},{0x32, 0x9B, 0x3B, 0xFF}}},
	{{{196, -6, 108},0, {204, -106},{0x3C, 0xFF, 0x70, 0xFF}}},
	{{{184, 88, 0},0, {53, 66},{0x89, 0xF, 0xD7, 0xFF}}},
	{{{175, 132, -65},0, {53, 66},{0xE6, 0x64, 0xB6, 0xFF}}},
	{{{168, 48, -91},0, {53, 66},{0xB, 0x38, 0x8E, 0xFF}}},
	{{{184, 155, 0},0, {53, 66},{0xF7, 0x7F, 0x0, 0xFF}}},
	{{{175, 132, 66},0, {53, 66},{0xE6, 0x64, 0x4A, 0xFF}}},
	{{{168, 48, 92},0, {53, 66},{0xE, 0x3A, 0x70, 0xFF}}},
	{{{204, 93, 32},0, {53, 66},{0x42, 0x64, 0x2B, 0xFF}}},
	{{{204, 93, -31},0, {53, 66},{0x46, 0x63, 0xDA, 0xFF}}},
	{{{284, 18, -25},0, {66, 77},{0xB, 0x0, 0x81, 0xFF}}},
	{{{268, 0, -18},0, {66, 77},{0x0, 0xA6, 0xA6, 0xFF}}},
	{{{268, 18, -25},0, {66, 77},{0x0, 0x0, 0x81, 0xFF}}},
	{{{284, 18, -25},0, {66, 77},{0xB, 0x0, 0x81, 0xFF}}},
	{{{284, 0, -18},0, {66, 77},{0xB, 0xA7, 0xA7, 0xFF}}},
	{{{268, 0, -18},0, {66, 77},{0x0, 0xA6, 0xA6, 0xFF}}},
	{{{268, -7, 0},0, {66, 77},{0x0, 0x81, 0x0, 0xFF}}},
	{{{284, -7, 0},0, {66, 77},{0xB, 0x81, 0x0, 0xFF}}},
	{{{284, 0, 17},0, {66, 77},{0xB, 0xA7, 0x59, 0xFF}}},
	{{{268, 0, 17},0, {66, 77},{0x0, 0xA6, 0x5A, 0xFF}}},
	{{{268, 18, 24},0, {66, 77},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{284, 18, 24},0, {66, 77},{0xB, 0x0, 0x7F, 0xFF}}},
	{{{268, 35, 17},0, {66, 77},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{284, 35, 17},0, {66, 77},{0xB, 0x59, 0x59, 0xFF}}},
	{{{284, 42, 0},0, {66, 77},{0xB, 0x7F, 0x0, 0xFF}}},
	{{{268, 42, 0},0, {66, 77},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{268, 35, -18},0, {66, 77},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{284, 35, -18},0, {66, 77},{0xB, 0x59, 0xA7, 0xFF}}},
	{{{268, 18, -25},0, {66, 77},{0x0, 0x0, 0x81, 0xFF}}},
};

Gfx mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_displaylist_Head_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 2, 15, 7, 0),
	gsSP2Triangles(2, 7, 16, 0, 2, 16, 17, 0),
	gsSP2Triangles(18, 2, 17, 0, 19, 20, 21, 0),
	gsSP2Triangles(20, 22, 21, 0, 23, 24, 25, 0),
	gsSP2Triangles(23, 26, 24, 0, 27, 28, 29, 0),
	gsSP2Triangles(28, 27, 30, 0, 27, 31, 30, 0),
	gsSPVertex(mario_002_switch_000_displaylist_Head_mesh_layer_1_vtx_0 + 32, 30, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(0, 4, 3, 0, 5, 3, 4, 0),
	gsSP2Triangles(5, 4, 6, 0, 4, 7, 6, 0),
	gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
	gsSP2Triangles(9, 7, 10, 0, 9, 10, 11, 0),
	gsSP2Triangles(8, 9, 12, 0, 5, 8, 12, 0),
	gsSP2Triangles(13, 5, 12, 0, 12, 14, 13, 0),
	gsSP2Triangles(14, 12, 15, 0, 15, 16, 14, 0),
	gsSP2Triangles(16, 17, 14, 0, 17, 16, 18, 0),
	gsSP2Triangles(18, 16, 19, 0, 20, 18, 19, 0),
	gsSP2Triangles(18, 20, 21, 0, 21, 22, 18, 0),
	gsSP2Triangles(23, 22, 21, 0, 23, 17, 22, 0),
	gsSP2Triangles(22, 17, 18, 0, 13, 3, 5, 0),
	gsSP2Triangles(5, 6, 8, 0, 24, 25, 26, 0),
	gsSP2Triangles(27, 24, 26, 0, 27, 26, 28, 0),
	gsSP1Triangle(28, 29, 27, 0),
	gsSPVertex(mario_002_switch_000_displaylist_Head_mesh_layer_1_vtx_0 + 62, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 4, 1, 0, 1, 4, 2, 0),
	gsSP2Triangles(5, 6, 7, 0, 8, 7, 6, 0),
	gsSP2Triangles(8, 9, 7, 0, 10, 7, 9, 0),
	gsSP2Triangles(10, 11, 7, 0, 11, 12, 7, 0),
	gsSP2Triangles(12, 5, 7, 0, 13, 14, 15, 0),
	gsSP2Triangles(14, 16, 15, 0, 16, 17, 15, 0),
	gsSP2Triangles(15, 17, 18, 0, 19, 15, 18, 0),
	gsSP2Triangles(15, 19, 20, 0, 13, 15, 20, 0),
	gsSP2Triangles(21, 22, 23, 0, 21, 24, 22, 0),
	gsSP2Triangles(25, 24, 21, 0, 26, 25, 21, 0),
	gsSP2Triangles(27, 25, 26, 0, 27, 24, 25, 0),
	gsSP2Triangles(28, 24, 27, 0, 22, 24, 28, 0),
	gsSP2Triangles(22, 28, 23, 0, 29, 30, 31, 0),
	gsSPVertex(mario_002_switch_000_displaylist_Head_mesh_layer_1_vtx_0 + 94, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 5, 6, 0, 5, 7, 6, 0),
	gsSP2Triangles(5, 8, 7, 0, 8, 9, 7, 0),
	gsSP2Triangles(8, 10, 9, 0, 9, 10, 11, 0),
	gsSP2Triangles(9, 11, 12, 0, 11, 13, 12, 0),
	gsSP2Triangles(11, 14, 13, 0, 13, 14, 0, 0),
	gsSP1Triangle(13, 0, 15, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_displaylist_Head_mesh_layer_1_vtx_1[55] = {
	{{{101, 88, 80},0, {463, 110},{0x3A, 0x4F, 0x51, 0xFF}}},
	{{{103, 64, 90},0, {463, 110},{0x7, 0x47, 0x69, 0xFF}}},
	{{{106, 97, 1},0, {389, 12},{0x65, 0x4D, 0x0, 0xFF}}},
	{{{86, 108, 34},0, {428, 73},{0x29, 0x3A, 0x6A, 0xFF}}},
	{{{101, 88, 80},0, {371, 112},{0x3A, 0x4F, 0x51, 0xFF}}},
	{{{106, 97, 1},0, {440, 95},{0x65, 0x4D, 0x0, 0xFF}}},
	{{{101, 88, -79},0, {369, 111},{0x3B, 0x4F, 0xAF, 0xFF}}},
	{{{86, 108, -33},0, {426, 75},{0x2A, 0x3A, 0x97, 0xFF}}},
	{{{106, 97, 1},0, {435, 100},{0x65, 0x4D, 0x0, 0xFF}}},
	{{{103, 64, -89},0, {465, 100},{0x7, 0x47, 0x97, 0xFF}}},
	{{{101, 88, -79},0, {480, 18},{0x3B, 0x4F, 0xAF, 0xFF}}},
	{{{106, 97, 1},0, {437, 11},{0x65, 0x4D, 0x0, 0xFF}}},
	{{{51, 0, 103},0, {300, 68},{0x2B, 0x61, 0x46, 0xFF}}},
	{{{57, 84, 76},0, {372, 52},{0xCD, 0x49, 0x5B, 0xFF}}},
	{{{9, 36, 49},0, {372, -2},{0x92, 0x28, 0x32, 0xFF}}},
	{{{51, 0, 103},0, {463, 110},{0x2B, 0x61, 0x46, 0xFF}}},
	{{{57, 84, 76},0, {375, 48},{0xCD, 0x49, 0x5B, 0xFF}}},
	{{{9, 36, -48},0, {381, -9},{0x82, 0xF5, 0xFA, 0xFF}}},
	{{{57, 84, -75},0, {375, 48},{0xCD, 0x49, 0xA5, 0xFF}}},
	{{{51, 0, -102},0, {306, 57},{0xD7, 0x4D, 0xA4, 0xFF}}},
	{{{18, 85, 0},0, {463, 110},{0x95, 0x45, 0x0, 0xFF}}},
	{{{51, 0, -102},0, {303, 65},{0xD7, 0x4D, 0xA4, 0xFF}}},
	{{{57, 84, -75},0, {375, 48},{0xCD, 0x49, 0xA5, 0xFF}}},
	{{{103, 64, 90},0, {1131, -22},{0x7, 0x47, 0x69, 0xFF}}},
	{{{101, 88, 80},0, {908, -18},{0x3A, 0x4F, 0x51, 0xFF}}},
	{{{57, 84, 76},0, {842, 592},{0xCD, 0x49, 0x5B, 0xFF}}},
	{{{86, 108, 34},0, {328, 348},{0x29, 0x3A, 0x6A, 0xFF}}},
	{{{61, 111, 31},0, {331, 671},{0xAE, 0x37, 0x4F, 0xFF}}},
	{{{18, 85, 0},0, {230, 1417},{0x95, 0x45, 0x0, 0xFF}}},
	{{{50, 109, 0},0, {34, 882},{0x8D, 0x36, 0x0, 0xFF}}},
	{{{61, 111, -30},0, {331, 671},{0xAE, 0x37, 0xB0, 0xFF}}},
	{{{57, 84, -75},0, {842, 592},{0xCD, 0x49, 0xA5, 0xFF}}},
	{{{57, 84, -75},0, {842, 592},{0xCD, 0x49, 0xA5, 0xFF}}},
	{{{61, 111, -30},0, {331, 671},{0xAE, 0x37, 0xB0, 0xFF}}},
	{{{86, 108, -33},0, {328, 348},{0x2A, 0x3A, 0x97, 0xFF}}},
	{{{101, 88, -79},0, {908, -18},{0x3B, 0x4F, 0xAF, 0xFF}}},
	{{{103, 64, -89},0, {1131, -22},{0x7, 0x47, 0x97, 0xFF}}},
	{{{18, 85, 0},0, {230, 1417},{0x95, 0x45, 0x0, 0xFF}}},
	{{{9, 36, -48},0, {791, 1142},{0x82, 0xF5, 0xFA, 0xFF}}},
	{{{9, 36, 49},0, {791, 1142},{0x92, 0x28, 0x32, 0xFF}}},
	{{{57, 84, 76},0, {842, 592},{0xCD, 0x49, 0x5B, 0xFF}}},
	{{{58, 147, 41},0, {463, 110},{0xC3, 0x30, 0x65, 0xFF}}},
	{{{61, 111, 31},0, {463, 110},{0xAE, 0x37, 0x4F, 0xFF}}},
	{{{86, 108, 34},0, {463, 110},{0x29, 0x3A, 0x6A, 0xFF}}},
	{{{41, 148, 0},0, {463, 110},{0x89, 0x2C, 0x0, 0xFF}}},
	{{{68, 181, 1},0, {463, 110},{0xD8, 0x79, 0x0, 0xFF}}},
	{{{106, 146, 45},0, {463, 110},{0x41, 0x2F, 0x63, 0xFF}}},
	{{{106, 97, 1},0, {463, 110},{0x65, 0x4D, 0x0, 0xFF}}},
	{{{127, 144, 0},0, {463, 110},{0x7C, 0x1A, 0x0, 0xFF}}},
	{{{107, 146, -43},0, {463, 110},{0x42, 0x30, 0x9F, 0xFF}}},
	{{{86, 108, -33},0, {463, 110},{0x2A, 0x3A, 0x97, 0xFF}}},
	{{{58, 147, -40},0, {463, 110},{0xC5, 0x32, 0x9B, 0xFF}}},
	{{{61, 111, -30},0, {463, 110},{0xAE, 0x37, 0xB0, 0xFF}}},
	{{{50, 109, 0},0, {463, 110},{0x8D, 0x36, 0x0, 0xFF}}},
	{{{109, 179, 1},0, {463, 110},{0x48, 0x69, 0x0, 0xFF}}},
};

Gfx mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_002_switch_000_displaylist_Head_mesh_layer_1_vtx_1 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 15, 1, 16, 0),
	gsSP2Triangles(17, 18, 19, 0, 20, 17, 14, 0),
	gsSP2Triangles(9, 21, 22, 0, 23, 24, 25, 0),
	gsSP2Triangles(24, 26, 25, 0, 26, 27, 25, 0),
	gsSP2Triangles(28, 25, 27, 0, 28, 27, 29, 0),
	gsSP2Triangles(29, 30, 28, 0, 30, 31, 28, 0),
	gsSPVertex(mario_002_switch_000_displaylist_Head_mesh_layer_1_vtx_1 + 32, 23, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 4, 0, 0, 5, 0, 6, 0),
	gsSP2Triangles(7, 8, 5, 0, 9, 10, 11, 0),
	gsSP2Triangles(10, 9, 12, 0, 12, 9, 13, 0),
	gsSP2Triangles(9, 14, 13, 0, 14, 9, 11, 0),
	gsSP2Triangles(11, 15, 14, 0, 16, 14, 15, 0),
	gsSP2Triangles(15, 17, 16, 0, 17, 15, 18, 0),
	gsSP2Triangles(19, 17, 18, 0, 18, 20, 19, 0),
	gsSP2Triangles(12, 19, 20, 0, 20, 21, 12, 0),
	gsSP2Triangles(12, 21, 10, 0, 12, 13, 19, 0),
	gsSP2Triangles(13, 17, 19, 0, 17, 13, 22, 0),
	gsSP2Triangles(13, 14, 22, 0, 22, 14, 16, 0),
	gsSP1Triangle(22, 16, 17, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_displaylist_Head_mesh_layer_1_vtx_2[6] = {
	{{{103, 64, 90},0, {-347, 894},{0x7, 0x47, 0x69, 0xFF}}},
	{{{168, 48, 92},0, {-192, 202},{0xA, 0x66, 0x4B, 0xFF}}},
	{{{184, 88, 0},0, {504, 99},{0xF2, 0x76, 0x2C, 0xFF}}},
	{{{106, 97, 1},0, {507, 898},{0x65, 0x4D, 0x0, 0xFF}}},
	{{{103, 64, -89},0, {-347, 894},{0x7, 0x47, 0x97, 0xFF}}},
	{{{168, 48, -91},0, {-192, 202},{0xB, 0x68, 0xB7, 0xFF}}},
};

Gfx mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_2[] = {
	gsSPVertex(mario_002_switch_000_displaylist_Head_mesh_layer_1_vtx_2 + 0, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(2, 4, 3, 0, 2, 5, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_displaylist_Head_mesh_layer_1_vtx_3[8] = {
	{{{103, 64, 90},0, {-352, 803},{0x7, 0x47, 0x69, 0xFF}}},
	{{{51, 0, 103},0, {952, 1176},{0x2B, 0x61, 0x46, 0xFF}}},
	{{{116, 26, 101},0, {277, 454},{0xEC, 0x3B, 0x6F, 0xFF}}},
	{{{168, 48, 92},0, {-343, -133},{0xA, 0x66, 0x4B, 0xFF}}},
	{{{103, 64, -89},0, {-336, 757},{0x7, 0x47, 0x97, 0xFF}}},
	{{{116, 26, -99},0, {282, 462},{0xFF, 0x45, 0x95, 0xFF}}},
	{{{51, 0, -102},0, {826, 1194},{0xD7, 0x4D, 0xA4, 0xFF}}},
	{{{168, 48, -91},0, {-241, -145},{0xB, 0x68, 0xB7, 0xFF}}},
};

Gfx mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_3[] = {
	gsSPVertex(mario_002_switch_000_displaylist_Head_mesh_layer_1_vtx_3 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_displaylist_Head_mesh_layer_1_vtx_4[17] = {
	{{{284, 35, -18},0, {-16, 1008},{0xB, 0x59, 0xA7, 0xFF}}},
	{{{328, 18, -17},0, {-16, 1008},{0x48, 0x0, 0x97, 0xFF}}},
	{{{284, 18, -25},0, {-16, 1008},{0xB, 0x0, 0x81, 0xFF}}},
	{{{328, 29, -12},0, {-16, 1008},{0x48, 0x4A, 0xB6, 0xFF}}},
	{{{284, 42, 0},0, {-16, 1008},{0xB, 0x7F, 0x0, 0xFF}}},
	{{{328, 34, 0},0, {-16, 1008},{0x48, 0x69, 0x0, 0xFF}}},
	{{{284, 35, 17},0, {-16, 1008},{0xB, 0x59, 0x59, 0xFF}}},
	{{{328, 29, 11},0, {-16, 1008},{0x48, 0x4A, 0x4A, 0xFF}}},
	{{{284, 18, 24},0, {-16, 1008},{0xB, 0x0, 0x7F, 0xFF}}},
	{{{328, 18, 16},0, {-16, 1008},{0x48, 0x0, 0x69, 0xFF}}},
	{{{328, 6, 11},0, {-16, 1008},{0x48, 0xB6, 0x4A, 0xFF}}},
	{{{284, 0, 17},0, {-16, 1008},{0xB, 0xA7, 0x59, 0xFF}}},
	{{{328, 2, 0},0, {-16, 1008},{0x48, 0x97, 0x0, 0xFF}}},
	{{{284, -7, 0},0, {-16, 1008},{0xB, 0x81, 0x0, 0xFF}}},
	{{{328, 6, -12},0, {-16, 1008},{0x48, 0xB6, 0xB6, 0xFF}}},
	{{{284, 0, -18},0, {-16, 1008},{0xB, 0xA7, 0xA7, 0xFF}}},
	{{{335, 18, 0},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_4[] = {
	gsSPVertex(mario_002_switch_000_displaylist_Head_mesh_layer_1_vtx_4 + 0, 17, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 0, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
	gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
	gsSP2Triangles(10, 9, 8, 0, 10, 8, 11, 0),
	gsSP2Triangles(11, 12, 10, 0, 11, 13, 12, 0),
	gsSP2Triangles(14, 12, 13, 0, 14, 13, 15, 0),
	gsSP2Triangles(15, 1, 14, 0, 15, 2, 1, 0),
	gsSP2Triangles(14, 1, 16, 0, 16, 1, 3, 0),
	gsSP2Triangles(5, 16, 3, 0, 7, 16, 5, 0),
	gsSP2Triangles(9, 16, 7, 0, 10, 16, 9, 0),
	gsSP2Triangles(12, 16, 10, 0, 12, 14, 16, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_displaylist_propeller_mesh_layer_1_vtx_0[44] = {
	{{{19, 282, 5},0, {-16, 1008},{0xA, 0x88, 0x29, 0xFF}}},
	{{{81, 279, -51},0, {-16, 1008},{0x6D, 0x1D, 0x3A, 0xFF}}},
	{{{21, 286, 6},0, {-16, 1008},{0x51, 0x38, 0x50, 0xFF}}},
	{{{77, 269, -54},0, {-16, 1008},{0x34, 0x8F, 0x18, 0xFF}}},
	{{{41, 284, -74},0, {-16, 1008},{0xD0, 0x8D, 0xE7, 0xFF}}},
	{{{3, 291, -1},0, {-16, 1008},{0xC9, 0x8F, 0xED, 0xFF}}},
	{{{-10, 299, -12},0, {-16, 1008},{0x96, 0xC0, 0xE3, 0xFF}}},
	{{{9, 306, -93},0, {-16, 1008},{0x97, 0xE3, 0xBE, 0xFF}}},
	{{{-9, 303, -11},0, {-16, 1008},{0xCF, 0x75, 0xA, 0xFF}}},
	{{{13, 316, -90},0, {-16, 1008},{0xD1, 0x72, 0xE0, 0xFF}}},
	{{{48, 301, -70},0, {-16, 1008},{0x2E, 0x73, 0x1C, 0xFF}}},
	{{{4, 295, 0},0, {-16, 1008},{0x2B, 0x72, 0x25, 0xFF}}},
	{{{64, 300, -98},0, {-16, 1008},{0x32, 0x73, 0x14, 0xFF}}},
	{{{89, 289, -110},0, {-16, 1008},{0x73, 0x2A, 0xDE, 0xFF}}},
	{{{86, 280, -112},0, {-16, 1008},{0x3E, 0xA6, 0xBF, 0xFF}}},
	{{{58, 285, -101},0, {-16, 1008},{0xD5, 0x8D, 0xDF, 0xFF}}},
	{{{55, 296, -130},0, {-16, 1008},{0xE4, 0xD6, 0x8B, 0xFF}}},
	{{{59, 305, -128},0, {-16, 1008},{0x19, 0x5A, 0xAA, 0xFF}}},
	{{{-14, 287, -7},0, {-16, 1008},{0xAF, 0x37, 0xAF, 0xFF}}},
	{{{-41, 301, 69},0, {-16, 1008},{0xD3, 0x74, 0xE4, 0xFF}}},
	{{{3, 294, -1},0, {-16, 1008},{0xD9, 0x74, 0xDE, 0xFF}}},
	{{{-74, 279, 50},0, {-16, 1008},{0x92, 0x1D, 0xC7, 0xFF}}},
	{{{-13, 283, -6},0, {-16, 1008},{0xF6, 0x87, 0xD9, 0xFF}}},
	{{{-70, 269, 53},0, {-16, 1008},{0xCC, 0x8F, 0xE8, 0xFF}}},
	{{{-35, 284, 73},0, {-16, 1008},{0x2F, 0x8D, 0x19, 0xFF}}},
	{{{4, 291, 0},0, {-16, 1008},{0x32, 0x8C, 0x11, 0xFF}}},
	{{{18, 298, 11},0, {-16, 1008},{0x6B, 0xC1, 0x1C, 0xFF}}},
	{{{-2, 306, 92},0, {-16, 1008},{0x69, 0xE4, 0x42, 0xFF}}},
	{{{16, 302, 10},0, {-16, 1008},{0x30, 0x75, 0xF7, 0xFF}}},
	{{{-6, 316, 90},0, {-16, 1008},{0x2F, 0x72, 0x20, 0xFF}}},
	{{{-57, 300, 97},0, {-16, 1008},{0xCE, 0x73, 0xEC, 0xFF}}},
	{{{-52, 305, 127},0, {-16, 1008},{0xE7, 0x5A, 0x56, 0xFF}}},
	{{{-83, 289, 109},0, {-16, 1008},{0x8D, 0x2A, 0x22, 0xFF}}},
	{{{-52, 305, 127},0, {-16, 1008},{0xE7, 0x5A, 0x56, 0xFF}}},
	{{{-57, 300, 97},0, {-16, 1008},{0xCE, 0x73, 0xEC, 0xFF}}},
	{{{-74, 279, 50},0, {-16, 1008},{0x92, 0x1D, 0xC7, 0xFF}}},
	{{{-41, 301, 69},0, {-16, 1008},{0xD3, 0x74, 0xE4, 0xFF}}},
	{{{-79, 280, 112},0, {-16, 1008},{0xC2, 0xA6, 0x41, 0xFF}}},
	{{{-70, 269, 53},0, {-16, 1008},{0xCC, 0x8F, 0xE8, 0xFF}}},
	{{{-51, 285, 100},0, {-16, 1008},{0x2B, 0x8D, 0x21, 0xFF}}},
	{{{-35, 284, 73},0, {-16, 1008},{0x2F, 0x8D, 0x19, 0xFF}}},
	{{{-2, 306, 92},0, {-16, 1008},{0x69, 0xE4, 0x42, 0xFF}}},
	{{{-49, 296, 129},0, {-16, 1008},{0x1C, 0xD6, 0x75, 0xFF}}},
	{{{-6, 316, 90},0, {-16, 1008},{0x2F, 0x72, 0x20, 0xFF}}},
};

Gfx mario_002_switch_000_displaylist_propeller_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_displaylist_propeller_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
	gsSP2Triangles(10, 9, 8, 0, 10, 8, 11, 0),
	gsSP2Triangles(2, 10, 11, 0, 2, 1, 10, 0),
	gsSP2Triangles(1, 12, 10, 0, 1, 13, 12, 0),
	gsSP2Triangles(14, 13, 1, 0, 14, 1, 3, 0),
	gsSP2Triangles(3, 15, 14, 0, 3, 4, 15, 0),
	gsSP2Triangles(7, 15, 4, 0, 7, 16, 15, 0),
	gsSP2Triangles(9, 16, 7, 0, 9, 17, 16, 0),
	gsSP2Triangles(12, 17, 9, 0, 12, 9, 10, 0),
	gsSP2Triangles(17, 12, 13, 0, 16, 17, 13, 0),
	gsSP2Triangles(16, 13, 14, 0, 16, 14, 15, 0),
	gsSP2Triangles(18, 19, 20, 0, 18, 21, 19, 0),
	gsSP2Triangles(21, 18, 22, 0, 21, 22, 23, 0),
	gsSP2Triangles(24, 23, 22, 0, 24, 22, 25, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(27, 26, 28, 0, 27, 28, 29, 0),
	gsSP2Triangles(19, 29, 28, 0, 19, 28, 20, 0),
	gsSP2Triangles(30, 29, 19, 0, 30, 31, 29, 0),
	gsSPVertex(mario_002_switch_000_displaylist_propeller_mesh_layer_1_vtx_0 + 32, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	gsSP2Triangles(2, 4, 3, 0, 3, 5, 0, 0),
	gsSP2Triangles(3, 6, 5, 0, 7, 5, 6, 0),
	gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 9, 10, 0, 11, 10, 9, 0),
	gsSP2Triangles(11, 1, 10, 0, 10, 1, 0, 0),
	gsSP2Triangles(10, 0, 5, 0, 5, 7, 10, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_displaylist_001_RWing_mesh_layer_4_vtx_0[3] = {
	{{{-157, -4, 21},0, {-509, 2059},{0xEA, 0x0, 0x83, 0xFF}}},
	{{{6, 340, -6},0, {1061, -1152},{0xEA, 0x0, 0x83, 0xFF}}},
	{{{182, 2, -39},0, {2903, 1940},{0xEA, 0x0, 0x83, 0xFF}}},
};

Gfx mario_002_switch_000_displaylist_001_RWing_mesh_layer_4_tri_0[] = {
	gsSPVertex(mario_002_switch_000_displaylist_001_RWing_mesh_layer_4_vtx_0 + 0, 3, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_displaylist_002_LWing_mesh_layer_4_vtx_0[3] = {
	{{{-157, -4, -21},0, {-509, 2059},{0xEA, 0x0, 0x7D, 0xFF}}},
	{{{182, 2, 39},0, {2903, 1940},{0xEA, 0x0, 0x7D, 0xFF}}},
	{{{6, 340, 6},0, {1061, -1152},{0xEA, 0x0, 0x7D, 0xFF}}},
};

Gfx mario_002_switch_000_displaylist_002_LWing_mesh_layer_4_tri_0[] = {
	gsSPVertex(mario_002_switch_000_displaylist_002_LWing_mesh_layer_4_vtx_0 + 0, 3, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_003_LShoulder_skinned_mesh_layer_1_vtx_0[5] = {
	{{{53, 51, 75},0, {711, 406},{0x28, 0x4F, 0x5B, 0xFF}}},
	{{{89, 14, 62},0, {712, 409},{0x6C, 0x2B, 0x33, 0xFF}}},
	{{{93, -29, 63},0, {710, 410},{0x63, 0xD4, 0x43, 0xFF}}},
	{{{29, -2, 91},0, {707, 405},{0x4, 0x12, 0x7E, 0xFF}}},
	{{{52, -38, 90},0, {706, 408},{0x1B, 0xCD, 0x71, 0xFF}}},
};

Gfx mario_002_switch_000_offset_003_LShoulder_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_003_LShoulder_skinned_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_003_LShoulder_mesh_layer_1_vtx_0[5] = {
	{{{6, -16, 41},0, {711, 410},{0x91, 0xC5, 0x12, 0xFF}}},
	{{{31, -37, 4},0, {711, 410},{0xD3, 0x89, 0x2, 0xFF}}},
	{{{60, -14, -25},0, {711, 411},{0xD6, 0xE4, 0x8B, 0xFF}}},
	{{{80, 21, -12},0, {711, 411},{0xD9, 0x6D, 0xCC, 0xFF}}},
	{{{80, 19, 24},0, {711, 411},{0xD6, 0x5F, 0x4A, 0xFF}}},
};

Gfx mario_002_switch_000_offset_003_LShoulder_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_003_LShoulder_mesh_layer_1_vtx_0 + 0, 5, 5),
	gsSP2Triangles(1, 5, 2, 0, 0, 5, 1, 0),
	gsSP2Triangles(5, 0, 6, 0, 6, 0, 7, 0),
	gsSP2Triangles(0, 3, 7, 0, 7, 3, 8, 0),
	gsSP2Triangles(3, 4, 8, 0, 4, 2, 8, 0),
	gsSP2Triangles(2, 9, 8, 0, 2, 5, 9, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_003_LShoulder_mesh_layer_1_vtx_1[4] = {
	{{{6, -16, 41},0, {711, 410},{0x91, 0xC5, 0x12, 0xFF}}},
	{{{60, -16, 34},0, {711, 411},{0xEA, 0xE7, 0x7B, 0xFF}}},
	{{{80, 19, 24},0, {711, 411},{0xD6, 0x5F, 0x4A, 0xFF}}},
	{{{31, -37, 4},0, {711, 410},{0xD3, 0x89, 0x2, 0xFF}}},
};

Gfx mario_002_switch_000_offset_003_LShoulder_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_002_switch_000_offset_003_LShoulder_mesh_layer_1_vtx_1 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_004_LArm_skinned_mesh_layer_1_vtx_0[5] = {
	{{{80, 19, 24},0, {711, 411},{0xD6, 0x5F, 0x4A, 0xFF}}},
	{{{80, 21, -12},0, {711, 411},{0xD9, 0x6D, 0xCC, 0xFF}}},
	{{{60, -16, 34},0, {711, 411},{0xEA, 0xE7, 0x7B, 0xFF}}},
	{{{31, -37, 4},0, {711, 410},{0xD3, 0x89, 0x2, 0xFF}}},
	{{{60, -14, -25},0, {711, 411},{0xD6, 0xE4, 0x8B, 0xFF}}},
};

Gfx mario_002_switch_000_offset_004_LArm_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_004_LArm_skinned_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_004_LArm_mesh_layer_1_vtx_0[5] = {
	{{{58, 14, 22},0, {712, 412},{0x96, 0xF, 0x44, 0xFF}}},
	{{{58, 16, -10},0, {713, 412},{0x89, 0x24, 0xE6, 0xFF}}},
	{{{57, -17, 31},0, {712, 412},{0xCD, 0xBE, 0x60, 0xFF}}},
	{{{56, -34, 5},0, {712, 411},{0xD1, 0x8B, 0xF3, 0xFF}}},
	{{{57, -20, -18},0, {712, 412},{0xBC, 0xD4, 0x9E, 0xFF}}},
};

Gfx mario_002_switch_000_offset_004_LArm_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_004_LArm_mesh_layer_1_vtx_0 + 0, 5, 5),
	gsSP2Triangles(0, 5, 6, 0, 0, 2, 5, 0),
	gsSP2Triangles(2, 7, 5, 0, 2, 3, 7, 0),
	gsSP2Triangles(3, 8, 7, 0, 3, 4, 8, 0),
	gsSP2Triangles(4, 9, 8, 0, 4, 1, 9, 0),
	gsSP2Triangles(1, 6, 9, 0, 1, 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_005_LHand_skinned_mesh_layer_1_vtx_0[5] = {
	{{{57, -20, -18},0, {58, 161},{0xBC, 0xD4, 0x9E, 0xFF}}},
	{{{58, 16, -10},0, {58, 161},{0x89, 0x24, 0xE6, 0xFF}}},
	{{{57, -17, 31},0, {58, 161},{0xCD, 0xBE, 0x60, 0xFF}}},
	{{{56, -34, 5},0, {58, 161},{0xD1, 0x8B, 0xF3, 0xFF}}},
	{{{58, 14, 22},0, {58, 159},{0x96, 0xF, 0x44, 0xFF}}},
};

Gfx mario_002_switch_000_offset_005_LHand_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_005_LHand_skinned_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_005_LHand_mesh_layer_1_vtx_0[5] = {
	{{{-10, 26, -29},0, {58, 161},{0xB8, 0x31, 0xA3, 0xFF}}},
	{{{17, -38, -30},0, {58, 161},{0x5, 0xAB, 0xA1, 0xFF}}},
	{{{27, -58, 15},0, {58, 161},{0x18, 0x8A, 0x2A, 0xFF}}},
	{{{5, -6, 45},0, {58, 161},{0xE4, 0xFF, 0x7C, 0xFF}}},
	{{{-18, 45, 17},0, {58, 161},{0xA4, 0x50, 0x25, 0xFF}}},
};

Gfx mario_002_switch_000_offset_005_LHand_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_005_LHand_mesh_layer_1_vtx_0 + 0, 5, 5),
	gsSP2Triangles(5, 0, 1, 0, 5, 6, 0, 0),
	gsSP2Triangles(6, 3, 0, 0, 6, 7, 3, 0),
	gsSP2Triangles(7, 2, 3, 0, 7, 8, 2, 0),
	gsSP2Triangles(2, 8, 4, 0, 4, 8, 9, 0),
	gsSP2Triangles(9, 1, 4, 0, 9, 5, 1, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_005_LHand_mesh_layer_1_vtx_1[10] = {
	{{{-1, 39, 14},0, {58, 161},{0xDF, 0x73, 0x2A, 0xFF}}},
	{{{4, 24, -22},0, {58, 161},{0xF2, 0x47, 0x97, 0xFF}}},
	{{{-10, 26, -29},0, {58, 161},{0xB8, 0x31, 0xA3, 0xFF}}},
	{{{26, -25, -23},0, {58, 161},{0x1A, 0xD7, 0x8B, 0xFF}}},
	{{{17, -38, -30},0, {58, 161},{0x5, 0xAB, 0xA1, 0xFF}}},
	{{{34, -41, 12},0, {58, 161},{0x45, 0x9B, 0x23, 0xFF}}},
	{{{27, -58, 15},0, {58, 161},{0x18, 0x8A, 0x2A, 0xFF}}},
	{{{5, -6, 45},0, {58, 161},{0xE4, 0xFF, 0x7C, 0xFF}}},
	{{{17, -1, 36},0, {58, 161},{0x3, 0x2, 0x7F, 0xFF}}},
	{{{-18, 45, 17},0, {58, 161},{0xA4, 0x50, 0x25, 0xFF}}},
};

Gfx mario_002_switch_000_offset_005_LHand_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_002_switch_000_offset_005_LHand_mesh_layer_1_vtx_1 + 0, 10, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(3, 4, 2, 0, 4, 3, 5, 0),
	gsSP2Triangles(5, 6, 4, 0, 7, 6, 5, 0),
	gsSP2Triangles(5, 8, 7, 0, 7, 8, 0, 0),
	gsSP2Triangles(0, 9, 7, 0, 2, 9, 0, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_displaylist_003_LHand_mesh_layer_1_vtx_0[12] = {
	{{{-1, 39, 14},0, {58, 161},{0xEF, 0x77, 0x2A, 0xFF}}},
	{{{17, -1, 36},0, {58, 161},{0x2, 0xFF, 0x7F, 0xFF}}},
	{{{36, 6, 51},0, {58, 161},{0xFB, 0xFB, 0x7F, 0xFF}}},
	{{{34, -41, 12},0, {58, 161},{0x50, 0xA2, 0x20, 0xFF}}},
	{{{88, -33, 13},0, {58, 161},{0x5D, 0xB1, 0x22, 0xFF}}},
	{{{80, -8, -47},0, {58, 161},{0x42, 0xE4, 0x97, 0xFF}}},
	{{{26, -25, -23},0, {58, 161},{0x30, 0xD3, 0x93, 0xFF}}},
	{{{4, 24, -22},0, {58, 161},{0x7, 0x41, 0x93, 0xFF}}},
	{{{44, 59, -24},0, {58, 161},{0x5, 0x69, 0xB8, 0xFF}}},
	{{{36, 64, 17},0, {58, 161},{0xFC, 0x76, 0x2F, 0xFF}}},
	{{{86, 29, 50},0, {58, 161},{0x47, 0x23, 0x63, 0xFF}}},
	{{{99, 40, -7},0, {58, 161},{0x6B, 0x41, 0xEA, 0xFF}}},
};

Gfx mario_002_switch_000_displaylist_003_LHand_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_displaylist_003_LHand_mesh_layer_1_vtx_0 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(3, 4, 2, 0, 5, 4, 3, 0),
	gsSP2Triangles(6, 5, 3, 0, 6, 7, 5, 0),
	gsSP2Triangles(5, 7, 8, 0, 0, 8, 7, 0),
	gsSP2Triangles(8, 0, 9, 0, 2, 9, 0, 0),
	gsSP2Triangles(2, 10, 9, 0, 4, 10, 2, 0),
	gsSP2Triangles(4, 11, 10, 0, 5, 11, 4, 0),
	gsSP2Triangles(5, 8, 11, 0, 9, 11, 8, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_006_Rshoulder_skinned_mesh_layer_1_vtx_0[5] = {
	{{{29, -2, -91},0, {345, 489},{0x7, 0x9, 0x82, 0xFF}}},
	{{{52, 51, -74},0, {341, 518},{0x28, 0x4B, 0xA1, 0xFF}}},
	{{{93, -29, -62},0, {361, 492},{0x63, 0xD3, 0xBE, 0xFF}}},
	{{{54, -44, -80},0, {359, 485},{0x23, 0xC3, 0x96, 0xFF}}},
	{{{89, 14, -61},0, {364, 508},{0x67, 0x29, 0xC2, 0xFF}}},
};

Gfx mario_002_switch_000_offset_006_Rshoulder_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_006_Rshoulder_skinned_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_006_Rshoulder_mesh_layer_1_vtx_0[5] = {
	{{{60, -17, 29},0, {360, 499},{0xD9, 0xCB, 0x6D, 0xFF}}},
	{{{80, 18, 19},0, {360, 500},{0xE0, 0x67, 0x43, 0xFF}}},
	{{{80, 20, -18},0, {359, 499},{0xDD, 0x6A, 0xC3, 0xFF}}},
	{{{6, -15, -39},0, {355, 498},{0xE9, 0xF, 0x84, 0xFF}}},
	{{{31, -38, -3},0, {359, 498},{0xC4, 0x90, 0xF7, 0xFF}}},
};

Gfx mario_002_switch_000_offset_006_Rshoulder_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_006_Rshoulder_mesh_layer_1_vtx_0 + 0, 5, 5),
	gsSP2Triangles(5, 0, 1, 0, 5, 6, 0, 0),
	gsSP2Triangles(6, 3, 0, 0, 6, 2, 3, 0),
	gsSP2Triangles(6, 7, 2, 0, 7, 8, 2, 0),
	gsSP2Triangles(4, 2, 8, 0, 4, 8, 1, 0),
	gsSP2Triangles(9, 1, 8, 0, 9, 5, 1, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_006_Rshoulder_mesh_layer_1_vtx_1[4] = {
	{{{60, -14, -31},0, {359, 499},{0xF5, 0xF9, 0x82, 0xFF}}},
	{{{31, -38, -3},0, {359, 498},{0xC4, 0x90, 0xF7, 0xFF}}},
	{{{6, -15, -39},0, {355, 498},{0xE9, 0xF, 0x84, 0xFF}}},
	{{{80, 20, -18},0, {359, 499},{0xDD, 0x6A, 0xC3, 0xFF}}},
};

Gfx mario_002_switch_000_offset_006_Rshoulder_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_002_switch_000_offset_006_Rshoulder_mesh_layer_1_vtx_1 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_007_RArm_skinned_mesh_layer_1_vtx_0[6] = {
	{{{60, -17, 29},0, {360, 499},{0xD9, 0xCB, 0x6D, 0xFF}}},
	{{{31, -38, -3},0, {359, 498},{0xC4, 0x90, 0xF7, 0xFF}}},
	{{{60, -14, -31},0, {359, 499},{0xF5, 0xF9, 0x82, 0xFF}}},
	{{{80, 20, -18},0, {359, 499},{0xDD, 0x6A, 0xC3, 0xFF}}},
	{{{80, 18, 19},0, {360, 500},{0xE0, 0x67, 0x43, 0xFF}}},
	{{{80, 18, 19},0, {-16, -16},{0xE0, 0x67, 0x43, 0xFF}}},
};

Gfx mario_002_switch_000_offset_007_RArm_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_007_RArm_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_007_RArm_mesh_layer_1_vtx_0[7] = {
	{{{53, -23, 22},0, {-16, -16},{0xC0, 0xCE, 0x62, 0xFF}}},
	{{{54, 13, 16},0, {-16, -16},{0xA2, 0x41, 0x38, 0xFF}}},
	{{{54, 13, 16},0, {359, 499},{0xA2, 0x41, 0x38, 0xFF}}},
	{{{54, 15, -16},0, {359, 499},{0xA4, 0x2B, 0xB4, 0xFF}}},
	{{{53, -15, -28},0, {359, 499},{0xD1, 0xC9, 0x97, 0xFF}}},
	{{{52, -36, -3},0, {359, 499},{0xD5, 0x88, 0x2, 0xFF}}},
	{{{53, -23, 22},0, {360, 499},{0xC0, 0xCE, 0x62, 0xFF}}},
};

Gfx mario_002_switch_000_offset_007_RArm_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_007_RArm_mesh_layer_1_vtx_0 + 0, 7, 6),
	gsSP2Triangles(6, 7, 5, 0, 8, 3, 4, 0),
	gsSP2Triangles(8, 9, 3, 0, 9, 2, 3, 0),
	gsSP2Triangles(9, 10, 2, 0, 10, 1, 2, 0),
	gsSP2Triangles(10, 11, 1, 0, 11, 0, 1, 0),
	gsSP2Triangles(11, 12, 0, 0, 12, 4, 0, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_008_RHand_skinned_mesh_layer_1_vtx_0[6] = {
	{{{54, 13, 16},0, {58, 159},{0xA2, 0x41, 0x38, 0xFF}}},
	{{{54, 15, -16},0, {58, 159},{0xA4, 0x2B, 0xB4, 0xFF}}},
	{{{54, 15, -16},0, {58, 161},{0xA4, 0x2B, 0xB4, 0xFF}}},
	{{{52, -36, -3},0, {58, 161},{0xD5, 0x88, 0x2, 0xFF}}},
	{{{53, -15, -28},0, {58, 161},{0xD1, 0xC9, 0x97, 0xFF}}},
	{{{53, -23, 22},0, {58, 159},{0xC0, 0xCE, 0x62, 0xFF}}},
};

Gfx mario_002_switch_000_offset_008_RHand_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_008_RHand_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_008_RHand_mesh_layer_1_vtx_0[6] = {
	{{{-19, 47, -13},0, {58, 159},{0xBA, 0x65, 0xDE, 0xFF}}},
	{{{-14, 27, 32},0, {58, 159},{0xDA, 0x3C, 0x6A, 0xFF}}},
	{{{13, -37, 33},0, {58, 159},{0x9, 0xAA, 0x5D, 0xFF}}},
	{{{24, -57, -12},0, {58, 161},{0x1A, 0x8C, 0xD4, 0xFF}}},
	{{{4, -3, -41},0, {58, 161},{0xEE, 0x6, 0x82, 0xFF}}},
	{{{-19, 47, -13},0, {58, 161},{0xBA, 0x65, 0xDE, 0xFF}}},
};

Gfx mario_002_switch_000_offset_008_RHand_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_008_RHand_mesh_layer_1_vtx_0 + 0, 6, 6),
	gsSP2Triangles(0, 6, 1, 0, 0, 7, 6, 0),
	gsSP2Triangles(7, 0, 5, 0, 7, 5, 8, 0),
	gsSP2Triangles(8, 5, 3, 0, 8, 3, 9, 0),
	gsSP2Triangles(9, 3, 4, 0, 9, 4, 10, 0),
	gsSP2Triangles(10, 4, 2, 0, 10, 2, 11, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_008_RHand_mesh_layer_1_vtx_1[10] = {
	{{{-14, 27, 32},0, {58, 161},{0xDA, 0x3C, 0x6A, 0xFF}}},
	{{{13, -37, 33},0, {58, 161},{0x9, 0xAA, 0x5D, 0xFF}}},
	{{{23, -26, 26},0, {58, 161},{0x1E, 0xD2, 0x73, 0xFF}}},
	{{{31, -40, -10},0, {58, 161},{0x43, 0x9C, 0xD7, 0xFF}}},
	{{{24, -57, -12},0, {58, 161},{0x1A, 0x8C, 0xD4, 0xFF}}},
	{{{4, -3, -41},0, {58, 161},{0xEE, 0x6, 0x82, 0xFF}}},
	{{{15, 0, -32},0, {58, 161},{0xB, 0x4, 0x82, 0xFF}}},
	{{{-2, 41, -10},0, {58, 161},{0xEB, 0x77, 0xD9, 0xFF}}},
	{{{-19, 47, -13},0, {58, 161},{0xBA, 0x65, 0xDE, 0xFF}}},
	{{{1, 24, 26},0, {58, 161},{0xFB, 0x43, 0x6C, 0xFF}}},
};

Gfx mario_002_switch_000_offset_008_RHand_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_002_switch_000_offset_008_RHand_mesh_layer_1_vtx_1 + 0, 10, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
	gsSP2Triangles(1, 4, 3, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 6, 3, 0, 7, 6, 5, 0),
	gsSP2Triangles(5, 8, 7, 0, 7, 8, 0, 0),
	gsSP2Triangles(0, 9, 7, 0, 2, 9, 0, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_displaylist_004_Rhand_mesh_layer_1_vtx_0[12] = {
	{{{31, -40, -10},0, {58, 161},{0x4C, 0xA2, 0xD9, 0xFF}}},
	{{{76, -10, 53},0, {58, 161},{0x3E, 0xDE, 0x6A, 0xFF}}},
	{{{23, -26, 26},0, {58, 161},{0x2D, 0xCA, 0x6A, 0xFF}}},
	{{{85, -33, -8},0, {58, 161},{0x5D, 0xB0, 0xDD, 0xFF}}},
	{{{35, 9, -46},0, {58, 161},{0x0, 0x1, 0x81, 0xFF}}},
	{{{15, 0, -32},0, {58, 161},{0x9, 0x1, 0x81, 0xFF}}},
	{{{-2, 41, -10},0, {58, 161},{0xF3, 0x78, 0xD7, 0xFF}}},
	{{{35, 64, -9},0, {58, 161},{0x0, 0x78, 0xD6, 0xFF}}},
	{{{42, 58, 30},0, {58, 161},{0x4, 0x67, 0x4B, 0xFF}}},
	{{{1, 24, 26},0, {58, 161},{0x6, 0x3C, 0x70, 0xFF}}},
	{{{97, 39, 15},0, {58, 161},{0x6B, 0x3F, 0x1C, 0xFF}}},
	{{{86, 30, -42},0, {58, 161},{0x4C, 0x25, 0xA1, 0xFF}}},
};

Gfx mario_002_switch_000_displaylist_004_Rhand_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_displaylist_004_Rhand_mesh_layer_1_vtx_0 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 0, 5, 4, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
	gsSP2Triangles(7, 6, 8, 0, 8, 6, 9, 0),
	gsSP2Triangles(8, 9, 1, 0, 1, 9, 2, 0),
	gsSP2Triangles(10, 8, 1, 0, 8, 10, 7, 0),
	gsSP2Triangles(7, 10, 11, 0, 11, 10, 3, 0),
	gsSP2Triangles(3, 10, 1, 0, 4, 11, 3, 0),
	gsSP1Triangle(7, 11, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_009_LThigh_skinned_mesh_layer_1_vtx_0[10] = {
	{{{14, -41, 90},0, {1145, 972},{0xB5, 0xE1, 0x62, 0xFF}}},
	{{{-6, -66, 0},0, {1412, 1072},{0x85, 0xDF, 0x0, 0xFF}}},
	{{{14, -41, 90},0, {643, 329},{0xB5, 0xE1, 0x62, 0xFF}}},
	{{{-6, -66, 0},0, {-16, -16},{0x85, 0xDF, 0x0, 0xFF}}},
	{{{-23, 57, 0},0, {-16, -16},{0x86, 0x22, 0x0, 0xFF}}},
	{{{49, 65, 63},0, {755, 1022},{0xC8, 0x41, 0x5E, 0xFF}}},
	{{{14, -41, 90},0, {-1045, 754},{0xB5, 0xE1, 0x62, 0xFF}}},
	{{{49, 65, 63},0, {-145, 1019},{0xC8, 0x41, 0x5E, 0xFF}}},
	{{{49, 65, 63},0, {764, 707},{0xC8, 0x41, 0x5E, 0xFF}}},
	{{{-23, 57, 0},0, {-9, 1253},{0x86, 0x22, 0x0, 0xFF}}},
};

Gfx mario_002_switch_000_offset_009_LThigh_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_009_LThigh_skinned_mesh_layer_1_vtx_0 + 0, 10, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_009_LThigh_mesh_layer_1_vtx_0[11] = {
	{{{56, 47, 32},0, {974, 1249},{0xB1, 0x46, 0x47, 0xFF}}},
	{{{87, -15, 49},0, {748, 688},{0xC7, 0xDA, 0x6B, 0xFF}}},
	{{{56, 47, 32},0, {962, 550},{0xB1, 0x46, 0x47, 0xFF}}},
	{{{85, -46, 9},0, {1428, 124},{0xCA, 0x8E, 0xF, 0xFF}}},
	{{{87, -15, 49},0, {1012, 117},{0xC7, 0xDA, 0x6B, 0xFF}}},
	{{{87, -15, 49},0, {-457, 133},{0xC7, 0xDA, 0x6B, 0xFF}}},
	{{{85, -46, 9},0, {1770, 1599},{0xCA, 0x8E, 0xF, 0xFF}}},
	{{{56, 47, 32},0, {-16, -16},{0xB1, 0x46, 0x47, 0xFF}}},
	{{{57, 47, -16},0, {-16, -16},{0xBE, 0x55, 0xBC, 0xFF}}},
	{{{87, -15, -31},0, {-16, -16},{0xDA, 0xD5, 0x8F, 0xFF}}},
	{{{85, -46, 9},0, {-16, -16},{0xCA, 0x8E, 0xF, 0xFF}}},
};

Gfx mario_002_switch_000_offset_009_LThigh_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_009_LThigh_mesh_layer_1_vtx_0 + 0, 11, 10),
	gsSP2Triangles(0, 10, 1, 0, 2, 11, 12, 0),
	gsSP2Triangles(13, 14, 5, 0, 15, 6, 7, 0),
	gsSP2Triangles(8, 9, 16, 0, 17, 18, 3, 0),
	gsSP2Triangles(4, 3, 18, 0, 18, 19, 4, 0),
	gsSP1Triangle(4, 19, 20, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_010_LLeg_skinned_mesh_layer_1_vtx_0[5] = {
	{{{85, -46, 9},0, {-16, -16},{0xCA, 0x8E, 0xF, 0xFF}}},
	{{{56, 47, 32},0, {-16, -16},{0xB1, 0x46, 0x47, 0xFF}}},
	{{{57, 47, -16},0, {-16, -16},{0xBE, 0x55, 0xBC, 0xFF}}},
	{{{87, -15, -31},0, {-16, -16},{0xDA, 0xD5, 0x8F, 0xFF}}},
	{{{87, -15, 49},0, {-16, -16},{0xC7, 0xDA, 0x6B, 0xFF}}},
};

Gfx mario_002_switch_000_offset_010_LLeg_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_010_LLeg_skinned_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_010_LLeg_mesh_layer_1_vtx_0[5] = {
	{{{59, 44, -16},0, {-16, -16},{0x8D, 0xF3, 0xCB, 0xFF}}},
	{{{59, 44, 36},0, {-16, -16},{0x93, 0xF2, 0x40, 0xFF}}},
	{{{53, -5, 55},0, {-16, -16},{0xED, 0xD1, 0x75, 0xFF}}},
	{{{38, -38, 11},0, {-16, -16},{0xA, 0x82, 0xC, 0xFF}}},
	{{{54, -18, -30},0, {-16, -16},{0xF2, 0xC2, 0x92, 0xFF}}},
};

Gfx mario_002_switch_000_offset_010_LLeg_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_010_LLeg_mesh_layer_1_vtx_0 + 0, 5, 5),
	gsSP2Triangles(1, 5, 2, 0, 1, 6, 5, 0),
	gsSP2Triangles(1, 7, 6, 0, 1, 4, 7, 0),
	gsSP2Triangles(7, 4, 0, 0, 0, 8, 7, 0),
	gsSP2Triangles(0, 9, 8, 0, 0, 3, 9, 0),
	gsSP2Triangles(9, 3, 2, 0, 2, 5, 9, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_011_LFoot_skinned_mesh_layer_1_vtx_0[5] = {
	{{{53, -5, 55},0, {-16, -16},{0xED, 0xD1, 0x75, 0xFF}}},
	{{{59, 44, 36},0, {-16, -16},{0x93, 0xF2, 0x40, 0xFF}}},
	{{{38, -38, 11},0, {-16, -16},{0xA, 0x82, 0xC, 0xFF}}},
	{{{54, -18, -30},0, {-16, -16},{0xF2, 0xC2, 0x92, 0xFF}}},
	{{{59, 44, -16},0, {-16, -16},{0x8D, 0xF3, 0xCB, 0xFF}}},
};

Gfx mario_002_switch_000_offset_011_LFoot_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_011_LFoot_skinned_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_011_LFoot_mesh_layer_1_vtx_0[6] = {
	{{{-14, 46, 53},0, {-16, -16},{0xB0, 0x52, 0x37, 0xFF}}},
	{{{75, 13, 61},0, {-16, -16},{0x4D, 0x24, 0x5F, 0xFF}}},
	{{{77, -39, 7},0, {-16, -16},{0x46, 0x96, 0x0, 0xFF}}},
	{{{73, 12, -41},0, {-16, -16},{0x4F, 0x16, 0x9F, 0xFF}}},
	{{{-15, 45, -32},0, {-16, -16},{0xAE, 0x56, 0xD4, 0xFF}}},
	{{{-45, 57, 9},0, {-16, -16},{0x77, 0xD5, 0xF6, 0xFF}}},
};

Gfx mario_002_switch_000_offset_011_LFoot_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_011_LFoot_mesh_layer_1_vtx_0 + 0, 6, 5),
	gsSP2Triangles(1, 0, 5, 0, 0, 6, 5, 0),
	gsSP2Triangles(0, 7, 6, 0, 7, 0, 2, 0),
	gsSP2Triangles(2, 3, 7, 0, 7, 3, 8, 0),
	gsSP2Triangles(3, 9, 8, 0, 3, 4, 9, 0),
	gsSP2Triangles(10, 9, 4, 0, 10, 4, 1, 0),
	gsSP1Triangle(1, 5, 10, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_011_LFoot_mesh_layer_1_vtx_1[7] = {
	{{{-14, 46, 53},0, {-16, -16},{0xB0, 0x52, 0x37, 0xFF}}},
	{{{-15, 45, -32},0, {-16, -16},{0xAE, 0x56, 0xD4, 0xFF}}},
	{{{-45, 57, 9},0, {-16, -16},{0x77, 0xD5, 0xF6, 0xFF}}},
	{{{75, 13, 61},0, {-16, -16},{0x4D, 0x24, 0x5F, 0xFF}}},
	{{{73, 12, -41},0, {-16, -16},{0x4F, 0x16, 0x9F, 0xFF}}},
	{{{107, 1, 8},0, {-16, -16},{0x7F, 0x8, 0xFD, 0xFF}}},
	{{{77, -39, 7},0, {-16, -16},{0x46, 0x96, 0x0, 0xFF}}},
};

Gfx mario_002_switch_000_offset_011_LFoot_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_002_switch_000_offset_011_LFoot_mesh_layer_1_vtx_1 + 0, 7, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
	gsSP2Triangles(6, 5, 3, 0, 5, 6, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_012_RThigh_skinned_mesh_layer_1_vtx_0[8] = {
	{{{49, 65, -63},0, {755, 1022},{0xCA, 0x3F, 0xA0, 0xFF}}},
	{{{14, -40, -90},0, {-1045, 754},{0xB6, 0xE1, 0x9D, 0xFF}}},
	{{{49, 65, -63},0, {-145, 1019},{0xCA, 0x3F, 0xA0, 0xFF}}},
	{{{14, -40, -90},0, {-16, -16},{0xB6, 0xE1, 0x9D, 0xFF}}},
	{{{-6, -66, 0},0, {-16, -16},{0x85, 0xDF, 0x0, 0xFF}}},
	{{{-23, 57, 0},0, {-16, -16},{0x86, 0x22, 0x0, 0xFF}}},
	{{{-23, 57, 0},0, {-9, 1253},{0x86, 0x22, 0x0, 0xFF}}},
	{{{49, 65, -63},0, {764, 707},{0xCA, 0x3F, 0xA0, 0xFF}}},
};

Gfx mario_002_switch_000_offset_012_RThigh_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_012_RThigh_skinned_mesh_layer_1_vtx_0 + 0, 8, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_012_RThigh_mesh_layer_1_vtx_0[9] = {
	{{{86, -12, -50},0, {1012, 117},{0xC6, 0xDC, 0x95, 0xFF}}},
	{{{85, -45, -10},0, {1428, 124},{0xCA, 0x8E, 0xEE, 0xFF}}},
	{{{86, -12, -50},0, {-457, 133},{0xC6, 0xDC, 0x95, 0xFF}}},
	{{{85, -45, -10},0, {1770, 1599},{0xCA, 0x8E, 0xEE, 0xFF}}},
	{{{55, 49, -32},0, {-16, -16},{0xB6, 0x46, 0xB4, 0xFF}}},
	{{{86, -12, -50},0, {-16, -16},{0xC6, 0xDC, 0x95, 0xFF}}},
	{{{56, 48, 16},0, {-16, -16},{0xB9, 0x55, 0x3E, 0xFF}}},
	{{{87, -15, 30},0, {-16, -16},{0xD8, 0xD3, 0x70, 0xFF}}},
	{{{85, -45, -10},0, {-16, -16},{0xCA, 0x8E, 0xEE, 0xFF}}},
};

Gfx mario_002_switch_000_offset_012_RThigh_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_012_RThigh_mesh_layer_1_vtx_0 + 0, 9, 8),
	gsSP2Triangles(8, 9, 0, 0, 1, 10, 2, 0),
	gsSP2Triangles(11, 6, 7, 0, 12, 13, 3, 0),
	gsSP2Triangles(3, 4, 12, 0, 4, 14, 12, 0),
	gsSP2Triangles(4, 5, 14, 0, 5, 15, 14, 0),
	gsSP1Triangle(16, 15, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_013_RLeg_skinned_mesh_layer_1_vtx_0[5] = {
	{{{85, -45, -10},0, {-16, -16},{0xCA, 0x8E, 0xEE, 0xFF}}},
	{{{56, 48, 16},0, {-16, -16},{0xB9, 0x55, 0x3E, 0xFF}}},
	{{{87, -15, 30},0, {-16, -16},{0xD8, 0xD3, 0x70, 0xFF}}},
	{{{55, 49, -32},0, {-16, -16},{0xB6, 0x46, 0xB4, 0xFF}}},
	{{{86, -12, -50},0, {-16, -16},{0xC6, 0xDC, 0x95, 0xFF}}},
};

Gfx mario_002_switch_000_offset_013_RLeg_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_013_RLeg_skinned_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_offset_013_RLeg_mesh_layer_1_vtx_0[5] = {
	{{{54, -18, 31},0, {-16, -16},{0xF2, 0xC4, 0x6F, 0xFF}}},
	{{{37, -38, -11},0, {-16, -16},{0x9, 0x82, 0xF4, 0xFF}}},
	{{{54, -5, -55},0, {-16, -16},{0xEE, 0xD0, 0x8C, 0xFF}}},
	{{{58, 44, -35},0, {-16, -16},{0x91, 0xF8, 0xC3, 0xFF}}},
	{{{58, 44, 12},0, {-16, -16},{0x91, 0xEF, 0x3B, 0xFF}}},
};

Gfx mario_002_switch_000_offset_013_RLeg_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_offset_013_RLeg_mesh_layer_1_vtx_0 + 0, 5, 5),
	gsSP2Triangles(1, 2, 5, 0, 5, 2, 0, 0),
	gsSP2Triangles(6, 5, 0, 0, 7, 6, 0, 0),
	gsSP2Triangles(0, 4, 7, 0, 7, 4, 3, 0),
	gsSP2Triangles(8, 7, 3, 0, 8, 3, 1, 0),
	gsSP2Triangles(9, 8, 1, 0, 5, 9, 1, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_displaylist_005_RFoot_skinned_mesh_layer_1_vtx_0[5] = {
	{{{58, 44, 12},0, {-16, -16},{0x91, 0xEF, 0x3B, 0xFF}}},
	{{{54, -18, 31},0, {-16, -16},{0xF2, 0xC4, 0x6F, 0xFF}}},
	{{{58, 44, -35},0, {-16, -16},{0x91, 0xF8, 0xC3, 0xFF}}},
	{{{54, -5, -55},0, {-16, -16},{0xEE, 0xD0, 0x8C, 0xFF}}},
	{{{37, -38, -11},0, {-16, -16},{0x9, 0x82, 0xF4, 0xFF}}},
};

Gfx mario_002_switch_000_displaylist_005_RFoot_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_displaylist_005_RFoot_skinned_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_displaylist_005_RFoot_mesh_layer_1_vtx_0[6] = {
	{{{-17, 46, 29},0, {-16, -16},{0xAB, 0x56, 0x27, 0xFF}}},
	{{{-46, 56, -12},0, {-16, -16},{0x79, 0xD8, 0xFF, 0xFF}}},
	{{{-14, 45, -56},0, {-16, -16},{0xB0, 0x4E, 0xC3, 0xFF}}},
	{{{75, 14, -61},0, {-16, -16},{0x4C, 0x23, 0xA1, 0xFF}}},
	{{{77, -37, -7},0, {-16, -16},{0x47, 0x97, 0x0, 0xFF}}},
	{{{72, 15, 40},0, {-16, -16},{0x4E, 0x1A, 0x61, 0xFF}}},
};

Gfx mario_002_switch_000_displaylist_005_RFoot_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_002_switch_000_displaylist_005_RFoot_mesh_layer_1_vtx_0 + 0, 6, 5),
	gsSP2Triangles(5, 0, 1, 0, 0, 5, 6, 0),
	gsSP2Triangles(2, 0, 6, 0, 6, 7, 2, 0),
	gsSP2Triangles(7, 3, 2, 0, 7, 8, 3, 0),
	gsSP2Triangles(3, 8, 9, 0, 4, 3, 9, 0),
	gsSP2Triangles(9, 1, 4, 0, 1, 9, 10, 0),
	gsSP1Triangle(10, 5, 1, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_000_displaylist_005_RFoot_mesh_layer_1_vtx_1[7] = {
	{{{-46, 56, -12},0, {-16, -16},{0x79, 0xD8, 0xFF, 0xFF}}},
	{{{-17, 46, 29},0, {-16, -16},{0xAB, 0x56, 0x27, 0xFF}}},
	{{{-14, 45, -56},0, {-16, -16},{0xB0, 0x4E, 0xC3, 0xFF}}},
	{{{75, 14, -61},0, {-16, -16},{0x4C, 0x23, 0xA1, 0xFF}}},
	{{{72, 15, 40},0, {-16, -16},{0x4E, 0x1A, 0x61, 0xFF}}},
	{{{107, 3, -8},0, {-16, -16},{0x7F, 0xA, 0x3, 0xFF}}},
	{{{77, -37, -7},0, {-16, -16},{0x47, 0x97, 0x0, 0xFF}}},
};

Gfx mario_002_switch_000_displaylist_005_RFoot_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_002_switch_000_displaylist_005_RFoot_mesh_layer_1_vtx_1 + 0, 7, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(6, 5, 4, 0, 3, 5, 6, 0),
	gsSPEndDisplayList(),
};


Gfx mat_mario_button_v3[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_mario_button_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_MIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_MIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(mario_button_v3_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_metal_v3[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT),
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPTexture(4031, 1983, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_metal_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_metal_v3[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsSPEndDisplayList(),
};

Gfx mat_mario_hat_v3[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_mario_cap_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 60),
	gsSPSetLights1(mario_hat_v3_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_skin_v3[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(mario_skin_v3_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_shoes_v3[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(mario_shoes_v3_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_moustache_v3[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_mario_mustache_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(mario_moustache_v3_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_face_0___Open_Eyes_v3[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_mario_face_1_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 124),
	gsSPSetLights1(mario_face_0___Open_Eyes_v3_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_sideburns_v3[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_mario_sideburn_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(mario_sideburns_v3_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_face_1___Half_Eyes_v3[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_mario_face_2_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 124),
	gsSPSetLights1(mario_face_1___Half_Eyes_v3_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_face_2___Closed_Eyes_v3[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_mario_face_3_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 124),
	gsSPSetLights1(mario_face_2___Closed_Eyes_v3_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_face_7___Dead_Eyes_v3[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_mario_face_4_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 124),
	gsSPSetLights1(mario_face_7___Dead_Eyes_v3_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_hair_v3[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(mario_hair_v3_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_wingCombined_v3[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, mario_wingCombined_i4),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_wingCombined_v3[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx mat_mario_white_v3[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(mario_white_v3_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_button_v3_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_propeller_belt_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_MIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_MIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(mario_button_v3_001_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_hat_v3_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_mario_cap_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 60),
	gsSPSetLights1(mario_hat_v3_001_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_moustache_v3_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_mario_mustache_rgba16_copy),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(mario_moustache_v3_001_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_face_0___Open_Eyes_v3_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_mario_face_1_rgba16_copy),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 124),
	gsSPSetLights1(mario_face_0___Open_Eyes_v3_002_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_sideburns_v3_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_mario_sideburn_rgba16_copy),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(mario_sideburns_v3_001_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_f3d_material[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(mario_f3d_material_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_face_1___Half_Eyes_v3_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_mario_face_2_rgba16_copy),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 124),
	gsSPSetLights1(mario_face_1___Half_Eyes_v3_002_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_face_2___Closed_Eyes_v3_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_mario_face_3_rgba16_copy),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 124),
	gsSPSetLights1(mario_face_2___Closed_Eyes_v3_002_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_face_7___Dead_Eyes_v3_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_mario_face_4_rgba16_copy),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 124),
	gsSPSetLights1(mario_face_7___Dead_Eyes_v3_002_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_wingCombined_v3_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, mario_wingCombined_ia4),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_4b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_wingCombined_v3_001[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx mat_mario_white_v3_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(mario_white_v3_001_lights),
	gsSPEndDisplayList(),
};

Gfx mat_mario_shoes_v3_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(mario_shoes_v3_001_lights),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_bottom_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3),
	gsSPDisplayList(mario_000_offset_bottom_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_bottom_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_bottom_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_001_Chest_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3),
	gsSPDisplayList(mario_000_offset_001_Chest_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_001_Chest_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_001_Chest_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_001_Chest_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3),
	gsSPDisplayList(mario_000_offset_001_Chest_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_hat_v3),
	gsSPDisplayList(mario_000_offset_001_Chest_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_mario_button_v3),
	gsSPDisplayList(mario_000_offset_001_Chest_mesh_layer_1_tri_2),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_001_Chest_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_001_Chest_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_offset_001_Chest_mesh_layer_1_tri_1),
	gsSPDisplayList(mario_000_offset_001_Chest_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_skin_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_shoes_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_mario_moustache_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_mario_face_0___Open_Eyes_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_3),
	gsSPDisplayList(mat_mario_sideburns_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_4),
	gsSPDisplayList(mat_mario_hat_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_5),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_1),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_2),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_4),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_5),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_mesh_layer_1_mat_override_face_1___Half_Eyes_v3_1[] = {
	gsSPDisplayList(mat_mario_skin_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_shoes_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_mario_moustache_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_mario_face_1___Half_Eyes_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_3),
	gsSPDisplayList(mat_mario_sideburns_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_4),
	gsSPDisplayList(mat_mario_hat_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_5),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_mesh_layer_1_mat_override_face_2___Closed_Eyes_v3_2[] = {
	gsSPDisplayList(mat_mario_skin_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_shoes_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_mario_moustache_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_mario_face_2___Closed_Eyes_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_3),
	gsSPDisplayList(mat_mario_sideburns_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_4),
	gsSPDisplayList(mat_mario_hat_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_5),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_mesh_layer_1_mat_override_face_2___Closed_Eyes_v3_3[] = {
	gsSPDisplayList(mat_mario_skin_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_shoes_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_mario_moustache_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_mario_face_2___Closed_Eyes_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_3),
	gsSPDisplayList(mat_mario_sideburns_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_4),
	gsSPDisplayList(mat_mario_hat_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_5),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_mesh_layer_1_mat_override_face_7___Dead_Eyes_v3_4[] = {
	gsSPDisplayList(mat_mario_skin_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_shoes_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_mario_moustache_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_mario_face_7___Dead_Eyes_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_3),
	gsSPDisplayList(mat_mario_sideburns_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_4),
	gsSPDisplayList(mat_mario_hat_v3),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_layer_1_tri_5),
	gsSPEndDisplayList(),
};

Gfx mario_switchboneHead_displaylistbone_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_hair_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_sideburns_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_mario_face_0___Open_Eyes_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_mario_skin_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_3),
	gsSPDisplayList(mat_mario_moustache_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_4),
	gsSPEndDisplayList(),
};

Gfx mario_switchboneHead_displaylistbone_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_1),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_2),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_4),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_switchboneHead_displaylistbone_mesh_layer_1_mat_override_face_1___Half_Eyes_v3_1[] = {
	gsSPDisplayList(mat_mario_hair_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_sideburns_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_mario_face_1___Half_Eyes_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_mario_skin_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_3),
	gsSPDisplayList(mat_mario_moustache_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_4),
	gsSPEndDisplayList(),
};

Gfx mario_switchboneHead_displaylistbone_mesh_layer_1_mat_override_face_2___Closed_Eyes_v3_2[] = {
	gsSPDisplayList(mat_mario_hair_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_sideburns_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_mario_face_2___Closed_Eyes_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_mario_skin_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_3),
	gsSPDisplayList(mat_mario_moustache_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_4),
	gsSPEndDisplayList(),
};

Gfx mario_switchboneHead_displaylistbone_mesh_layer_1_mat_override_face_2___Closed_Eyes_v3_3[] = {
	gsSPDisplayList(mat_mario_hair_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_sideburns_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_mario_face_2___Closed_Eyes_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_mario_skin_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_3),
	gsSPDisplayList(mat_mario_moustache_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_4),
	gsSPEndDisplayList(),
};

Gfx mario_switchboneHead_displaylistbone_mesh_layer_1_mat_override_face_7___Dead_Eyes_v3_4[] = {
	gsSPDisplayList(mat_mario_hair_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_sideburns_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_mario_face_7___Dead_Eyes_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_mario_skin_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_3),
	gsSPDisplayList(mat_mario_moustache_v3),
	gsSPDisplayList(mario_switchboneHead_displaylistbone_mesh_layer_1_tri_4),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_001_RWing_mesh_layer_4[] = {
	gsSPDisplayList(mat_mario_wingCombined_v3),
	gsSPDisplayList(mario_000_displaylist_001_RWing_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_wingCombined_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_001_RWing_mesh_layer_4_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_wingCombined_v3),
	gsSPDisplayList(mario_000_displaylist_001_RWing_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_wingCombined_v3),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_002_LWing_mesh_layer_4[] = {
	gsSPDisplayList(mat_mario_wingCombined_v3),
	gsSPDisplayList(mario_000_displaylist_002_LWing_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_wingCombined_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_002_LWing_mesh_layer_4_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_wingCombined_v3),
	gsSPDisplayList(mario_000_displaylist_002_LWing_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_wingCombined_v3),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_003_LShoulder_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_hat_v3),
	gsSPDisplayList(mario_000_offset_003_LShoulder_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_003_LShoulder_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_003_LShoulder_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_003_LShoulder_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_hat_v3),
	gsSPDisplayList(mario_000_offset_003_LShoulder_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_offset_003_LShoulder_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_003_LShoulder_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_003_LShoulder_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_offset_003_LShoulder_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_004_LArm_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_hat_v3),
	gsSPDisplayList(mario_000_offset_004_LArm_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_004_LArm_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_004_LArm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_004_LArm_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_hat_v3),
	gsSPDisplayList(mario_000_offset_004_LArm_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_004_LArm_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_004_LArm_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_005_LHand_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_white_v3),
	gsSPDisplayList(mario_000_offset_005_LHand_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_005_LHand_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_005_LHand_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_005_LHand_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_white_v3),
	gsSPDisplayList(mario_000_offset_005_LHand_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_offset_005_LHand_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_005_LHand_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_005_LHand_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_offset_005_LHand_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_003_LHand_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_white_v3),
	gsSPDisplayList(mario_000_displaylist_003_LHand_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_003_LHand_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_displaylist_003_LHand_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_white_v3),
	gsSPDisplayList(mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_006_Rshoulder_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_hat_v3),
	gsSPDisplayList(mario_000_offset_006_Rshoulder_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_006_Rshoulder_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_006_Rshoulder_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_006_Rshoulder_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_hat_v3),
	gsSPDisplayList(mario_000_offset_006_Rshoulder_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_offset_006_Rshoulder_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_006_Rshoulder_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_006_Rshoulder_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_offset_006_Rshoulder_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_007_RArm_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_hat_v3),
	gsSPDisplayList(mario_000_offset_007_RArm_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_007_RArm_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_007_RArm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_007_RArm_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_hat_v3),
	gsSPDisplayList(mario_000_offset_007_RArm_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_007_RArm_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_007_RArm_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_008_RHand_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_white_v3),
	gsSPDisplayList(mario_000_offset_008_RHand_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_008_RHand_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_008_RHand_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_008_RHand_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_white_v3),
	gsSPDisplayList(mario_000_offset_008_RHand_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_offset_008_RHand_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_008_RHand_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_008_RHand_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_offset_008_RHand_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_004_Rhand_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_white_v3),
	gsSPDisplayList(mario_000_displaylist_004_Rhand_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_004_Rhand_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_displaylist_004_Rhand_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_white_v3),
	gsSPDisplayList(mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_white_v3),
	gsSPDisplayList(mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_option_RCAP_000_displaylist_003_RCAP_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_hat_v3),
	gsSPDisplayList(mario_002_switch_option_RCAP_000_displaylist_003_RCAP_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_white_v3),
	gsSPDisplayList(mario_002_switch_option_RCAP_000_displaylist_003_RCAP_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_option_RCAP_000_displaylist_003_RCAP_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_option_RCAP_000_displaylist_003_RCAP_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_002_switch_option_RCAP_000_displaylist_003_RCAP_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_option_RCAPHAND_000_displaylist_003_RCAPHAND_mesh_layer_4[] = {
	gsSPDisplayList(mat_mario_hat_v3),
	gsSPDisplayList(mario_002_switch_option_RCAPHAND_000_displaylist_003_RCAPHAND_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_mario_wingCombined_v3),
	gsSPDisplayList(mario_002_switch_option_RCAPHAND_000_displaylist_003_RCAPHAND_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_mario_wingCombined_v3),
	gsSPDisplayList(mat_mario_white_v3),
	gsSPDisplayList(mario_002_switch_option_RCAPHAND_000_displaylist_003_RCAPHAND_mesh_layer_4_tri_2),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_option_RCAPHAND_000_displaylist_003_RCAPHAND_mesh_layer_4_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_option_RCAPHAND_000_displaylist_003_RCAPHAND_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_mario_wingCombined_v3),
	gsSPDisplayList(mario_002_switch_option_RCAPHAND_000_displaylist_003_RCAPHAND_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_mario_wingCombined_v3),
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_option_RCAPHAND_000_displaylist_003_RCAPHAND_mesh_layer_4_tri_2),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_009_LThigh_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3),
	gsSPDisplayList(mario_000_offset_009_LThigh_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_009_LThigh_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_009_LThigh_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_009_LThigh_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3),
	gsSPDisplayList(mario_000_offset_009_LThigh_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_009_LThigh_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_009_LThigh_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_010_LLeg_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3),
	gsSPDisplayList(mario_000_offset_010_LLeg_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_010_LLeg_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_010_LLeg_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_010_LLeg_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3),
	gsSPDisplayList(mario_000_offset_010_LLeg_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_010_LLeg_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_010_LLeg_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_011_LFoot_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_shoes_v3),
	gsSPDisplayList(mario_000_offset_011_LFoot_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_011_LFoot_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_011_LFoot_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_011_LFoot_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_shoes_v3),
	gsSPDisplayList(mario_000_offset_011_LFoot_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_offset_011_LFoot_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_011_LFoot_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_011_LFoot_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_offset_011_LFoot_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_012_RThigh_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3),
	gsSPDisplayList(mario_000_offset_012_RThigh_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_012_RThigh_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_012_RThigh_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_012_RThigh_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3),
	gsSPDisplayList(mario_000_offset_012_RThigh_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_012_RThigh_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_012_RThigh_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_013_RLeg_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3),
	gsSPDisplayList(mario_000_offset_013_RLeg_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_013_RLeg_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_013_RLeg_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_013_RLeg_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3),
	gsSPDisplayList(mario_000_offset_013_RLeg_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_013_RLeg_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_offset_013_RLeg_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_005_RFoot_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_shoes_v3),
	gsSPDisplayList(mario_000_displaylist_005_RFoot_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_005_RFoot_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_displaylist_005_RFoot_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_005_RFoot_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_shoes_v3),
	gsSPDisplayList(mario_000_displaylist_005_RFoot_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_displaylist_005_RFoot_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_005_RFoot_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_000_displaylist_005_RFoot_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_000_displaylist_005_RFoot_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_bottom_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_bottom_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_bottom_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_bottom_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_001_Chest_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_001_Chest_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_001_Chest_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_001_Chest_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_001_Chest_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_001_Chest_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_002_switch_000_offset_001_Chest_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_001_Chest_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_001_Chest_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_002_switch_000_offset_001_Chest_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_Head_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_hat_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_moustache_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_mario_face_0___Open_Eyes_v3_002),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_mario_sideburns_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_3),
	gsSPDisplayList(mat_mario_f3d_material),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_4),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_Head_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_1),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_2),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_3),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_4),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_Head_mesh_layer_1_mat_override_face_1___Half_Eyes_v3_002_1[] = {
	gsSPDisplayList(mat_mario_hat_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_moustache_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_mario_face_1___Half_Eyes_v3_002),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_mario_sideburns_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_3),
	gsSPDisplayList(mat_mario_f3d_material),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_4),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_Head_mesh_layer_1_mat_override_face_2___Closed_Eyes_v3_002_2[] = {
	gsSPDisplayList(mat_mario_hat_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_moustache_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_mario_face_2___Closed_Eyes_v3_002),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_mario_sideburns_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_3),
	gsSPDisplayList(mat_mario_f3d_material),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_4),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_Head_mesh_layer_1_mat_override_face_2___Closed_Eyes_v3_002_3[] = {
	gsSPDisplayList(mat_mario_hat_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_moustache_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_mario_face_2___Closed_Eyes_v3_002),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_mario_sideburns_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_3),
	gsSPDisplayList(mat_mario_f3d_material),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_4),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_Head_mesh_layer_1_mat_override_face_7___Dead_Eyes_v3_002_4[] = {
	gsSPDisplayList(mat_mario_hat_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_mario_moustache_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_mario_face_7___Dead_Eyes_v3_002),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_mario_sideburns_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_3),
	gsSPDisplayList(mat_mario_f3d_material),
	gsSPDisplayList(mario_002_switch_000_displaylist_Head_mesh_layer_1_tri_4),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_propeller_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_f3d_material),
	gsSPDisplayList(mario_002_switch_000_displaylist_propeller_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_propeller_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_displaylist_propeller_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_propeller_mesh_layer_1_mat_override_face_1___Half_Eyes_v3_002_1[] = {
	gsSPDisplayList(mat_mario_f3d_material),
	gsSPDisplayList(mario_002_switch_000_displaylist_propeller_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_propeller_mesh_layer_1_mat_override_face_2___Closed_Eyes_v3_002_2[] = {
	gsSPDisplayList(mat_mario_f3d_material),
	gsSPDisplayList(mario_002_switch_000_displaylist_propeller_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_propeller_mesh_layer_1_mat_override_face_2___Closed_Eyes_v3_002_3[] = {
	gsSPDisplayList(mat_mario_f3d_material),
	gsSPDisplayList(mario_002_switch_000_displaylist_propeller_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_propeller_mesh_layer_1_mat_override_face_7___Dead_Eyes_v3_002_4[] = {
	gsSPDisplayList(mat_mario_f3d_material),
	gsSPDisplayList(mario_002_switch_000_displaylist_propeller_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_001_RWing_mesh_layer_4[] = {
	gsSPDisplayList(mat_mario_wingCombined_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_001_RWing_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_wingCombined_v3_001),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_001_RWing_mesh_layer_4_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_wingCombined_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_001_RWing_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_wingCombined_v3_001),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_002_LWing_mesh_layer_4[] = {
	gsSPDisplayList(mat_mario_wingCombined_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_002_LWing_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_wingCombined_v3_001),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_002_LWing_mesh_layer_4_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_wingCombined_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_002_LWing_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_wingCombined_v3_001),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_003_LShoulder_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_003_LShoulder_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_003_LShoulder_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_003_LShoulder_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_003_LShoulder_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_003_LShoulder_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_002_switch_000_offset_003_LShoulder_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_003_LShoulder_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_003_LShoulder_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_002_switch_000_offset_003_LShoulder_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_004_LArm_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_004_LArm_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_004_LArm_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_004_LArm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_004_LArm_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_004_LArm_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_004_LArm_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_004_LArm_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_005_LHand_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_white_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_005_LHand_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_005_LHand_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_005_LHand_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_005_LHand_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_white_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_005_LHand_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_002_switch_000_offset_005_LHand_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_005_LHand_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_005_LHand_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_002_switch_000_offset_005_LHand_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_003_LHand_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_white_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_003_LHand_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_003_LHand_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_displaylist_003_LHand_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_006_Rshoulder_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_006_Rshoulder_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_006_Rshoulder_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_006_Rshoulder_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_006_Rshoulder_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_006_Rshoulder_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_002_switch_000_offset_006_Rshoulder_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_006_Rshoulder_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_006_Rshoulder_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_002_switch_000_offset_006_Rshoulder_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_007_RArm_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_007_RArm_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_007_RArm_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_007_RArm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_007_RArm_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_007_RArm_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_007_RArm_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_007_RArm_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_008_RHand_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_white_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_008_RHand_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_008_RHand_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_008_RHand_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_008_RHand_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_white_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_008_RHand_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_002_switch_000_offset_008_RHand_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_008_RHand_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_008_RHand_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_002_switch_000_offset_008_RHand_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_004_Rhand_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_white_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_004_Rhand_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_004_Rhand_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_displaylist_004_Rhand_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_009_LThigh_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_009_LThigh_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_009_LThigh_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_009_LThigh_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_009_LThigh_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_009_LThigh_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_009_LThigh_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_009_LThigh_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_010_LLeg_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_010_LLeg_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_010_LLeg_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_010_LLeg_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_010_LLeg_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_010_LLeg_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_010_LLeg_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_010_LLeg_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_011_LFoot_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_shoes_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_011_LFoot_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_011_LFoot_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_011_LFoot_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_011_LFoot_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_shoes_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_011_LFoot_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_002_switch_000_offset_011_LFoot_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_011_LFoot_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_011_LFoot_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_002_switch_000_offset_011_LFoot_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_012_RThigh_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_012_RThigh_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_012_RThigh_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_012_RThigh_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_012_RThigh_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_012_RThigh_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_012_RThigh_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_012_RThigh_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_013_RLeg_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_013_RLeg_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_013_RLeg_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_013_RLeg_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_013_RLeg_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_button_v3_001),
	gsSPDisplayList(mario_002_switch_000_offset_013_RLeg_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_offset_013_RLeg_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_offset_013_RLeg_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_005_RFoot_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_shoes_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_005_RFoot_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_005_RFoot_skinned_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_displaylist_005_RFoot_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_005_RFoot_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_shoes_v3_001),
	gsSPDisplayList(mario_002_switch_000_displaylist_005_RFoot_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_002_switch_000_displaylist_005_RFoot_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_000_displaylist_005_RFoot_mesh_layer_1_mat_override_metal_v3_0[] = {
	gsSPDisplayList(mat_mario_metal_v3),
	gsSPDisplayList(mario_002_switch_000_displaylist_005_RFoot_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_002_switch_000_displaylist_005_RFoot_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_metal_v3),
	gsSPEndDisplayList(),
};

Gfx mario_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

