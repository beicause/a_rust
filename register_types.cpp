#include "register_types.h"
#include "gd_glicol.h"

void initialize_a_w2c2_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	ClassDB::register_class<WasmGlicol>();
	ClassDB::register_class<WasmMemoryBase>();
	wasm_rt_init();
}

void uninitialize_a_w2c2_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	wasm_rt_free();
}
