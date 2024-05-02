#pragma once
#include "glicol.h"
#include "core/os/os.h"
#include "gd_wasm_memory.h"

class WasmGlicol : public WasmMemoryBase {
	GDCLASS(WasmGlicol, RefCounted);

	glicolwasmInstance inst{};

protected:
	static void _bind_methods() {
		ClassDB::bind_method(D_METHOD("alloc_f32", "sz"), &WasmGlicol::alloc_f32);
		ClassDB::bind_method(D_METHOD("alloc_u8", "sz"), &WasmGlicol::alloc_u8);
		ClassDB::bind_method(D_METHOD("process", "o_buf_ptr", "buf_len", "o_result_ptr"), &WasmGlicol::process);
		ClassDB::bind_method(D_METHOD("add_sample", "name_ptr", "name_len", "arr_ptr", "arr_len", "channels", "sample_rate"), &WasmGlicol::add_sample);
		ClassDB::bind_method(D_METHOD("update", "arr_ptr", "arr_len"), &WasmGlicol::update);
		ClassDB::bind_method(D_METHOD("send_msg", "arr_ptr", "arr_len"), &WasmGlicol::send_msg);
		ClassDB::bind_method(D_METHOD("live_coding_mode", "boolean"), &WasmGlicol::live_coding_mode);
		ClassDB::bind_method(D_METHOD("set_bpm", "bpm"), &WasmGlicol::set_bpm);
		ClassDB::bind_method(D_METHOD("set_track_amp", "amp"), &WasmGlicol::set_track_amp);
		ClassDB::bind_method(D_METHOD("set_sr", "sr"), &WasmGlicol::set_sr);
		ClassDB::bind_method(D_METHOD("set_seed", "seed"), &WasmGlicol::set_seed);
		ClassDB::bind_method(D_METHOD("reset"), &WasmGlicol::reset);
	};

public:
	WasmGlicol() {
		glicolwasmInstantiate(&inst, nullptr);
		memory = glicolwasm_memory(&inst);
	}

	~WasmGlicol() {
		glicolwasmFreeInstance(&inst);
	}

	U32 alloc_f32(U32 sz) { return glicolwasm_alloc_f32(&inst, sz); }
	U32 alloc_u8(U32 sz) { return glicolwasm_alloc_u8(&inst, sz); }
	void process(U32 o_buf_ptr, U32 buf_len, U32 o_result_ptr) { glicolwasm_process(&inst, o_buf_ptr, buf_len, o_result_ptr); };
	void add_sample(U32 name_ptr, U32 arr_ptr, U32 arr_len, U32 channels, U32 sample_rate) { glicolwasm_add_sample(&inst, name_ptr, arr_ptr, arr_len, channels, sample_rate); };
	void update(U32 str_ptr) { glicolwasm_update(&inst, str_ptr); };
	void send_msg(U32 str_ptr) { glicolwasm_send_msg(&inst, str_ptr); };
	void live_coding_mode(U32 boolean) { glicolwasm_live_coding_mode(&inst, boolean); };
	void set_bpm(F32 bpm) { glicolwasm_set_bpm(&inst, bpm); };
	void set_track_amp(F32 amp) { glicolwasm_set_track_amp(&inst, amp); };
	void set_sr(F32 sr) { glicolwasm_set_sr(&inst, sr); };
	void set_seed(F32 seed) { glicolwasm_set_seed(&inst, seed); };
	void reset() { glicolwasm_reset(&inst); };
};
