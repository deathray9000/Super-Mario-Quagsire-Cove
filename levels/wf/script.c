#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/wf/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wf_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BUBBLY_TREE, tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, wf_geo_0007E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, wf_geo_000820), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, wf_geo_000860), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, wf_geo_000878), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, wf_geo_000890), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, wf_geo_0008A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, wf_geo_0008E8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, wf_geo_000900), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, wf_geo_000940), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_GIANT_POLE, wf_geo_000AE0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, wf_geo_000958), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, wf_geo_0009A0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_PLATFORM, wf_geo_0009B8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, wf_geo_0009D0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, wf_geo_0009E8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SMALL_BOMP, wf_geo_000A00), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_LARGE_BOMP, wf_geo_000A40), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_WOODEN_PLATFORM, wf_geo_000A58), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SLIDING_PLATFORM, wf_geo_000A98), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE_PART, wf_geo_000AB0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE, wf_geo_000AC8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_TRAPEZOID_PLATORM, wf_geo_000AF8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM, wf_geo_000B10), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_UNUSED, wf_geo_000B38), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_ELEVATOR, wf_geo_000B60), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_RIGHT, wf_geo_000B78), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_LEFT, wf_geo_000B90), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD, wf_geo_000BA8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_DOOR, wf_geo_000BE0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD_FELLED, wf_geo_000BC8), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wf_area_1),
		WARP_NODE(0x0A, LEVEL_CCM, 0x01, 0x03, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_WF, 0x01, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_SSL, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_WF, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0D, LEVEL_WF, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_EXCLAMATION_BOX, 663, -4167, -10709, 0, 90, 0, (0x0F << 16), bhvExclamationBox),
		OBJECT(MODEL_CHECKPOINT_FLAG, 241, -4591, -11156, 0, 0, 0, (0x01 << 16) | (0x02 << 8), bhvCheckpoint_Flag),
		OBJECT(MODEL_OG_PIPE, 3013, -5171, -9129, 0, 0, 0, (0xA << 16), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, 1562, -4268, -10073, 0, 0, 0, (0xB << 16), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, 1262, -4564, -9079, 0, 0, 0, (1 << 24) | (0xC << 16), bhvOGpipe),
		OBJECT(MODEL_STUFFWELL, 2997, -4976, -8708, 0, 0, 0, 0x00000000, bhvStuffwell),
		OBJECT(MODEL_NONE, -2324, 212, 9824, 0, 0, 0, (4 << 24), bhvHiddenStar),
		OBJECT(MODEL_EXCLAMATION_BOX, -2760, 1331, 1308, 0, 0, 0, (0x0D << 16) | (5 << 8), bhvExclamationBox),
		OBJECT(MODEL_NOTE_BLOCK, 7620, -2671, 3973, 0, 0, 0, (1 << 16), bhvNoteBlock),
		OBJECT(MODEL_NOTE_BLOCK, 2770, 2071, 9615, 0, 0, 0, (1 << 16), bhvNoteBlock),
		OBJECT(MODEL_NOTE_BLOCK, 2336, 3290, 10661, 0, -65, 0, (1 << 16), bhvNoteBlock),
		OBJECT(MODEL_QUAGSIRE, 663, -4591, -11156, 0, 90, 0, (0x08 << 16), bhvQuagsire),
		OBJECT(MODEL_OG_PIPE, 1147, -4591, -10556, 0, 0, 0, (1 << 24) | (0xD << 16) | (1 << 8), bhvOGpipe),
		OBJECT(MODEL_SILVER_STAR, -464, 597, 6296, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_SILVER_STAR, -5285, 1852, 8061, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_SILVER_STAR, -2274, 3281, 7985, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_SILVER_STAR, -2336, 186, 7980, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_SILVER_STAR, -2315, 216, 11580, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, 1566, -4134, -8923, 0, 0, 0, (18 << 24), bhvStar),
		OBJECT(MODEL_STAR_STATUE, 90, -4517, -10807, 0, 0, 0, (17 << 24), bhvStarStatue),
		OBJECT(MODEL_WF_BUBBLY_TREE, -914, 30, 9494, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_WF_BUBBLY_TREE, -464, 30, 6296, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_WF_BUBBLY_TREE, -3493, 30, 6067, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_WF_BUBBLY_TREE, -5011, 30, 7213, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_WF_BUBBLY_TREE, -3874, 30, 9316, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_NONE, -10693, 107, 382, 0, 0, 0, (1 << 16), bhvWaterfallSoundLoop),
		OBJECT(MODEL_WOOPER, 663, -4591, -10838, 0, 90, 0, (0x08 << 16), bhvWooper),
		TERRAIN(wf_area_1_collision),
		MACRO_OBJECTS(wf_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_AUTUMN),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
