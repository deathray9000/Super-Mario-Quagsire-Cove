const GeoLayout smw_blocks_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_blocks_geo_mesh_layer_4_mat_override_coin_2_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_blocks_switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_blocks_geo_mesh_layer_4_mat_override_coin_3_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_blocks_switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_blocks_geo_mesh_layer_4_mat_override_coin_4_2),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_blocks_switch_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_blocks_geo_mesh_layer_4_mat_override_turn_1_3),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_blocks_switch_opt5[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_blocks_geo_mesh_layer_4_mat_override_turn_2_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_blocks_switch_opt6[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_blocks_geo_mesh_layer_4_mat_override_turn_3_5),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_blocks_switch_opt7[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_blocks_geo_mesh_layer_4_mat_override_turn_4_6),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_blocks_switch_opt8[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_blocks_geo_mesh_layer_4_mat_override_Message_7),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_blocks_switch_opt9[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_blocks_geo_mesh_layer_4_mat_override_red_of_switch_8),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_blocks_switch_opt10[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_blocks_geo_mesh_layer_4_mat_override_blue_of_switch_9),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_blocks_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(11, geo_switch_anim_state),
		GEO_OPEN_NODE(),
			GEO_NODE_START(),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_blocks_geo_mesh_layer_4),
			GEO_CLOSE_NODE(),
			GEO_BRANCH(1, smw_blocks_switch_opt1),
			GEO_BRANCH(1, smw_blocks_switch_opt2),
			GEO_BRANCH(1, smw_blocks_switch_opt3),
			GEO_BRANCH(1, smw_blocks_switch_opt4),
			GEO_BRANCH(1, smw_blocks_switch_opt5),
			GEO_BRANCH(1, smw_blocks_switch_opt6),
			GEO_BRANCH(1, smw_blocks_switch_opt7),
			GEO_BRANCH(1, smw_blocks_switch_opt8),
			GEO_BRANCH(1, smw_blocks_switch_opt9),
			GEO_BRANCH(1, smw_blocks_switch_opt10),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, smw_blocks_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
