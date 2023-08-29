static const s16 wooden_signpost_anim_Break_values[] = {
	0x0000, 0x0030, 0x000D, 0x0000, 0x0000, 0x0A17, 0x2049, 0x367A, 0x4091, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 
};

static const u16 wooden_signpost_anim_Break_indices[] = {
	0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0002, 0x0006, 0x0003, 0x0001, 
	0x0009, 0x0006, 0x000A, 
};

static const struct Animation wooden_signpost_anim_Break = {
	1,
	0,
	0,
	1,
	5,
	ANIMINDEX_NUMPARTS(wooden_signpost_anim_Break_indices),
	wooden_signpost_anim_Break_values,
	wooden_signpost_anim_Break_indices,
	0,
};

