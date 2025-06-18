const GeoLayout smw_particles_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_particles_geo_mesh_layer_4_mat_override_Poof_1_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_particles_switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_particles_geo_mesh_layer_4_mat_override_Poof_2_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_particles_switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_particles_geo_mesh_layer_4_mat_override_Poof_3_2),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_particles_switch_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_particles_geo_mesh_layer_4_mat_override_Poof_4_3),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_particles_switch_opt5[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_particles_geo_mesh_layer_4_mat_override_star_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_particles_switch_opt6[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_particles_geo_mesh_layer_4_mat_override_shatter_1_5),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_particles_switch_opt7[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_particles_geo_mesh_layer_4_mat_override_shatter_2_6),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout smw_particles_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(8, geo_switch_anim_state),
		GEO_OPEN_NODE(),
			GEO_NODE_START(),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, smw_particles_geo_mesh_layer_4),
			GEO_CLOSE_NODE(),
			GEO_BRANCH(1, smw_particles_switch_opt1),
			GEO_BRANCH(1, smw_particles_switch_opt2),
			GEO_BRANCH(1, smw_particles_switch_opt3),
			GEO_BRANCH(1, smw_particles_switch_opt4),
			GEO_BRANCH(1, smw_particles_switch_opt5),
			GEO_BRANCH(1, smw_particles_switch_opt6),
			GEO_BRANCH(1, smw_particles_switch_opt7),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, smw_particles_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
