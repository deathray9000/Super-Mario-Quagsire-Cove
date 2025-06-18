const GeoLayout smw_enemies_small_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_enemies_small_geo_mesh_layer_4_mat_override_Goomba_stomped_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_enemies_small_switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_enemies_small_geo_mesh_layer_4_mat_override_Goomba_dead_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_enemies_small_switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_enemies_small_geo_mesh_layer_4_mat_override_NIniji_Jump_2),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_enemies_small_switch_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_enemies_small_geo_mesh_layer_4_mat_override_Ninji_Ground_3),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_enemies_small_switch_opt5[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_enemies_small_geo_mesh_layer_4_mat_override_Ninji_Dead_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_enemies_small_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(7, geo_switch_anim_state),
		GEO_OPEN_NODE(),
			GEO_NODE_START(),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_enemies_small_geo_mesh_layer_4),
			GEO_CLOSE_NODE(),
			GEO_BRANCH(1, smw_enemies_small_switch_opt1),
			GEO_BRANCH(1, smw_enemies_small_switch_opt2),
			GEO_BRANCH(1, smw_enemies_small_switch_opt3),
			GEO_BRANCH(1, smw_enemies_small_switch_opt4),
			GEO_BRANCH(1, smw_enemies_small_switch_opt5),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, smw_enemies_small_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
