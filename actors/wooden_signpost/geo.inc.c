const GeoLayout wooden_signpost_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, wooden_signpost_base_mesh_layer_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 48, 13, wooden_signpost_sign_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wooden_signpost_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
