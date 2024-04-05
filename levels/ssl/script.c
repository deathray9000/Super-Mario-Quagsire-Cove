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
#include "levels/ssl/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ssl_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ssl_segment_7SegmentRomStart, _ssl_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _ssl_skybox_yay0SegmentRomStart, _ssl_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group5_yay0SegmentRomStart, _group5_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group5_geoSegmentRomStart, _group5_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _ssl_segment_7SegmentRomStart, _ssl_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_6), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PALM_TREE, tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ssl_geo_0005C0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ssl_geo_0005D8), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_TOP, ssl_geo_000618), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_GRINDEL, ssl_geo_000734), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_SPINDEL, ssl_geo_000764), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_MOVING_PYRAMID_WALL, ssl_geo_000794), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_ELEVATOR, ssl_geo_0007AC), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_TOX_BOX, ssl_geo_000630), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ssl_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_PIRANHA_PLANT, -3754, 46, 411, 0, 0, 0, 0x000A0000, bhvPiranhaPlant),
		OBJECT(MODEL_NONE, -3500, 200, 4647, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -3500, 200, 4647),
		TERRAIN(ssl_area_1_collision),
		MACRO_OBJECTS(ssl_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SNOW),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, ssl_area_2),
		WARP_NODE(0x0A, LEVEL_WF, 0x02, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_SSL, 0x02, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_SSL, 0x02, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_SSL, 0x02, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0xFF, LEVEL_ENDING, 0x01, 0xFF, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CHECKPOINT_FLAG, 6642, 9079, -2242, 0, 0, 0, (0x01 << 16) | (0x02 << 8), bhvCheckpoint_Flag),
		OBJECT(MODEL_NONE, 5560, 9210, -2257, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -4761, 4126, -1996, 0, -24, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -4405, 3502, -5334, 0, -21, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2453, 2902, -6536, 0, -92, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 210, 2902, -6555, 0, -92, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 1320, 2902, -6434, 0, -106, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -696, 7855, -2225, 0, 103, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2300, 7855, -644, 0, 165, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 3105, 25, -497, 0, 178, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 3071, 25, 335, 0, 178, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 2531, -567, 2564, 0, 149, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 4910, 9210, -2257, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 719, -1438, 5089, 0, -155, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 3290, -2504, 6920, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 6656, -3875, 6143, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 6656, -3875, 5443, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 6656, -3875, 4743, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 6656, -4375, 3993, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 303, 9210, -2357, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2505, 6978, 620, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2412, 6978, 4253, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -5946, 5413, 6052, 0, 47, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2530, 6276, 5563, 0, -16, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -6531, 4894, 5002, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -6802, 4894, 1469, 0, -6, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_OG_PIPE, 7548, 9079, -2242, 0, 0, 0, (0xA << 16), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, 6337, -5936, -181, 0, 0, 0, (0xFF << 16), bhvOGpipe),
		OBJECT(MODEL_NONE, 6644, 9252, -1328, 0, 0, 0, (73 << 24), bhvHiddenStar),
		OBJECT(MODEL_OG_PIPE, 5957, -5936, -181, 0, 0, 0, (1 << 24) | (0xC << 16), bhvOGpipe),
		OBJECT(MODEL_OG_PIPE, 7048, 9079, -1762, 0, 0, 0, (1 << 24) | (0xB << 16) | (1 << 8), bhvOGpipe),
		OBJECT(MODEL_QUAGSIRE, 7095, 9079, -2242, 0, 90, 0, (0xB << 16), bhvQuagsire),
		OBJECT(MODEL_WOODEN_SIGNPOST, 6154, -5936, 41, 0, 0, 0, (0xC << 16), bhvMessagePanel),
		OBJECT(MODEL_SILVER_STAR, -4221, 5296, 6747, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_SILVER_STAR, -3667, 2685, -6178, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_SILVER_STAR, 2235, -1556, 2904, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_SILVER_STAR, 6675, -4039, 6577, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_SILVER_STAR, 3614, 8311, -2257, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, 6210, -5499, 999, 0, 0, 0, (72 << 24), bhvStar),
		OBJECT(MODEL_STAR_STATUE, 5232, -5936, 1056, 0, 90, 0, (74 << 24), bhvStarStatue),
		TERRAIN(ssl_area_2_collision),
		MACRO_OBJECTS(ssl_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SNOW),
		TERRAIN_TYPE(TERRAIN_SNOW),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, ssl_area_3),
		WARP_NODE(0xF0, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_SSL, 0x02, 0x04, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_SSL, 0x03, 0x03, WARP_NO_CHECKPOINT),
		TERRAIN(ssl_area_3_collision),
		MACRO_OBJECTS(ssl_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SNOW),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -3500, 200, 4647),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
