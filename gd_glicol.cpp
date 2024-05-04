#include "gd_glicol.h"

void Glicol::_bind_methods() {
	ClassDB::bind_method(D_METHOD("process", "buf_len"), &Glicol::process);
	ClassDB::bind_method(D_METHOD("add_sample", "name_ptr", "arr", "channels", "sample_rate"), &Glicol::add_sample);
	ClassDB::bind_method(D_METHOD("update", "str_ptr"), &Glicol::update);
	ClassDB::bind_method(D_METHOD("send_msg", "str_ptr"), &Glicol::send_msg);
	ClassDB::bind_method(D_METHOD("live_coding_mode", "boolean"), &Glicol::live_coding_mode);
	ClassDB::bind_method(D_METHOD("set_bpm", "bpm"), &Glicol::set_bpm);
	ClassDB::bind_method(D_METHOD("set_track_amp", "amp"), &Glicol::set_track_amp);
	ClassDB::bind_method(D_METHOD("set_sr", "sr"), &Glicol::set_sr);
	ClassDB::bind_method(D_METHOD("set_seed", "seed"), &Glicol::set_seed);
	ClassDB::bind_method(D_METHOD("reset"), &Glicol::reset);
};
