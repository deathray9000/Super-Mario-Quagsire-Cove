const GeoLayout og_pipe_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, og_pipe_model_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, og_pipe_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
