const GeoLayout star_statue_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, star_statue_Object_3_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, star_statue_Object_3_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, star_statue_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, star_statue_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
