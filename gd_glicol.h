#pragma once
#include "gd_wasm_memory.h"
#include "glicol.h"

class WasmGlicol : public WasmMemoryBase {
	GDCLASS(WasmGlicol, RefCounted);

	glicolwasmInstance inst{};

protected:
	static void _bind_methods();

public:
	WasmGlicol() {
		glicolwasmInstantiate(&inst, nullptr);
		memory = glicolwasm_memory(&inst);
	}

	~WasmGlicol() {
		glicolwasmFreeInstance(&inst);
	}

	U32 alloc_u8(U32 sz) { return glicolwasm_alloc_u8(&inst, sz); }
	void dealloc_u8(U32 ptr, U32 sz) { glicolwasm_dealloc_u8(&inst, ptr, sz); };

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
