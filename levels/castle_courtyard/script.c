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
#include "levels/castle_courtyard/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_courtyard_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_courtyard_segment_7SegmentRomStart, _castle_courtyard_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x06, _group13_yay0SegmentRomStart, _group13_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _castle_courtyard_segment_7SegmentRomStart, _castle_courtyard_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_14), 
	LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_SPIKY_TREE, tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_courtyard_geo_000200), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_courtyard_area_1),
		WARP_NODE(0x01, LEVEL_CASTLE_COURTYARD, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_WF, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_CASTLE_COURTYARD, 0x02, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_SSL, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0D, LEVEL_WF, 0x02, 0x0C, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_OG_PIPE, -193, -685, 896, 0, 0, 0, (0x01 << 16), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, -3426, -1008, 2523, 0, 0, 0, (0x02 << 16), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, -3426, -1008, 2804, 0, 0, 0, (0x03 << 16), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, -3426, -1008, 3104, 0, 0, 0, (0x04 << 16), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, -3799, 1412, -3708, 0, 0, 0, (0x0B << 16), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, -4426, -1008, 2523, 0, 0, 0, (1 << 24) | (0x0D << 16) | (1 << 8), bhvOGpipe),
		OBJECT(MODEL_PROPELLER, -3376, 88, -175, 90, 0, 0, 0x7E , bhvPropeller),
		OBJECT(MODEL_TREE, -3429, -851, 1996, 0, 0, 0, 0x000A0000, bhvTree),
		OBJECT(MODEL_TREE, -4929, -851, 5500, 0, 0, 0, 0x000A0000, bhvTree),
		OBJECT(MODEL_TREE, -5921, -1198, 5268, 0, 0, 0, 0x000A0000, bhvTree),
		OBJECT(MODEL_TREE, -3858, -851, 5475, 0, 0, 0, 0x000A0000, bhvTree),
		OBJECT(MODEL_TREE, -5413, -851, 2321, 0, 0, 0, 0x000A0000, bhvTree),
		OBJECT(MODEL_NONE, -4485, -676, 2838, 0, 0, 0, (0x0A << 16), bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -4485, -676, 2838),
		TERRAIN(castle_courtyard_area_1_collision),
		MACRO_OBJECTS(castle_courtyard_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_HARBOR),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, castle_courtyard_area_2),
		WARP_NODE(0x0A, LEVEL_CASTLE_COURTYARD, 0x01, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_COURTYARD, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_COURTYARD, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_CASTLE_COURTYARD, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLUE_COIN_SWITCH, 2731, -9364, 1779, 0, 0, 0, (0x01 << 16), bhvBlueCoinSwitch),
		OBJECT(MODEL_NONE, -384, -9980, 1064, 0, 0, 0, (0x01 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -906, -9980, 2857, 0, 0, 0, (0x01 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1845, -9980, 1353, 0, 0, 0, (0x01 << 16), bhvCoinFormation),
		OBJECT(MODEL_BLUE_COIN, 2345, -9277, 2319, 0, 0, 0, (0x01 << 16), bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 2045, -9277, 2319, 0, 0, 0, (0x01 << 16), bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 2345, -9277, 1240, 0, 0, 0, (0x01 << 16), bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 2045, -9277, 1240, 0, 0, 0, (0x01 << 16), bhvHiddenBlueCoin),
		OBJECT(MODEL_NOTE_BLOCK, -1621, -8959, 6008, 0, 0, 0, (0x01 << 16), bhvNoteBlock),
		OBJECT(MODEL_NOTE_BLOCK, -1764, -6173, 74, 0, 0, 0, (0x01 << 16), bhvNoteBlock),
		OBJECT(MODEL_NOTE_BLOCK, -1622, -8083, 5329, 0, 0, 0, (0x01 << 16), bhvNoteBlock),
		OBJECT(MODEL_NOTE_BLOCK, 393, -7264, 1327, 0, 0, 0, (0x01 << 16), bhvNoteBlock),
		OBJECT(MODEL_OG_PIPE, -5193, -7674, 896, 0, 0, 0, (0x0A << 16), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, 310, -3621, 1310, 0, 0, 0, (0x0B << 16), bhvOGpipe),
		OBJECT(MODEL_SCUTTLEBUG, -3820, -6447, 5377, 0, 0, 0, (0x01 << 16), bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, -2440, -8980, 5480, 0, 0, 0, (0x01 << 16), bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, -471, -7272, 5535, 0, 0, 0, (0x01 << 16), bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, 238, -7272, 2292, 0, 0, 0, (0x01 << 16), bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, -2681, -3980, 1979, 0, 0, 0, (0x01 << 16), bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, 376, -3465, 2645, 0, 0, 0, (0x01 << 16), bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, -50, -7241, 3495, 0, 0, 0, (0x01 << 16), bhvScuttlebug),
		OBJECT(MODEL_SEAWEED, -2626, -10042, 2074, 0, 0, 0, (0x01 << 16), bhvSeaweed),
		OBJECT(MODEL_SEAWEED, 10, -9708, 3901, 0, 0, 0, (0x01 << 16), bhvSeaweed),
		OBJECT(MODEL_SEAWEED, -604, -9823, 864, 0, 0, 0, (0x01 << 16), bhvSeaweed),
		OBJECT(MODEL_STAR, 342, -3357, 1796, 0, 0, 0, (0x01 << 24), bhvStar),
		OBJECT(MODEL_NONE, -5261, -7487, 1817, 0, 0, 0, (0xFF << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -5261, -6687, 3719, 0, 0, 0, (0xFF << 16), bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -2813, -8787, 5354, 0, 0, 0, (0x1A0 << 16), bhvPoleGrabbing),
		TERRAIN(castle_courtyard_area_2_collision),
		MACRO_OBJECTS(castle_courtyard_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_UNDERGROUND),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -4485, -676, 2838),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
