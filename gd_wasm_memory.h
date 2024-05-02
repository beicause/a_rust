#pragma once

#include "w2c2_base.h"
#include "core/object/ref_counted.h"


#define IMPL_MEMORY_IO_FUNC(suffix,cls)\
	cls WasmMemoryBase::memory_read_##suffix(int ptr, int size) {\
	if (ptr + size >= memory->size) {\
		ERR_PRINT(vformat("wasm memory out of bounds, mem size: %d, ptr: %d, ptr len: %d", memory->size, ptr, size));\
		return cls();\
	}\
	U8 *p = &memory->data[ptr];\
	cls ret;\
	ret.resize(size);\
	memcpy(ret.ptrw(), p, size);\
	return ret;\
}\
\
void WasmMemoryBase::memory_write_##suffix(int ptr, const cls &data) {\
	if (ptr + data.size() >= memory->size) {\
		ERR_PRINT(vformat("wasm memory out of bounds, size: %d, ptr: %d, ptr len: %d", memory->size, ptr, data.size()));\
		return;\
	}\
	U8 *p = &memory->data[ptr];\
	memcpy(p, data.ptr(), data.size());\
}

#define DEF_MEMORY_IO_FUNC(suffix,cls)\
	cls memory_read_##suffix(int ptr, int size);\
	void memory_write_##suffix(int ptr, const cls &data);

#define BIND_MEMORY_IO_FUNC(suffix)\
	ClassDB::bind_method(D_METHOD("memory_read_"#suffix, "ptr"), &WasmMemoryBase::memory_read_##suffix);\
	ClassDB::bind_method(D_METHOD("memory_write_"#suffix, "ptr", "data"), &WasmMemoryBase::memory_write_##suffix);

class WasmMemoryBase : public RefCounted {
	GDCLASS(WasmMemoryBase, RefCounted);
protected:
	wasmMemory *memory = nullptr;
	static void _bind_methods();

public:
	static Ref<WasmMemoryBase> alloc_self(const U32 initialPages, const U32 maxPages, const bool shared);
	void free_self() ;
	U32 grow(U32 page_delta) ;

	String memory_read_str(int ptr);
	void memory_write_str(int ptr, const String &data);

	DEF_MEMORY_IO_FUNC(u8, PackedByteArray);
	DEF_MEMORY_IO_FUNC(f32, PackedFloat32Array);
	DEF_MEMORY_IO_FUNC(f64, PackedFloat64Array);
	DEF_MEMORY_IO_FUNC(i32, PackedInt32Array);
	DEF_MEMORY_IO_FUNC(i64, PackedInt64Array);
};
