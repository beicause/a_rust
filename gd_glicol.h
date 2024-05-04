#pragma once

#include "cbindgen/glicol.h"
#include "core/object/ref_counted.h"

class Glicol : public RefCounted {
	GDCLASS(Glicol, RefCounted);

	glicol::Glicol inst{};

protected:
	static void _bind_methods();

public:
	Glicol() {
		glicol::glicol_alloc(&inst);
	}

	~Glicol() {
		glicol::glicol_dealloc(&inst);
	}

	PackedFloat32Array process(size_t buf_len) {
		PackedFloat32Array ret;
		ret.resize(buf_len);
		glicol::process(&inst, ret.ptrw(), buf_len);
		return ret;
	};
	void add_sample(String name_ptr, PackedFloat32Array arr, size_t channels, size_t sample_rate) {
		glicol::add_sample(&inst, name_ptr.utf8(), arr.ptr(), arr.size(), channels, sample_rate);
	};
	void update(String str_ptr) { glicol::update(&inst, str_ptr.utf8()); };
	void send_msg(String str_ptr) { glicol::send_msg(&inst, str_ptr.utf8()); };
	void live_coding_mode(bool boolean) { glicol::live_coding_mode(&inst, boolean); };
	void set_bpm(float bpm) { glicol::set_bpm(&inst, bpm); };
	void set_track_amp(float amp) { glicol::set_track_amp(&inst, amp); };
	void set_sr(float sr) { glicol::set_sr(&inst, sr); };
	void set_seed(float seed) { glicol::set_seed(&inst, seed); };
	void reset() { glicol::reset(&inst); };
};
