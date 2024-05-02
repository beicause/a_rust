#pragma once

#include "w2c2_base.h"
#include "core/object/ref_counted.h"

class WasmMemoryBase : public RefCounted {
	GDCLASS(WasmMemoryBase, RefCounted);
protected:
	wasmMemory *memory = nullptr;
	static void _bind_methods() {
		ClassDB::bind_static_method("WasmMemoryBase", D_METHOD("alloc_self", "initialPages", "maxPages", "shared"), &WasmMemoryBase::alloc_self);
		ClassDB::bind_method(D_METHOD("free_self"), &WasmMemoryBase::free_self);
		ClassDB::bind_method(D_METHOD("grow", "page_delta"), &WasmMemoryBase::grow);
		ClassDB::bind_method(D_METHOD("memory_read", "ptr", "size"), &WasmMemoryBase::memory_read);
		ClassDB::bind_method(D_METHOD("memory_write", "ptr", "data"), &WasmMemoryBase::memory_write);
		ClassDB::bind_method(D_METHOD("memory_read_str", "ptr"), &WasmMemoryBase::memory_read_str);
		ClassDB::bind_method(D_METHOD("memory_write_str", "ptr", "data"), &WasmMemoryBase::memory_write_str);
	};

public:
	static Ref<WasmMemoryBase> alloc_self(const U32 initialPages, const U32 maxPages, const bool shared) {
		Ref<WasmMemoryBase> ret = memnew(WasmMemoryBase);
		ret->memory = wasmMemoryAllocate(initialPages, maxPages, shared);
		return ret;
	}

	void free_self() {
		wasmMemoryFree(memory);
	}

	U32 grow(U32 page_delta) {
		return wasmMemoryGrow(memory, page_delta);
	}

	PackedByteArray memory_read(int ptr, int size) {
		if (ptr + size >= memory->size) {
			ERR_PRINT(vformat("wasm memory out of bounds, mem size: %d, ptr: %d, ptr len: %d", memory->size, ptr, size));
			return PackedByteArray();
		}
		U8 *p = &memory->data[ptr];
		PackedByteArray ret;
		ret.resize(size);
		memcpy(ret.ptrw(), p, size);
		return ret;
	};

	void memory_write(int ptr, const PackedByteArray &data) {
		if (ptr + data.size() >= memory->size) {
			ERR_PRINT(vformat("wasm memory out of bounds, size: %d, ptr: %d, ptr len: %d", memory->size, ptr, data.size()));
			return;
		}
		U8 *p = &memory->data[ptr];
		memcpy(p, data.ptr(), data.size());
	}

	String memory_read_str(int ptr) {
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

	void memory_write_str(int ptr, const String &data) {
		if (ptr + data.utf8().size() >= memory->size) {
			ERR_PRINT(vformat("wasm memory out of bounds, size: %d, ptr: %d, ptr len: %d", memory->size, ptr, data.utf8().size()));
			return;
		}
		U8 *p = &memory->data[ptr];
		memcpy(p, data.utf8().ptr(), data.utf8().size());
	}
};
