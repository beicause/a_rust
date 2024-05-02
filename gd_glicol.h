#pragma once
#include "gd_wasm_memory.h"
#include "glicol.h"

class WasmGlicol : public WasmMemoryBase {
	GDCLASS(WasmGlicol, WasmMemoryBase);

	w2c_glicol__wasm inst{};

protected:
	static void _bind_methods();

public:
	WasmGlicol() {
		wasm2c_glicol__wasm_instantiate(&inst, nullptr);
		memory = w2c_glicol__wasm_memory(&inst);
	}

	~WasmGlicol() {
		wasm2c_glicol__wasm_free(&inst);
	}

	uint32_t alloc_u8(uint32_t sz) { return w2c_glicol__wasm_alloc_u8(&inst, sz); }
	void dealloc_u8(uint32_t ptr, uint32_t sz) { w2c_glicol__wasm_dealloc_u8(&inst, ptr, sz); };

	void process(uint32_t o_buf_ptr, uint32_t buf_len, uint32_t o_result_ptr) { w2c_glicol__wasm_process(&inst, o_buf_ptr, buf_len, o_result_ptr); };
	void add_sample(uint32_t name_ptr, uint32_t arr_ptr, uint32_t arr_len, uint32_t channels, uint32_t sample_rate) { w2c_glicol__wasm_add_sample(&inst, name_ptr, arr_ptr, arr_len, channels, sample_rate); };
	void update(uint32_t str_ptr) { w2c_glicol__wasm_update(&inst, str_ptr); };
	void send_msg(uint32_t str_ptr) { w2c_glicol__wasm_send_msg(&inst, str_ptr); };
	void live_coding_mode(uint32_t boolean) { w2c_glicol__wasm_live_coding_mode(&inst, boolean); };
	void set_bpm(float bpm) { w2c_glicol__wasm_set_bpm(&inst, bpm); };
	void set_track_amp(float amp) { w2c_glicol__wasm_set_track_amp(&inst, amp); };
	void set_sr(float sr) { w2c_glicol__wasm_set_sr(&inst, sr); };
	void set_seed(float seed) { w2c_glicol__wasm_set_seed(&inst, seed); };
	void reset() { w2c_glicol__wasm_reset(&inst); };
};
