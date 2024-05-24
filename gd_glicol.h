#pragma once

#include "core/object/ref_counted.h"
#include "crates/cxx.h"
#include "rust_lib.rs.h"

class GlicolSynth : public RefCounted {
	GDCLASS(GlicolSynth, RefCounted);

	rust::Box<glicol::Glicol> inst = glicol::glicol_new();

protected:
	static void _bind_methods();

public:
	PackedFloat32Array process(size_t buf_len) {
		PackedFloat32Array ret;
		ret.resize(buf_len);
		inst->process(ret.ptrw(), buf_len);
		return ret;
	};
	void add_sample(String name_ptr, PackedFloat32Array arr, size_t channels, size_t sample_rate) {
		inst->add_sample(name_ptr.utf8(), arr.ptr(), arr.size(), channels, sample_rate);
	};
	void update(String str_ptr) { inst->update(str_ptr.utf8()); };
	void send_msg(String str_ptr) { inst->send_msg(str_ptr.utf8()); };
	void live_coding_mode(bool boolean) { inst->live_coding_mode(boolean); };
	void set_bpm(float bpm) { inst->set_bpm(bpm); };
	void set_track_amp(float amp) { inst->set_track_amp(amp); };
	void set_sr(float sr) { inst->set_sr(sr); };
	void set_seed(float seed) { inst->set_seed(seed); };
	void reset() { inst->reset(); };
};
