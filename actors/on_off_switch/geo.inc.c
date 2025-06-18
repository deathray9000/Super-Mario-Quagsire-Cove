const GeoLayout on_off_switch_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, on_off_switch_geo_mesh_layer_1_mat_override_off_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout on_off_switch_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(2, geo_switch_anim_state),
		GEO_OPEN_NODE(),
			GEO_NODE_START(),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, on_off_switch_geo_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_BRANCH(1, on_off_switch_switch_opt1),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, on_off_switch_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
