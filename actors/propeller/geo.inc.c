const GeoLayout propeller_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ASM(0, geo_prop_blade),
		GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, propeller_blade_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, propeller_other_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, propeller_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
