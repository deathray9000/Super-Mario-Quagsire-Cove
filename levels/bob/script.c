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
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x1E, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_BOB, 0x01, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_BOB, 0x01, 0x03, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_BOB, 0x01, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_BOB, 0x01, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_BOB, 0x01, 0x04, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLUE_COIN_SWITCH, -2386, 623, 4244, 0, 0, 0, (1 << 16), bhvBlueCoinSwitch),
		OBJECT(MODEL_CHECKPOINT_FLAG, -3824, -497, -533, 0, -90, 0, (0x01 << 16) | (0x01 << 8), bhvCheckpoint_Flag),
		OBJECT(MODEL_NONE, -3827, -329, -710, -90, 0, 0, (0x01 << 16), bhvDeathWarp),
		OBJECT(MODEL_NONE, -2440, 751, 936, 0, 90, 0, (4 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -4957, 1015, 5006, 0, -180, 0, (4 << 16), bhvCoinFormation),
		OBJECT(MODEL_EXCLAMATION_BOX, -3119, -1249, 807, 0, 0, 0, (6 << 16), bhvExclamationBox),
		OBJECT(MODEL_NONE, -3310, 864, 5041, 0, 0, 0, (1 << 16), bhvCoinFormation),
		OBJECT(MODEL_GOOMBA, -4214, 1701, 3117, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -4465, 1701, 4346, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3086, 1701, 4346, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_BLUE_COIN, -2586, 623, 4244, 0, 0, 0, (1 << 16), bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -2586, 623, 4444, 0, 0, 0, (1 << 16), bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -2586, 623, 4644, 0, 0, 0, (1 << 16), bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -2186, 623, 4244, 0, 0, 0, (1 << 16), bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -2186, 623, 4444, 0, 0, 0, (1 << 16), bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -2186, 623, 4644, 0, 0, 0, (1 << 16), bhvHiddenBlueCoin),
		OBJECT(MODEL_EXCLAMATION_BOX, -3914, -300, -169, 0, 0, 0, (2 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -4053, -300, -169, 0, 0, 0, (1 << 16), bhvExclamationBox),
		OBJECT(MODEL_NOTE_BLOCK, -2974, -393, -169, 0, 0, 0, 0x7E , bhvNoteBlock),
		OBJECT(MODEL_NOTE_BLOCK, -3801, -1348, 807, 0, 0, 0, 0x7E , bhvNoteBlock),
		OBJECT(MODEL_OG_PIPE, -1287, 1035, 860, 0, 0, 0, (0x04 << 16), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, -4571, -239, 5131, 0, 0, 0, (0x05 << 16), bhvOGpipe),
		OBJECT(MODEL_M_PIRANHA, -2440, 324, -169, 0, 0, 0, (0x01 << 24), bhvNormalPiranha),
		OBJECT(MODEL_PROPELLER, -3491, -393, -169, 0, 0, 0, 0x7E , bhvPropeller),
		OBJECT(MODEL_RED_COIN, -2650, 2123, 3641, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3051, 2347, 3142, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3659, 2347, 3149, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3666, 1834, 3641, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3044, 1834, 3641, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3348, 1834, 3334, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3348, 1834, 3955, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -4056, 2123, 3641, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_WOODEN_SIGNPOST, -3565, -534, -1445, 0, -90, 0, 0, bhvMessagePanel),
		OBJECT(MODEL_PIRANHA_PLANT, -1561, 1717, -125, 0, 0, 0, 0x7E , bhvPiranhaPlant),
		OBJECT(MODEL_NONE, -3351, 2488, 3651, 0, 0, 0, 0x00000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_TRANSPARENT_STAR, -3351, 2254, 3651, 0, 0, 0, 0x00000000, bhvRedCoinStarMarker),
		OBJECT(MODEL_NONE, -3757, -676, -3158, -90, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -3757, -676, -3158),
		OBJECT(MODEL_NONE, -4457, -2741, -50, -90, 0, 0, (0x02 << 16), bhvWarp),
		OBJECT(MODEL_NONE, -1579, 1761, -703, -90, 0, 0, (0x03 << 16), bhvWarp),
		OBJECT(MODEL_EXCLAMATION_BOX, -3795, -300, -169, 0, 0, 0, 0x00000000, bhvExclamationBox),
		OBJECT(MODEL_WOOPER, -2974, -347, 366, 0, 0, 0, 0, bhvWooper),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_ATHLETIC),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -3757, -676, -3158),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
