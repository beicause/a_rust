#pragma once

#include "wasm-rt.h"
#include "core/object/ref_counted.h"


#define IMPL_MEMORY_IO_FUNC(suffix,cls,type_size)\
	cls WasmMemoryBase::memory_read_##suffix(uint32_t ptr, uint32_t size) {\
	if (ptr + size >= memory->size) {\
		ERR_PRINT(vformat("wasm memory out of bounds, mem size: %d, ptr: %d, ptr len: %d", memory->size, ptr, size));\
		return cls();\
	}\
	uint8_t *p = &memory->data[ptr];\
	cls ret;\
	ret.resize(size);\
	memcpy(ret.ptrw(), p, size*type_size);\
	return ret;\
}\
\
void WasmMemoryBase::memory_write_##suffix(uint32_t ptr, const cls &data) {\
	if (ptr + data.size() >= memory->size) {\
		ERR_PRINT(vformat("wasm memory out of bounds, size: %d, ptr: %d, ptr len: %d", memory->size, ptr, data.size()));\
		return;\
	}\
	uint8_t *p = &memory->data[ptr];\
	memcpy(p, data.ptr(), data.size()*type_size);\
}

#define DEF_MEMORY_IO_FUNC(suffix,cls)\
	cls memory_read_##suffix(uint32_t ptr, uint32_t size);\
	void memory_write_##suffix(uint32_t ptr, const cls &data);

#define BIND_MEMORY_IO_FUNC(suffix)\
	ClassDB::bind_method(D_METHOD("memory_read_"#suffix, "ptr","len"), &WasmMemoryBase::memory_read_##suffix);\
	ClassDB::bind_method(D_METHOD("memory_write_"#suffix, "ptr", "data"), &WasmMemoryBase::memory_write_##suffix);

class WasmMemoryBase : public RefCounted {
	GDCLASS(WasmMemoryBase, RefCounted);
protected:
	wasm_rt_memory_t *memory = nullptr;
	static void _bind_methods();

public:
	void free_self() ;
	uint32_t grow(uint32_t page_delta) ;
	uint64_t get_size(){
		return memory->size;
	}
	String memory_read_str(uint32_t ptr);
	void memory_write_str(uint32_t ptr, const String &data);

	DEF_MEMORY_IO_FUNC(u8, PackedByteArray);
	DEF_MEMORY_IO_FUNC(f32, PackedFloat32Array);
	DEF_MEMORY_IO_FUNC(f64, PackedFloat64Array);
	DEF_MEMORY_IO_FUNC(i32, PackedInt32Array);
	DEF_MEMORY_IO_FUNC(i64, PackedInt64Array);
};
