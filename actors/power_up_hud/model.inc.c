// Power Up HUD

ALIGNED8 static const Texture texture_UIzpower_up_base_rgba16[] = {
    #include "actors/power_up_hud/UIzpower_up_base.rgba16.inc.c"
};

ALIGNED8 static const Texture texture_UIzpower_up_base2_rgba16[] = {
    #include "actors/power_up_hud/UIzpower_up_base2.rgba16.inc.c"
};

ALIGNED8 static const Texture texture_UIzpower_up_base3_rgba16[] = {
    #include "actors/power_up_hud/UIzpower_up_base3.rgba16.inc.c"
};

ALIGNED8 static const Texture texture_UIzpower_up_base4_rgba16[] = {
    #include "actors/power_up_hud/UIzpower_up_base4.rgba16.inc.c"
};

ALIGNED8 static const Texture texture_UIbubble_flower[] = {
    #include "actors/power_up_hud/UIbubble_flower.rgba16.inc.c"
};

ALIGNED8 static const Texture texture_UIfire_flower[] = {
    #include "actors/power_up_hud/UIfire_flower.rgba16.inc.c"
};

ALIGNED8 static const Texture texture_UIflower_empty[] = {
    #include "actors/power_up_hud/UIflower_empty.rgba16.inc.c"
};

ALIGNED8 static const Texture texture_UIboomerang_flower[] = {
    #include "actors/power_up_hud/UIboomerang_flower.rgba16.inc.c"
};

ALIGNED8 static const Texture texture_UIdeluxe_mushroom[] = {
    #include "actors/power_up_hud/UIdeluxe_mushroom.rgba16.inc.c"
};

ALIGNED8 static const Texture texture_UImushroom_empty[] = {
    #include "actors/power_up_hud/UImushroom_empty.rgba16.inc.c"
};

ALIGNED8 static const Texture texture_UIpropeller_mushroom[] = {
    #include "actors/power_up_hud/UIpropeller_mushroom.rgba16.inc.c"
};

ALIGNED8 static const Texture texture_UIboomerang_flower_empty[] = {
        #include "actors/power_up_hud/UIboomerang_flower_empty.rgba16.inc.c"
};

const Texture *const power_up_hud_segments_lut[] = {
    texture_UIpropeller_mushroom,
    texture_UIfire_flower,
    texture_UIbubble_flower,
    texture_UIboomerang_flower,
    texture_UIdeluxe_mushroom,
    texture_UImushroom_empty,
    texture_UIboomerang_flower_empty,
    texture_UIflower_empty,
};

static const Vtx Power_up_hub_mesh_vtx_0[] = {
    {{{   -24,    -24,      0}, 0, {     0,   2016}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,    -24,      0}, 0, {   992,   2016}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,     24,      0}, 0, {   992,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -24,     24,      0}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,    -24,      0}, 0, {     1,   2016}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    24,    -24,      0}, 0, {  1024,   2016}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    24,     24,      0}, 0, {  1024,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{     0,     24,      0}, 0, {     1,      0}, {0xff, 0xff, 0xff, 0xff}}},
};

const Gfx dl_power_up_hud_base[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsDPSetRenderMode(G_RM_TEX_EDGE, G_RM_TEX_EDGE2),
    gsDPSetTextureFilter(G_TF_POINT),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(Power_up_hub_mesh_vtx_0, 8, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, texture_UIzpower_up_base_rgba16),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, texture_UIzpower_up_base2_rgba16),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSPEndDisplayList(),
};

const Gfx dl_power_up_hud_base_selected[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsDPSetRenderMode(G_RM_TEX_EDGE, G_RM_TEX_EDGE2),
    gsDPSetTextureFilter(G_TF_POINT),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(Power_up_hub_mesh_vtx_0, 8, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, texture_UIzpower_up_base3_rgba16),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, texture_UIzpower_up_base4_rgba16),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSPEndDisplayList(),
};

static const Vtx vertex_power_up_hud_segments[] = {
    {{{   -12,    -12,      0}, 0, {     0,    992}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    12,    -12,      0}, 0, {   992,    992}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    12,     12,      0}, 0, {   992,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -12,     12,      0}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
};

const Gfx dl_power_up_hud_segments_begin[] = {
    gsDPPipeSync(),
    gsSPVertex(vertex_power_up_hud_segments, 4, 0),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPEndDisplayList(),
};

const Gfx dl_power_up_hud_segments_end[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_OPA_SURF2),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsSPEndDisplayList(),
};
