void scroll_ccm_dl_water_Plane_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 10;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	static int timeY;
	float amplitudeY = 10.0;
	float frequencyY = 0.03999999165534973;
	float offsetY = 0.0;
	Vtx *vertices = segmented_to_virtual(ccm_dl_water_Plane_mesh_layer_5_vtx_0);

	deltaY = (int)(amplitudeY * frequencyY * coss((frequencyY * timeY + offsetY) * (1024 * 16 - 1) / 6.28318530718) * 0x20);

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;	timeY += 1;
}

void scroll_ccm_dl_stage_001_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 8;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ccm_dl_stage_001_mesh_layer_5_vtx_0);

	deltaY = (int)(0.20000000298023224 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ccm() {
	scroll_ccm_dl_water_Plane_mesh_layer_5_vtx_0();
	scroll_ccm_dl_stage_001_mesh_layer_5_vtx_0();
}
