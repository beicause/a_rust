#include "gd_glicol.h"

F64 env__now(void *) {
	return OS::get_singleton()->get_unix_time();
}

void trap(Trap trap) {
	ERR_PRINT(vformat("wasm TRAP: %s", trapDescription(trap)));
	abort();
}
