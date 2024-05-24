#include "gd_glicol.h"

void GlicolSynth::_bind_methods() {
	ClassDB::bind_method(D_METHOD("process", "buf_len"), &GlicolSynth::process);
	ClassDB::bind_method(D_METHOD("add_sample", "name_ptr", "arr", "channels", "sample_rate"), &GlicolSynth::add_sample);
	ClassDB::bind_method(D_METHOD("update", "str_ptr"), &GlicolSynth::update);
	ClassDB::bind_method(D_METHOD("send_msg", "str_ptr"), &GlicolSynth::send_msg);
	ClassDB::bind_method(D_METHOD("live_coding_mode", "boolean"), &GlicolSynth::live_coding_mode);
	ClassDB::bind_method(D_METHOD("set_bpm", "bpm"), &GlicolSynth::set_bpm);
	ClassDB::bind_method(D_METHOD("set_track_amp", "amp"), &GlicolSynth::set_track_amp);
	ClassDB::bind_method(D_METHOD("set_sr", "sr"), &GlicolSynth::set_sr);
	ClassDB::bind_method(D_METHOD("set_seed", "seed"), &GlicolSynth::set_seed);
	ClassDB::bind_method(D_METHOD("reset"), &GlicolSynth::reset);
};
