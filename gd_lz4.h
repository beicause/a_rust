#pragma once

#include "core/object/ref_counted.h"
#include "crates/cxx.h"
#include "gd_lz4.rs.h"

class Lz4 : public RefCounted {
	GDCLASS(Lz4, RefCounted);

protected:
	static void _bind_methods() {
		ClassDB::bind_static_method("Lz4", D_METHOD("compress_block", "data"), &Lz4::compress_block);
		ClassDB::bind_static_method("Lz4", D_METHOD("decompress_block", "data"), &Lz4::decompress_block);
		ClassDB::bind_static_method("Lz4", D_METHOD("compress_frame", "data"), &Lz4::compress_frame);
		ClassDB::bind_static_method("Lz4", D_METHOD("decompress_frame", "data"), &Lz4::decompress_frame);
	}

public:
	static PackedByteArray compress_block(PackedByteArray data) {
		PackedByteArray ret;
		rust::Vec<uint8_t> res = lz4::compress_block(data.ptr(), data.size());
		ret.resize(res.size());
		std::copy(res.begin(), res.end(), ret.ptrw());
		return ret;
	}

	static PackedByteArray decompress_block(PackedByteArray data) {
		PackedByteArray ret;
		rust::Vec<uint8_t> res = lz4::decompress_block(data.ptr(), data.size());
		ret.resize(res.size());
		std::copy(res.begin(), res.end(), ret.ptrw());
		return ret;
	}

	static PackedByteArray compress_frame(PackedByteArray data) {
		PackedByteArray ret;
		rust::Vec<uint8_t> res = lz4::compress_frame(data.ptr(), data.size());
		ret.resize(res.size());
		std::copy(res.begin(), res.end(), ret.ptrw());
		return ret;
	}

	static PackedByteArray decompress_frame(PackedByteArray data) {
		PackedByteArray ret;
		rust::Vec<uint8_t> res = lz4::decompress_frame(data.ptr(), data.size());
		ret.resize(res.size());
		std::copy(res.begin(), res.end(), ret.ptrw());
		return ret;
	}
};
