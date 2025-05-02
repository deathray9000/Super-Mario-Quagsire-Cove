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
#include "levels/ccm/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ccm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _snow_yay0SegmentRomStart, _snow_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _ccm_skybox_yay0SegmentRomStart, _ccm_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group9_yay0SegmentRomStart, _group9_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group9_geoSegmentRomStart, _group9_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group13_yay0SegmentRomStart, _group13_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_10), 
	JUMP_LINK(script_func_global_14), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ccm_geo_00042C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ccm_geo_00045C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ccm_geo_000494), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ccm_geo_0004BC), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ccm_geo_0004E4), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_CABIN_DOOR, cabin_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE, tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_ROPEWAY_LIFT, ccm_geo_0003D0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_BASE, ccm_geo_0003F0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD, ccm_geo_00040C), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ccm_area_1),
		WARP_NODE(0xF0, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_CCM, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x06, LEVEL_CCM, 0x02, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0D, LEVEL_CCM, 0x02, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x07, LEVEL_CCM, 0x02, 0x09, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_PROPELLER, -3376, 88, -175, 90, 0, 0, 0x7E , bhvPropeller),
		OBJECT(MODEL_QUAGSIRE, 2057, -372, -988, 0, 90, 0, (0x07 << 16), bhvQuagsire),
		OBJECT(MODEL_QUAGSIRE, -580, -372, -1004, 0, 0, 0, (0x08 << 16), bhvQuagsire),
		OBJECT(MODEL_QUAGSIRE, -276, -372, 443, 0, 148, 0, (0x09 << 16), bhvQuagsire),
		OBJECT(MODEL_WOODEN_SIGNPOST, 3001, -372, -2539, 0, -180, 0, (0x06 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, 394, -372, -1080, 0, 0, 0, (0x0B << 16), bhvMessagePanel),
		OBJECT(MODEL_STUFFWELL, 3314, -372, -2539, 0, -180, 0, (0x06 << 16), bhvStuffwell),
		OBJECT(MODEL_DOUBLE_CHERRY, 2995, -878, -6088, 0, -180, 0, (0x06 << 16), bhvDoubleCherry),
		OBJECT(MODEL_NONE, -4037, -790, 1259, 0, 0, 0, (0x50 << 24) | (0x05 << 16), bhvWarp),
		OBJECT(MODEL_NONE, -2667, -826, 1101, 0, 0, 0, (0x06 << 16), bhvAirborneWarp),
		OBJECT(MODEL_OG_PIPE, 2935, -790, -3250, 0, 0, 0, (0x0A << 16) | (0x03 << 8), bhvOGpipe),
		MARIO_POS(0x01, 0, 2935, -790, -3250),
		OBJECT(MODEL_OG_PIPE, 2935, -945, -5246, 0, 0, 0, (0x03 << 24) | (0x03 << 16) | (0x04 << 8), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, 2944, -945, -6772, 0, 0, 0, (1 << 24) | (0x07 << 16), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, 3405, -945, -6772, 0, 0, 0, (1 << 24) | (0x0D << 16) | (0x01 << 8), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, 7000, -226, -7062, 0, 0, 0, (0x02 << 24) | (0x03 << 16) | (0x04 << 8), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, 7000, -226, -7510, 0, 0, 0, (0x0C << 16) | (0x04 << 8), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, 7000, -226, -7839, 0, 0, 0, (0x04 << 24) | (0x0C << 16) | (0x04 << 8), bhvOGpipe),
		OBJECT(MODEL_WOOPER, -98, -372, 583, 0, 147, 0, (0x0A << 16), bhvWooper),
		TERRAIN(ccm_area_1_collision),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_DUSK_BEACH),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, ccm_area_2),
		WARP_NODE(0xF0, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_CCM, 0x01, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_CCM, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x06, LEVEL_CCM, 0x01, 0x06, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_CCM, 0x02, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_CCM, 0x02, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x09, LEVEL_CCM, 0x01, 0x07, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_CCM, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BOO, 4060, 4006, -4837, 0, 0, 0, (0x01 << 24), bhvBalconyBigBoo),
		OBJECT(MODEL_BOO, 8268, -177, -1824, 0, -90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, 9653, 1673, 4203, 0, -90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, 7985, 2557, 7310, 0, -90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, 3745, 6361, 5778, 0, -90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, -2449, 4746, -787, 0, -90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_BOO, -11263, 3180, 3, 0, -90, 0, 0x00000000, bhvBoo),
		OBJECT(MODEL_CHECKPOINT_FLAG, 12350, -851, -952, 0, -178, 0, (0x01 << 16), bhvCheckpoint_Flag),
		OBJECT(MODEL_CHECKPOINT_FLAG, -3259, 6489, 1236, 0, -178, 0, (0x02 << 16), bhvCheckpoint_Flag),
		OBJECT(MODEL_NONE, -4596, 5998, 1163, 0, -90, 0, (0x06 << 24) | (1 << 16), bhvCosmicManager),
		OBJECT(MODEL_NONE, 4060, 3976, -4837, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -3721, 5346, -6034, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_OG_PIPE, 5205, 3779, -4970, 0, 0, 0, (0xFF << 16) | (0x02 << 8) | (0x01), bhvOGpipe),
		OBJECT(MODEL_NOTE_BLOCK, 7425, 261, -509, 0, -90, 0, 0x00000000, bhvNoteBlock),
		OBJECT(MODEL_NOTE_BLOCK, 8602, 1748, 6586, 0, -90, 0, 0x00000000, bhvNoteBlock),
		OBJECT(MODEL_NOTE_BLOCK, 5092, 2604, 8599, 0, -90, 0, 0x00000000, bhvNoteBlock),
		OBJECT(MODEL_NOTE_BLOCK, 5635, 4266, 7830, 0, -90, 0, 0x00000000, bhvNoteBlock),
		OBJECT(MODEL_NOTE_BLOCK, -3152, 4712, 293, 0, -90, 0, 0x00000000, bhvNoteBlock),
		OBJECT(MODEL_NOTE_BLOCK, -8545, 4644, -3054, 0, -57, 0, 0x00000000, bhvNoteBlock),
		OBJECT(MODEL_NOTE_BLOCK, -3751, 5346, -7066, 0, 0, 0, 0x00000000, bhvNoteBlock),
		OBJECT(MODEL_NOTE_BLOCK, -3751, 5754, -7806, 0, 0, 0, 0x00000000, bhvNoteBlock),
		OBJECT(MODEL_NOTE_BLOCK, -1525, 5476, -6123, 0, 0, 0, 0x00000000, bhvNoteBlock),
		OBJECT(MODEL_SCUTTLEBUG, 10228, -1022, -941, 0, -90, 0, 0x00000000, bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, 9263, -302, -1345, 0, -90, 0, 0x00000000, bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, 9562, 741, 3299, 0, -90, 0, 0x00000000, bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, 7299, -280, -1181, 0, -90, 0, 0x00000000, bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, 8500, 1480, 6009, 0, -90, 0, 0x00000000, bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, 5522, 2420, 8591, 0, -90, 0, 0x00000000, bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, 5764, 6127, 6583, 0, -90, 0, 0x00000000, bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, 134, 4546, -660, 0, -90, 0, 0x00000000, bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, -11581, 2985, -2390, 0, -90, 0, 0x00000000, bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, -9090, 4522, -2695, 0, -90, 0, 0x00000000, bhvScuttlebug),
		OBJECT(MODEL_SILVER_STAR, -1023, 6418, -6143, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -6745, 5298, -4660, 0, 0, 0, 0x00000000, bhvHiddenStar),
		OBJECT(MODEL_SILVER_STAR, -3642, 6223, -8934, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_SILVER_STAR, -3121, 6608, -3950, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_SILVER_STAR, -7118, 5912, -7021, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_SILVER_STAR, -6745, 5203, -4660, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_SWOOP, 8373, 1527, 672, 0, -90, 0, 0x00000000, bhvSwoop),
		OBJECT(MODEL_SWOOP, 8140, 1527, 400, 0, -90, 0, 0x00000000, bhvSwoop),
		OBJECT(MODEL_SWOOP, 5630, 4931, 8370, 0, -90, 0, 0x00000000, bhvSwoop),
		OBJECT(MODEL_SWOOP, 5863, 4994, 8641, 0, -90, 0, 0x00000000, bhvSwoop),
		OBJECT(MODEL_NONE, 14277, -796, -1064, 0, -178, 0, (0x50 << 24) | (0x06 << 16), bhvWarp),
		OBJECT(MODEL_NONE, 12795, -851, -952, 0, -178, 0, (0x0A << 16), bhvAirborneWarp),
		OBJECT(MODEL_OG_PIPE, 3282, 3780, -4616, 0, 0, 0, (1 << 24) | (0x09 << 16), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, 3461, 3772, -5345, 0, 0, 0, (1 << 24) | (0x0C << 16), bhvOGpipe),
		TERRAIN(ccm_area_2_collision),
		MACRO_OBJECTS(ccm_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_UNDERGROUND),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 2935, -790, -3250),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
