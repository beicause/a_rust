#include "gd_wasm_memory.h"

void WasmMemoryBase::_bind_methods() {
	ClassDB::bind_method(D_METHOD("free_self"), &WasmMemoryBase::free_self);
	ClassDB::bind_method(D_METHOD("grow", "page_delta"), &WasmMemoryBase::grow);
	ClassDB::bind_method(D_METHOD("get_size"), &WasmMemoryBase::get_size);
	ClassDB::bind_method(D_METHOD("memory_read_str", "ptr"), &WasmMemoryBase::memory_read_str);
	ClassDB::bind_method(D_METHOD("memory_write_str", "ptr", "data"), &WasmMemoryBase::memory_write_str);

	BIND_MEMORY_IO_FUNC(u8)
	BIND_MEMORY_IO_FUNC(f32)
	BIND_MEMORY_IO_FUNC(f64)
	BIND_MEMORY_IO_FUNC(i32)
	BIND_MEMORY_IO_FUNC(i64)
}

void WasmMemoryBase::free_self() {
	wasm_rt_free_memory(memory);
}

uint32_t WasmMemoryBase::grow(uint32_t page_delta) {
	return wasm_rt_grow_memory(memory, page_delta);
}

String WasmMemoryBase::memory_read_str(uint32_t ptr) {
	if (ptr >= memory->size) {
		ERR_PRINT(vformat("wasm memory out of bounds, size: %d, ptr: %d", memory->size, ptr));
		return "";
	}
	const char *p = reinterpret_cast<const char *>(&memory->data[ptr]);
	if (ptr + strlen(p) >= memory->size) {
		ERR_PRINT(vformat("wasm memory out of bounds, size: %d, ptr: %d, ptr len: %d", memory->size, ptr, strlen(p)));
		return "";
	}
	String ret = p;
	return ret;
};

void WasmMemoryBase::memory_write_str(uint32_t ptr, const String &data) {
	if (ptr + data.utf8().size() >= memory->size) {
		ERR_PRINT(vformat("wasm memory out of bounds, size: %d, ptr: %d, ptr len: %d", memory->size, ptr, data.utf8().size()));
		return;
	}
	uint8_t *p = &memory->data[ptr];
	memcpy(p, data.utf8().ptr(), data.utf8().size());
}

IMPL_MEMORY_IO_FUNC(u8, PackedByteArray,1)
IMPL_MEMORY_IO_FUNC(f32, PackedFloat32Array,4)
IMPL_MEMORY_IO_FUNC(f64, PackedFloat64Array,8)
IMPL_MEMORY_IO_FUNC(i32, PackedInt32Array,4)
IMPL_MEMORY_IO_FUNC(i64, PackedInt64Array,8)
