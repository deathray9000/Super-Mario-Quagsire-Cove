const GeoLayout og_pipe_Armature_001[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, og_pipe_switch_geo_mesh_layer_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout og_pipe_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, og_pipe_geo_mesh_layer_1_mat_override_red_side_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout og_pipe_switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, og_pipe_geo_mesh_layer_1_mat_override_blue_side_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout og_pipe_switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, og_pipe_geo_mesh_layer_1_mat_override_gold_side_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout og_pipe_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(5, geo_switch_anim_state),
		GEO_OPEN_NODE(),
			GEO_NODE_START(),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, og_pipe_geo_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_BRANCH(1, og_pipe_switch_opt1),
			GEO_BRANCH(1, og_pipe_switch_opt2),
			GEO_BRANCH(1, og_pipe_switch_opt3),
			GEO_BRANCH(1, og_pipe_Armature_001),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, og_pipe_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, og_pipe_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
