const GeoLayout on_off_block_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, on_off_block_geo_mesh_layer_1_mat_override_red__off__0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout on_off_block_switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, on_off_block_geo_mesh_layer_1_mat_override_blue__pure__1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout on_off_block_switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, on_off_block_geo_mesh_layer_1_mat_override_blue__off__2),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout on_off_block_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(4, geo_switch_anim_state),
		GEO_OPEN_NODE(),
			GEO_NODE_START(),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, on_off_block_geo_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_BRANCH(1, on_off_block_switch_opt1),
			GEO_BRANCH(1, on_off_block_switch_opt2),
			GEO_BRANCH(1, on_off_block_switch_opt3),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, on_off_block_material_revert_render_settings),
		//GEO_DISPLAY_LIST(LAYER_TRANSPARENT, on_off_block_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
