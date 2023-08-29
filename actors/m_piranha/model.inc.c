Lights1 m_piranha_stem_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 m_piranha_leaf_layer5_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 m_piranha_head_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 m_piranha_mouth_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 m_piranha_teeth_layer5_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx m_piranha_piranha_plant_stem_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 m_piranha_piranha_plant_stem_rgba16_rgba16[] = {
	#include "actors/m_piranha/piranha_plant_stem.rgba16.inc.c"
};

Gfx m_piranha_piranha_plant_leaf_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 m_piranha_piranha_plant_leaf_rgba16_rgba16[] = {
	#include "actors/m_piranha/piranha_plant_leaf.rgba16.inc.c"
};

Gfx m_piranha_piranha_plant_skin_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 m_piranha_piranha_plant_skin_rgba16_rgba16[] = {
	#include "actors/m_piranha/piranha_plant_skin.rgba16.inc.c"
};

Gfx m_piranha_piranha_plant_tongue_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 m_piranha_piranha_plant_tongue_rgba16_rgba16[] = {
	#include "actors/m_piranha/piranha_plant_tongue.rgba16.inc.c"
};

Gfx m_piranha_piranha_plant_tooth_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 m_piranha_piranha_plant_tooth_rgba16_rgba16[] = {
	#include "actors/m_piranha/piranha_plant_tooth.rgba16.inc.c"
};

Vtx m_piranha_stemL_mesh_layer_1_vtx_0[12] = {
	{{{-7, -2, 0},0, {1008, 1008},{0x81, 0x4, 0x0, 0xFF}}},
	{{{-6, 49, 0},0, {1008, 384},{0x83, 0xE8, 0x0, 0xFF}}},
	{{{8, 53, -10},0, {-16, 384},{0x44, 0xC, 0x95, 0xFF}}},
	{{{5, -11, -10},0, {-16, 1008},{0x5C, 0xFC, 0xA8, 0xFF}}},
	{{{5, -11, 10},0, {1008, 1008},{0x5C, 0xFC, 0x58, 0xFF}}},
	{{{-6, 49, 0},0, {-16, 384},{0x83, 0xE8, 0x0, 0xFF}}},
	{{{-7, -2, 0},0, {-16, 1008},{0x81, 0x4, 0x0, 0xFF}}},
	{{{8, 53, 10},0, {1008, 384},{0x44, 0xC, 0x6B, 0xFF}}},
	{{{5, -11, -10},0, {1008, 1008},{0x5C, 0xFC, 0xA8, 0xFF}}},
	{{{8, 53, 10},0, {-16, 682},{0x44, 0xC, 0x6B, 0xFF}}},
	{{{5, -11, 10},0, {-16, 1008},{0x5C, 0xFC, 0x58, 0xFF}}},
	{{{8, 53, -10},0, {1008, 682},{0x44, 0xC, 0x95, 0xFF}}},
};

Gfx m_piranha_stemL_mesh_layer_1_tri_0[] = {
	gsSPVertex(m_piranha_stemL_mesh_layer_1_vtx_0 + 0, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSPEndDisplayList(),
};

Vtx m_piranha_leafL_mesh_layer_5_vtx_0[4] = {
	{{{17, 104, 10},0, {-16, -16},{0xBB, 0x3, 0x6A, 0xFF}}},
	{{{-29, 97, -20},0, {1008, -16},{0xBB, 0x3, 0x6A, 0xFF}}},
	{{{-20, 1, -12},0, {1008, 2032},{0xBB, 0x3, 0x6A, 0xFF}}},
	{{{26, 8, 18},0, {-16, 2032},{0xBB, 0x3, 0x6A, 0xFF}}},
};

Gfx m_piranha_leafL_mesh_layer_5_tri_0[] = {
	gsSPVertex(m_piranha_leafL_mesh_layer_5_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx m_piranha_leafR_mesh_layer_5_vtx_0[4] = {
	{{{-28, 98, 15},0, {-16, -16},{0xCA, 0x4, 0x8D, 0xFF}}},
	{{{22, 103, -9},0, {1008, -16},{0xCA, 0x4, 0x8D, 0xFF}}},
	{{{29, 6, -15},0, {1008, 2032},{0xCA, 0x4, 0x8D, 0xFF}}},
	{{{-22, 1, 9},0, {-16, 2032},{0xCA, 0x4, 0x8D, 0xFF}}},
};

Gfx m_piranha_leafR_mesh_layer_5_tri_0[] = {
	gsSPVertex(m_piranha_leafR_mesh_layer_5_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx m_piranha_stemM_skinned_mesh_layer_1_vtx_0[6] = {
	{{{8, 53, -10},0, {1008, 321},{0x44, 0xC, 0x95, 0xFF}}},
	{{{8, 53, 10},0, {-16, 964},{0x44, 0xC, 0x6B, 0xFF}}},
	{{{8, 53, -10},0, {1008, 964},{0x44, 0xC, 0x95, 0xFF}}},
	{{{-6, 49, 0},0, {1008, 321},{0x83, 0xE8, 0x0, 0xFF}}},
	{{{8, 53, 10},0, {23, 452},{0x44, 0xC, 0x6B, 0xFF}}},
	{{{-6, 49, 0},0, {23, 452},{0x83, 0xE8, 0x0, 0xFF}}},
};

Gfx m_piranha_stemM_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(m_piranha_stemM_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx m_piranha_stemM_mesh_layer_1_vtx_0[6] = {
	{{{-7, 20, 0},0, {-16, 975},{0x8A, 0xD0, 0x0, 0xFF}}},
	{{{7, 30, -10},0, {1008, 1008},{0x48, 0x21, 0x9D, 0xFF}}},
	{{{7, 30, -10},0, {1008, 695},{0x48, 0x21, 0x9D, 0xFF}}},
	{{{7, 30, 10},0, {-16, 695},{0x48, 0x21, 0x63, 0xFF}}},
	{{{7, 30, 10},0, {-16, 975},{0x48, 0x21, 0x63, 0xFF}}},
	{{{-7, 20, 0},0, {1008, 1008},{0x8A, 0xD0, 0x0, 0xFF}}},
};

Gfx m_piranha_stemM_mesh_layer_1_tri_0[] = {
	gsSPVertex(m_piranha_stemM_mesh_layer_1_vtx_0 + 0, 6, 6),
	gsSP1Triangle(0, 6, 7, 0),
	gsSP1Triangle(0, 5, 6, 0),
	gsSP1Triangle(1, 2, 8, 0),
	gsSP1Triangle(1, 8, 9, 0),
	gsSP1Triangle(3, 4, 10, 0),
	gsSP1Triangle(3, 10, 11, 0),
	gsSPEndDisplayList(),
};

Vtx m_piranha_stemU_skinned_mesh_layer_1_vtx_0[6] = {
	{{{7, 30, -10},0, {-4, 847},{0x48, 0x21, 0x9D, 0xFF}}},
	{{{7, 30, 10},0, {-16, 976},{0x48, 0x21, 0x63, 0xFF}}},
	{{{7, 30, -10},0, {1008, 976},{0x48, 0x21, 0x9D, 0xFF}}},
	{{{-7, 20, 0},0, {-4, 847},{0x8A, 0xD0, 0x0, 0xFF}}},
	{{{7, 30, 10},0, {1008, 1008},{0x48, 0x21, 0x63, 0xFF}}},
	{{{-7, 20, 0},0, {1008, 1008},{0x8A, 0xD0, 0x0, 0xFF}}},
};

Gfx m_piranha_stemU_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(m_piranha_stemU_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx m_piranha_stemU_mesh_layer_1_vtx_0[6] = {
	{{{-5, 34, 0},0, {1008, -16},{0x81, 0x4, 0x0, 0xFF}}},
	{{{8, 40, -10},0, {-16, 134},{0x52, 0x5, 0x9F, 0xFF}}},
	{{{8, 40, -10},0, {1008, -16},{0x52, 0x5, 0x9F, 0xFF}}},
	{{{8, 40, 10},0, {-16, -16},{0x52, 0x5, 0x61, 0xFF}}},
	{{{8, 40, 10},0, {1008, -16},{0x52, 0x5, 0x61, 0xFF}}},
	{{{-5, 34, 0},0, {-16, 134},{0x81, 0x4, 0x0, 0xFF}}},
};

Gfx m_piranha_stemU_mesh_layer_1_tri_0[] = {
	gsSPVertex(m_piranha_stemU_mesh_layer_1_vtx_0 + 0, 6, 6),
	gsSP1Triangle(0, 6, 7, 0),
	gsSP1Triangle(0, 5, 6, 0),
	gsSP1Triangle(1, 2, 8, 0),
	gsSP1Triangle(1, 8, 9, 0),
	gsSP1Triangle(3, 4, 10, 0),
	gsSP1Triangle(3, 10, 11, 0),
	gsSPEndDisplayList(),
};

Vtx m_piranha_headL_mesh_layer_1_vtx_0[45] = {
	{{{-5, -10, 0},0, {-16, 1008},{0x25, 0x87, 0x0, 0xFF}}},
	{{{-34, 13, -19},0, {1008, 1008},{0x9C, 0xC2, 0xD0, 0xFF}}},
	{{{-2, 5, -39},0, {1008, -16},{0x2A, 0xAC, 0xAB, 0xFF}}},
	{{{9, 83, 39},0, {896, -120},{0xF6, 0x57, 0x5C, 0xFF}}},
	{{{13, 98, 0},0, {-128, 904},{0x5, 0x7F, 0x0, 0xFF}}},
	{{{-17, 89, 19},0, {1008, 1008},{0xBE, 0x61, 0x30, 0xFF}}},
	{{{-17, 89, -19},0, {1008, -16},{0xBE, 0x61, 0xD0, 0xFF}}},
	{{{13, 98, 0},0, {-16, 1008},{0x5, 0x7F, 0x0, 0xFF}}},
	{{{9, 83, -39},0, {1008, 1008},{0xF6, 0x57, 0xA4, 0xFF}}},
	{{{-17, 89, 19},0, {-16, -16},{0xBE, 0x61, 0x30, 0xFF}}},
	{{{-39, 54, -27},0, {-16, 1008},{0x94, 0x18, 0xC1, 0xFF}}},
	{{{-17, 89, -19},0, {1008, 1008},{0xBE, 0x61, 0xD0, 0xFF}}},
	{{{9, 83, -39},0, {1008, -16},{0xF6, 0x57, 0xA4, 0xFF}}},
	{{{7, 43, -55},0, {-16, -16},{0x35, 0xF3, 0x8D, 0xFF}}},
	{{{9, 83, -39},0, {738, 439},{0xF6, 0x57, 0xA4, 0xFF}}},
	{{{16, 81, -39},0, {686, 439},{0x5E, 0x32, 0xBA, 0xFF}}},
	{{{7, 43, -55},0, {738, 439},{0x35, 0xF3, 0x8D, 0xFF}}},
	{{{13, 98, 0},0, {738, 388},{0x5, 0x7F, 0x0, 0xFF}}},
	{{{19, 97, 0},0, {686, 388},{0x64, 0x4E, 0x0, 0xFF}}},
	{{{9, 83, 39},0, {738, 388},{0xF6, 0x57, 0x5C, 0xFF}}},
	{{{16, 81, 39},0, {686, 388},{0x5E, 0x32, 0x46, 0xFF}}},
	{{{7, 43, 55},0, {686, 388},{0x35, 0xF3, 0x73, 0xFF}}},
	{{{-34, 13, -19},0, {-16, 1008},{0x9C, 0xC2, 0xD0, 0xFF}}},
	{{{-39, 54, -27},0, {1008, 1008},{0x94, 0x18, 0xC1, 0xFF}}},
	{{{7, 43, -55},0, {1008, -16},{0x35, 0xF3, 0x8D, 0xFF}}},
	{{{-2, 5, -39},0, {-16, -16},{0x2A, 0xAC, 0xAB, 0xFF}}},
	{{{7, 43, 55},0, {-16, 1008},{0x35, 0xF3, 0x73, 0xFF}}},
	{{{9, 83, 39},0, {1008, 1008},{0xF6, 0x57, 0x5C, 0xFF}}},
	{{{-17, 89, 19},0, {1008, -16},{0xBE, 0x61, 0x30, 0xFF}}},
	{{{-39, 54, 28},0, {-16, -16},{0x94, 0x18, 0x3F, 0xFF}}},
	{{{-2, 5, 39},0, {-16, 1008},{0x2A, 0xAC, 0x55, 0xFF}}},
	{{{7, 43, 55},0, {1008, 1008},{0x35, 0xF3, 0x73, 0xFF}}},
	{{{-39, 54, 28},0, {1008, -16},{0x94, 0x18, 0x3F, 0xFF}}},
	{{{-34, 13, 19},0, {-16, -16},{0x9C, 0xC2, 0x30, 0xFF}}},
	{{{-5, -10, 0},0, {-16, 1008},{0x25, 0x87, 0x0, 0xFF}}},
	{{{-2, 5, 39},0, {1008, 1008},{0x2A, 0xAC, 0x55, 0xFF}}},
	{{{-34, 13, 19},0, {1008, -16},{0x9C, 0xC2, 0x30, 0xFF}}},
	{{{-34, 13, -19},0, {-16, -16},{0x9C, 0xC2, 0xD0, 0xFF}}},
	{{{-39, 54, 28},0, {-16, 1008},{0x94, 0x18, 0x3F, 0xFF}}},
	{{{-17, 89, 19},0, {1008, 1008},{0xBE, 0x61, 0x30, 0xFF}}},
	{{{-17, 89, -19},0, {1008, -16},{0xBE, 0x61, 0xD0, 0xFF}}},
	{{{-39, 54, -27},0, {-16, -16},{0x94, 0x18, 0xC1, 0xFF}}},
	{{{-34, 13, 19},0, {-16, 1008},{0x9C, 0xC2, 0x30, 0xFF}}},
	{{{-39, 54, 28},0, {1008, 1008},{0x94, 0x18, 0x3F, 0xFF}}},
	{{{-39, 54, -27},0, {1008, -16},{0x94, 0x18, 0xC1, 0xFF}}},
};

Gfx m_piranha_headL_mesh_layer_1_tri_0[] = {
	gsSPVertex(m_piranha_headL_mesh_layer_1_vtx_0 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 7, 6, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSPVertex(m_piranha_headL_mesh_layer_1_vtx_0 + 14, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(m_piranha_headL_mesh_layer_1_vtx_0 + 30, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 7, 0),
	gsSPEndDisplayList(),
};

Vtx m_piranha_headL_mesh_layer_1_vtx_1[8] = {
	{{{-5, -10, 0},0, {433, -892},{0x25, 0x87, 0x0, 0xFF}}},
	{{{-2, 5, -39},0, {-306, -156},{0x2A, 0xAC, 0xAB, 0xFF}}},
	{{{7, 43, -55},0, {-575, 1058},{0x35, 0xF3, 0x8D, 0xFF}}},
	{{{19, 97, 0},0, {559, 2210},{0x64, 0x4E, 0x0, 0xFF}}},
	{{{16, 81, -39},0, {-217, 2038},{0x5E, 0x32, 0xBA, 0xFF}}},
	{{{7, 43, 55},0, {1567, 260},{0x35, 0xF3, 0x73, 0xFF}}},
	{{{16, 81, 39},0, {1298, 1473},{0x5E, 0x32, 0x46, 0xFF}}},
	{{{-2, 5, 39},0, {1209, -720},{0x2A, 0xAC, 0x55, 0xFF}}},
};

Gfx m_piranha_headL_mesh_layer_1_tri_1[] = {
	gsSPVertex(m_piranha_headL_mesh_layer_1_vtx_1 + 0, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(3, 5, 0, 0),
	gsSP1Triangle(3, 6, 5, 0),
	gsSP1Triangle(5, 7, 0, 0),
	gsSPEndDisplayList(),
};

Vtx m_piranha_headL_mesh_layer_5_vtx_0[14] = {
	{{{19, 93, 0},0, {-16, 156},{0x1D, 0x7C, 0x0, 0xFF}}},
	{{{21, 76, -33},0, {5349, 1080},{0x14, 0x55, 0xA4, 0xFF}}},
	{{{15, 77, -33},0, {5349, 156},{0x14, 0x55, 0xA4, 0xFF}}},
	{{{25, 91, 0},0, {-16, 1080},{0x1D, 0x7C, 0x0, 0xFF}}},
	{{{15, 77, 33},0, {-5381, 156},{0x14, 0x55, 0x5C, 0xFF}}},
	{{{21, 76, 33},0, {-5381, 1080},{0x14, 0x55, 0x5C, 0xFF}}},
	{{{15, 77, -33},0, {-13520, 156},{0x14, 0x55, 0xA4, 0xFF}}},
	{{{21, 76, -33},0, {-13520, 1080},{0x14, 0x55, 0xA4, 0xFF}}},
	{{{13, 38, -50},0, {-8155, 1080},{0xC, 0x31, 0x8C, 0xFF}}},
	{{{6, 39, -50},0, {-8155, 191},{0xC, 0x31, 0x8C, 0xFF}}},
	{{{21, 76, 33},0, {13488, 1080},{0x14, 0x55, 0x5C, 0xFF}}},
	{{{15, 77, 33},0, {13488, 156},{0x14, 0x55, 0x5C, 0xFF}}},
	{{{6, 39, 50},0, {8123, 191},{0xC, 0x31, 0x74, 0xFF}}},
	{{{13, 38, 50},0, {8123, 1080},{0xC, 0x31, 0x74, 0xFF}}},
};

Gfx m_piranha_headL_mesh_layer_5_tri_0[] = {
	gsSPVertex(m_piranha_headL_mesh_layer_5_vtx_0 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSPEndDisplayList(),
};

Vtx m_piranha_headU_mesh_layer_1_vtx_0[45] = {
	{{{-1, -12, 0},0, {-16, 1008},{0xD3, 0x89, 0x0, 0xFF}}},
	{{{-4, 4, -39},0, {1008, -16},{0xD1, 0xAE, 0xAB, 0xFF}}},
	{{{30, 10, -19},0, {-16, -16},{0x60, 0xBC, 0xD0, 0xFF}}},
	{{{17, 87, 19},0, {-20, -76},{0x2E, 0x63, 0x42, 0xFF}}},
	{{{-12, 98, 0},0, {-20, 779},{0x2, 0x7F, 0x0, 0xFF}}},
	{{{-10, 82, 39},0, {836, -76},{0xF, 0x56, 0x5C, 0xFF}}},
	{{{-4, 4, -39},0, {-16, 1008},{0xD1, 0xAE, 0xAB, 0xFF}}},
	{{{-10, 43, -55},0, {1008, 1008},{0xCB, 0xF6, 0x8D, 0xFF}}},
	{{{37, 50, -28},0, {1008, -16},{0x6D, 0x11, 0xC1, 0xFF}}},
	{{{-10, 43, -55},0, {-16, 1008},{0xCB, 0xF6, 0x8D, 0xFF}}},
	{{{-10, 82, -39},0, {1008, 1008},{0xF, 0x56, 0xA4, 0xFF}}},
	{{{17, 87, -19},0, {1008, -16},{0x2E, 0x63, 0xBE, 0xFF}}},
	{{{37, 50, -28},0, {-16, -16},{0x6D, 0x11, 0xC1, 0xFF}}},
	{{{-16, 81, -39},0, {738, 439},{0xA6, 0x38, 0xBA, 0xFF}}},
	{{{-10, 82, -39},0, {686, 439},{0xF, 0x56, 0xA4, 0xFF}}},
	{{{-10, 43, -55},0, {738, 439},{0xCB, 0xF6, 0x8D, 0xFF}}},
	{{{-19, 97, 0},0, {738, 388},{0xA1, 0x55, 0x0, 0xFF}}},
	{{{-10, 82, -39},0, {686, 439},{0xF, 0x56, 0xA4, 0xFF}}},
	{{{-16, 81, -39},0, {738, 439},{0xA6, 0x38, 0xBA, 0xFF}}},
	{{{-12, 98, 0},0, {686, 388},{0x2, 0x7F, 0x0, 0xFF}}},
	{{{-16, 81, 39},0, {738, 388},{0xA6, 0x38, 0x46, 0xFF}}},
	{{{-10, 82, 39},0, {686, 388},{0xF, 0x56, 0x5C, 0xFF}}},
	{{{-10, 43, 55},0, {686, 388},{0xCB, 0xF6, 0x73, 0xFF}}},
	{{{37, 50, -28},0, {-16, 1008},{0x6D, 0x11, 0xC1, 0xFF}}},
	{{{17, 87, -19},0, {1008, 1008},{0x6F, 0x3E, 0x0, 0xFF}}},
	{{{17, 87, 19},0, {1008, -16},{0x6F, 0x3E, 0x0, 0xFF}}},
	{{{37, 50, 27},0, {-16, -16},{0x6D, 0x11, 0x3F, 0xFF}}},
	{{{30, 10, -19},0, {-16, 1008},{0x60, 0xBC, 0xD0, 0xFF}}},
	{{{37, 50, -28},0, {1008, 1008},{0x6D, 0x11, 0xC1, 0xFF}}},
	{{{37, 50, 27},0, {1008, -16},{0x6D, 0x11, 0x3F, 0xFF}}},
	{{{30, 10, 19},0, {-16, -16},{0x60, 0xBC, 0x30, 0xFF}}},
	{{{-1, -12, 0},0, {-16, 1008},{0xD3, 0x89, 0x0, 0xFF}}},
	{{{30, 10, -19},0, {1008, 1008},{0x60, 0xBC, 0xD0, 0xFF}}},
	{{{30, 10, 19},0, {1008, -16},{0x60, 0xBC, 0x30, 0xFF}}},
	{{{-4, 4, 39},0, {-16, -16},{0xD1, 0xAE, 0x55, 0xFF}}},
	{{{30, 10, 19},0, {-16, 1008},{0x60, 0xBC, 0x30, 0xFF}}},
	{{{37, 50, 27},0, {1008, 1008},{0x6D, 0x11, 0x3F, 0xFF}}},
	{{{-10, 43, 55},0, {1008, -16},{0xCB, 0xF6, 0x73, 0xFF}}},
	{{{37, 50, 27},0, {-16, 1008},{0x6D, 0x11, 0x3F, 0xFF}}},
	{{{17, 87, 19},0, {1008, 1008},{0x2E, 0x63, 0x42, 0xFF}}},
	{{{-10, 82, 39},0, {1008, -16},{0xF, 0x56, 0x5C, 0xFF}}},
	{{{-10, 43, 55},0, {-16, -16},{0xCB, 0xF6, 0x73, 0xFF}}},
	{{{-10, 82, -39},0, {-16, -16},{0xF, 0x56, 0xA4, 0xFF}}},
	{{{-12, 98, 0},0, {-16, 1008},{0x2, 0x7F, 0x0, 0xFF}}},
	{{{17, 87, -19},0, {1008, -16},{0x2E, 0x63, 0xBE, 0xFF}}},
};

Gfx m_piranha_headU_mesh_layer_1_tri_0[] = {
	gsSPVertex(m_piranha_headU_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 2, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(9, 11, 12, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(m_piranha_headU_mesh_layer_1_vtx_0 + 16, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(7, 9, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSPVertex(m_piranha_headU_mesh_layer_1_vtx_0 + 31, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 3, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(7, 9, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(13, 12, 8, 0),
	gsSPEndDisplayList(),
};

Vtx m_piranha_headU_mesh_layer_1_vtx_1[8] = {
	{{{-10, 43, -55},0, {916, 1837},{0xCB, 0xF6, 0x8D, 0xFF}}},
	{{{-4, 4, -39},0, {927, 1798},{0xD1, 0xAE, 0xAB, 0xFF}}},
	{{{-1, -12, 0},0, {883, 1887},{0xD3, 0x89, 0x0, 0xFF}}},
	{{{-10, 43, 55},0, {927, 1798},{0xCB, 0xF6, 0x73, 0xFF}}},
	{{{-4, 4, 39},0, {883, 1798},{0xD1, 0xAE, 0x55, 0xFF}}},
	{{{-19, 97, 0},0, {916, 1833},{0xA1, 0x55, 0x0, 0xFF}}},
	{{{-16, 81, 39},0, {916, 1833},{0xA6, 0x38, 0x46, 0xFF}}},
	{{{-16, 81, -39},0, {916, 1837},{0xA6, 0x38, 0xBA, 0xFF}}},
};

Gfx m_piranha_headU_mesh_layer_1_tri_1[] = {
	gsSPVertex(m_piranha_headU_mesh_layer_1_vtx_1 + 0, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(3, 5, 0, 0),
	gsSP1Triangle(3, 6, 5, 0),
	gsSP1Triangle(5, 7, 0, 0),
	gsSPEndDisplayList(),
};

Vtx m_piranha_headU_mesh_layer_5_vtx_0[14] = {
	{{{-24, 92, 0},0, {-16, 1080},{0xEB, 0x7D, 0x0, 0xFF}}},
	{{{-15, 77, -33},0, {-5381, 156},{0xF2, 0x57, 0xA4, 0xFF}}},
	{{{-22, 76, -33},0, {-5381, 1080},{0xF2, 0x57, 0xA4, 0xFF}}},
	{{{-18, 93, 0},0, {-16, 156},{0xEB, 0x7D, 0x0, 0xFF}}},
	{{{-22, 76, 33},0, {5349, 1080},{0xF2, 0x57, 0x5C, 0xFF}}},
	{{{-15, 77, 33},0, {5349, 156},{0xF2, 0x57, 0x5C, 0xFF}}},
	{{{-22, 76, -33},0, {13488, 1080},{0xF2, 0x57, 0xA4, 0xFF}}},
	{{{-15, 77, -33},0, {13488, 156},{0xF2, 0x57, 0xA4, 0xFF}}},
	{{{-9, 39, -50},0, {8123, 156},{0xF8, 0x32, 0x8C, 0xFF}}},
	{{{-15, 38, -50},0, {8123, 1046},{0xF8, 0x32, 0x8C, 0xFF}}},
	{{{-15, 77, 33},0, {-13520, 156},{0xF2, 0x57, 0x5C, 0xFF}}},
	{{{-22, 76, 33},0, {-13520, 1080},{0xF2, 0x57, 0x5C, 0xFF}}},
	{{{-15, 38, 50},0, {-8155, 1046},{0xF8, 0x32, 0x74, 0xFF}}},
	{{{-9, 39, 50},0, {-8155, 156},{0xF8, 0x32, 0x74, 0xFF}}},
};

Gfx m_piranha_headU_mesh_layer_5_tri_0[] = {
	gsSPVertex(m_piranha_headU_mesh_layer_5_vtx_0 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSPEndDisplayList(),
};


Gfx mat_m_piranha_stem[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, m_piranha_piranha_plant_stem_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(m_piranha_stem_lights),
	gsSPEndDisplayList(),
};

Gfx mat_m_piranha_leaf_layer5[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
	gsDPSetFogColor(0, 0, 0, 255),
	gsSPFogPosition(970, 1000),
	gsSPSetGeometryMode(G_FOG),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsDPSetCycleType(G_CYC_2CYCLE),
	gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, m_piranha_piranha_plant_leaf_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetPrimColor(0, 0, 254, 254, 254, 255),
	gsSPSetLights1(m_piranha_leaf_layer5_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_m_piranha_leaf_layer5[] = {
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_FOG),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPSetCycleType(G_CYC_1CYCLE),
	gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
	gsSPEndDisplayList(),
};

Gfx mat_m_piranha_head[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, m_piranha_piranha_plant_skin_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(m_piranha_head_lights),
	gsSPEndDisplayList(),
};

Gfx mat_m_piranha_mouth[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, m_piranha_piranha_plant_tongue_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(m_piranha_mouth_lights),
	gsSPEndDisplayList(),
};

Gfx mat_m_piranha_teeth_layer5[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
	gsDPSetFogColor(0, 0, 0, 255),
	gsSPFogPosition(970, 1000),
	gsSPSetGeometryMode(G_FOG),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsDPSetCycleType(G_CYC_2CYCLE),
	gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, m_piranha_piranha_plant_tooth_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetPrimColor(0, 0, 254, 254, 254, 255),
	gsSPSetLights1(m_piranha_teeth_layer5_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_m_piranha_teeth_layer5[] = {
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_FOG),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPSetCycleType(G_CYC_1CYCLE),
	gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
	gsSPEndDisplayList(),
};

Gfx m_piranha_stemL_mesh_layer_1[] = {
	gsSPDisplayList(mat_m_piranha_stem),
	gsSPDisplayList(m_piranha_stemL_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx m_piranha_leafL_mesh_layer_5[] = {
	gsSPDisplayList(mat_m_piranha_leaf_layer5),
	gsSPDisplayList(m_piranha_leafL_mesh_layer_5_tri_0),
	gsSPDisplayList(mat_revert_m_piranha_leaf_layer5),
	gsSPEndDisplayList(),
};

Gfx m_piranha_leafR_mesh_layer_5[] = {
	gsSPDisplayList(mat_m_piranha_leaf_layer5),
	gsSPDisplayList(m_piranha_leafR_mesh_layer_5_tri_0),
	gsSPDisplayList(mat_revert_m_piranha_leaf_layer5),
	gsSPEndDisplayList(),
};

Gfx m_piranha_stemM_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_m_piranha_stem),
	gsSPDisplayList(m_piranha_stemM_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx m_piranha_stemM_mesh_layer_1[] = {
	gsSPDisplayList(mat_m_piranha_stem),
	gsSPDisplayList(m_piranha_stemM_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx m_piranha_stemU_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_m_piranha_stem),
	gsSPDisplayList(m_piranha_stemU_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx m_piranha_stemU_mesh_layer_1[] = {
	gsSPDisplayList(mat_m_piranha_stem),
	gsSPDisplayList(m_piranha_stemU_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx m_piranha_headL_mesh_layer_1[] = {
	gsSPDisplayList(mat_m_piranha_head),
	gsSPDisplayList(m_piranha_headL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_m_piranha_mouth),
	gsSPDisplayList(m_piranha_headL_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx m_piranha_headL_mesh_layer_5[] = {
	gsSPDisplayList(mat_m_piranha_teeth_layer5),
	gsSPDisplayList(m_piranha_headL_mesh_layer_5_tri_0),
	gsSPDisplayList(mat_revert_m_piranha_teeth_layer5),
	gsSPEndDisplayList(),
};

Gfx m_piranha_headU_mesh_layer_1[] = {
	gsSPDisplayList(mat_m_piranha_head),
	gsSPDisplayList(m_piranha_headU_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_m_piranha_mouth),
	gsSPDisplayList(m_piranha_headU_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx m_piranha_headU_mesh_layer_5[] = {
	gsSPDisplayList(mat_m_piranha_teeth_layer5),
	gsSPDisplayList(m_piranha_headU_mesh_layer_5_tri_0),
	gsSPDisplayList(mat_revert_m_piranha_teeth_layer5),
	gsSPEndDisplayList(),
};

Gfx m_piranha_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

