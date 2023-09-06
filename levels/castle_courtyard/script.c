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
		WARP_NODE(0xF0, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_CASTLE_COURTYARD, 0x02, 0x0B, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_OG_PIPE, -193, -685, 896, 0, 0, 0, (0x01 << 16), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, -3426, -1008, 2523, 0, 0, 0, (0x02 << 16), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, -3799, 1412, -3708, 0, 0, 0, (0x0B << 16), bhvOGpipe),
		OBJECT(MODEL_PROPELLER, -3491, 169, -393, 90, 0, 0, 0x7E , bhvPropeller),
		OBJECT(MODEL_TREE, -3429, -851, 1996, 0, 0, 0, 0x000A0000, bhvTree),
		OBJECT(MODEL_TREE, -4929, -851, 5500, 0, 0, 0, 0x000A0000, bhvTree),
		OBJECT(MODEL_TREE, -5921, -1198, 5268, 0, 0, 0, 0x000A0000, bhvTree),
		OBJECT(MODEL_TREE, -3858, -851, 5475, 0, 0, 0, 0x000A0000, bhvTree),
		OBJECT(MODEL_TREE, -5413, -851, 2321, 0, 0, 0, 0x000A0000, bhvTree),
		OBJECT(MODEL_NONE, -4485, -676, 2838, 0, 0, 0, (0x0A << 16), bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -4485, -676, 2838),
		TERRAIN(castle_courtyard_area_1_collision),
		MACRO_OBJECTS(castle_courtyard_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_MENU_TITLE_SCREEN),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, castle_courtyard_area_2),
		WARP_NODE(0x0A, LEVEL_CASTLE_COURTYARD, 0x01, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_COURTYARD, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_COURTYARD, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_CASTLE_COURTYARD, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLUE_COIN_SWITCH, 7731, -9364, 1779, 0, 0, 0, (0x01 << 16), bhvBlueCoinSwitch),
		OBJECT(MODEL_NONE, 4616, -9980, 1064, 0, 0, 0, (0x01 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 4094, -9980, 2857, 0, 0, 0, (0x01 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 3155, -9980, 1353, 0, 0, 0, (0x01 << 16), bhvCoinFormation),
		OBJECT(MODEL_BLUE_COIN, 7345, -9277, 2319, 0, 0, 0, (0x01 << 16), bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 7045, -9277, 2319, 0, 0, 0, (0x01 << 16), bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 7345, -9277, 1240, 0, 0, 0, (0x01 << 16), bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 7045, -9277, 1240, 0, 0, 0, (0x01 << 16), bhvHiddenBlueCoin),
		OBJECT(MODEL_NONE, -261, -7839, 2230, 0, 0, 0, (0x6E << 16) | (1 << 8), bhvPoleGrabbing),
		OBJECT(MODEL_NOTE_BLOCK, 3379, -8959, 6008, 0, 0, 0, (0x01 << 16), bhvNoteBlock),
		OBJECT(MODEL_NOTE_BLOCK, 3236, -6173, 74, 0, 0, 0, (0x01 << 16), bhvNoteBlock),
		OBJECT(MODEL_NOTE_BLOCK, 3378, -8083, 5329, 0, 0, 0, (0x01 << 16), bhvNoteBlock),
		OBJECT(MODEL_OG_PIPE, -193, -7674, 896, 0, 0, 0, (0x0A << 16), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, 5310, -3621, 1310, 0, 0, 0, (0x0B << 16), bhvOGpipe),
		OBJECT(MODEL_SCUTTLEBUG, 1180, -6447, 5377, 0, 0, 0, (0x01 << 16), bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, 2560, -8980, 5480, 0, 0, 0, (0x01 << 16), bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, 4529, -7272, 5535, 0, 0, 0, (0x01 << 16), bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, 5238, -7272, 2292, 0, 0, 0, (0x01 << 16), bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, 2319, -3980, 1979, 0, 0, 0, (0x01 << 16), bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, 5376, -3465, 2157, 0, 0, 0, (0x01 << 16), bhvScuttlebug),
		OBJECT(MODEL_SEAWEED, 2374, -10042, 2074, 0, 0, 0, (0x01 << 16), bhvSeaweed),
		OBJECT(MODEL_SEAWEED, 5010, -9708, 3901, 0, 0, 0, (0x01 << 16), bhvSeaweed),
		OBJECT(MODEL_SEAWEED, 4396, -9823, 864, 0, 0, 0, (0x01 << 16), bhvSeaweed),
		OBJECT(MODEL_SKEETER, 3855, -9140, 3694, 0, 0, 0, (0x01 << 16), bhvSkeeter),
		OBJECT(MODEL_SKEETER, 2790, -9140, 829, 0, 0, 0, (0x01 << 16), bhvSkeeter),
		OBJECT(MODEL_SKEETER, 4814, -9140, 2152, 0, 0, 0, (0x01 << 16), bhvSkeeter),
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
