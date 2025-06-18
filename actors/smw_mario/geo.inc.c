const GeoLayout smw_mario_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_mario_geo_mesh_layer_4_mat_override_pipe_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_mario_switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_mario_geo_mesh_layer_4_mat_override_back_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_mario_switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_mario_geo_mesh_layer_4_mat_override_look_up_2),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_mario_switch_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_mario_geo_mesh_layer_4_mat_override_duck_3),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_mario_switch_opt5[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_mario_geo_mesh_layer_4_mat_override_walk_1_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_mario_switch_opt6[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_mario_geo_mesh_layer_4_mat_override_walk_2_5),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_mario_switch_opt7[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_mario_geo_mesh_layer_4_mat_override_jump_6),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_mario_switch_opt8[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_mario_geo_mesh_layer_4_mat_override_fall_7),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_mario_switch_opt9[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_mario_geo_mesh_layer_4_mat_override_run_1_8),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_mario_switch_opt10[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_mario_geo_mesh_layer_4_mat_override_run_2_9),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_mario_switch_opt11[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_mario_geo_mesh_layer_4_mat_override_run_3_10),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_mario_switch_opt12[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_mario_geo_mesh_layer_4_mat_override_run_jump_11),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_mario_switch_opt13[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_mario_geo_mesh_layer_4_mat_override_slide_12),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_mario_switch_opt14[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_mario_geo_mesh_layer_4_mat_override_skid_13),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_mario_switch_opt15[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_mario_geo_mesh_layer_4_mat_override_victory_14),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_mario_switch_opt16[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_mario_geo_mesh_layer_4_mat_override_death_15),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_mario_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(17, geo_switch_anim_state),
		GEO_OPEN_NODE(),
			GEO_NODE_START(),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_mario_geo_mesh_layer_4),
			GEO_CLOSE_NODE(),
			GEO_BRANCH(1, smw_mario_switch_opt1),
			GEO_BRANCH(1, smw_mario_switch_opt2),
			GEO_BRANCH(1, smw_mario_switch_opt3),
			GEO_BRANCH(1, smw_mario_switch_opt4),
			GEO_BRANCH(1, smw_mario_switch_opt5),
			GEO_BRANCH(1, smw_mario_switch_opt6),
			GEO_BRANCH(1, smw_mario_switch_opt7),
			GEO_BRANCH(1, smw_mario_switch_opt8),
			GEO_BRANCH(1, smw_mario_switch_opt9),
			GEO_BRANCH(1, smw_mario_switch_opt10),
			GEO_BRANCH(1, smw_mario_switch_opt11),
			GEO_BRANCH(1, smw_mario_switch_opt12),
			GEO_BRANCH(1, smw_mario_switch_opt13),
			GEO_BRANCH(1, smw_mario_switch_opt14),
			GEO_BRANCH(1, smw_mario_switch_opt15),
			GEO_BRANCH(1, smw_mario_switch_opt16),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, smw_mario_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
