#include "gd_glicol.h"
#include "core/os/os.h"

F64 env__now(void *) {
	return OS::get_singleton()->get_unix_time();
}

void WasmGlicol::_bind_methods() {
	ClassDB::bind_method(D_METHOD("alloc_f32", "sz"), &WasmGlicol::alloc_f32);
	ClassDB::bind_method(D_METHOD("alloc_u8", "sz"), &WasmGlicol::alloc_u8);
	ClassDB::bind_method(D_METHOD("dealloc_f32", "ptr", "sz"), &WasmGlicol::dealloc_f32);
	ClassDB::bind_method(D_METHOD("dealloc_u8", "ptr", "sz"), &WasmGlicol::dealloc_u8);
	ClassDB::bind_method(D_METHOD("process", "o_buf_ptr", "buf_len", "o_result_ptr"), &WasmGlicol::process);
	ClassDB::bind_method(D_METHOD("add_sample", "name_ptr", "arr_ptr", "arr_len", "channels", "sample_rate"), &WasmGlicol::add_sample);
	ClassDB::bind_method(D_METHOD("update", "str_ptr"), &WasmGlicol::update);
	ClassDB::bind_method(D_METHOD("send_msg", "str_ptr"), &WasmGlicol::send_msg);
	ClassDB::bind_method(D_METHOD("live_coding_mode", "boolean"), &WasmGlicol::live_coding_mode);
	ClassDB::bind_method(D_METHOD("set_bpm", "bpm"), &WasmGlicol::set_bpm);
	ClassDB::bind_method(D_METHOD("set_track_amp", "amp"), &WasmGlicol::set_track_amp);
	ClassDB::bind_method(D_METHOD("set_sr", "sr"), &WasmGlicol::set_sr);
	ClassDB::bind_method(D_METHOD("set_seed", "seed"), &WasmGlicol::set_seed);
	ClassDB::bind_method(D_METHOD("reset"), &WasmGlicol::reset);
};
