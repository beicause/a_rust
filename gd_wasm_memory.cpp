#include "gd_wasm_memory.h"

void trap(Trap trap) {
	ERR_PRINT(vformat("wasm TRAP: %s", trapDescription(trap)));
	abort();
}

void WasmMemoryBase::_bind_methods() {
	ClassDB::bind_static_method("WasmMemoryBase", D_METHOD("alloc_self", "initialPages", "maxPages", "shared"), &WasmMemoryBase::alloc_self);
	ClassDB::bind_method(D_METHOD("free_self"), &WasmMemoryBase::free_self);
	ClassDB::bind_method(D_METHOD("grow", "page_delta"), &WasmMemoryBase::grow);
	ClassDB::bind_method(D_METHOD("memory_read_str", "ptr"), &WasmMemoryBase::memory_read_str);
	ClassDB::bind_method(D_METHOD("memory_write_str", "ptr", "data"), &WasmMemoryBase::memory_write_str);

	BIND_MEMORY_IO_FUNC(u8)
	BIND_MEMORY_IO_FUNC(f32)
	BIND_MEMORY_IO_FUNC(f64)
	BIND_MEMORY_IO_FUNC(i32)
	BIND_MEMORY_IO_FUNC(i64)
}

Ref<WasmMemoryBase> WasmMemoryBase::alloc_self(const U32 initialPages, const U32 maxPages, const bool shared) {
	Ref<WasmMemoryBase> ret = memnew(WasmMemoryBase);
	ret->memory = wasmMemoryAllocate(initialPages, maxPages, shared);
	return ret;
}

void WasmMemoryBase::free_self() {
	wasmMemoryFree(memory);
}

U32 WasmMemoryBase::grow(U32 page_delta) {
	return wasmMemoryGrow(memory, page_delta);
}

String WasmMemoryBase::memory_read_str(int ptr) {
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

void WasmMemoryBase::memory_write_str(int ptr, const String &data) {
	if (ptr + data.utf8().size() >= memory->size) {
		ERR_PRINT(vformat("wasm memory out of bounds, size: %d, ptr: %d, ptr len: %d", memory->size, ptr, data.utf8().size()));
		return;
	}
	U8 *p = &memory->data[ptr];
	memcpy(p, data.utf8().ptr(), data.utf8().size());
}

IMPL_MEMORY_IO_FUNC(u8, PackedByteArray);
IMPL_MEMORY_IO_FUNC(f32, PackedFloat32Array);
IMPL_MEMORY_IO_FUNC(f64, PackedFloat64Array);
IMPL_MEMORY_IO_FUNC(i32, PackedInt32Array);
IMPL_MEMORY_IO_FUNC(i64, PackedInt64Array);
