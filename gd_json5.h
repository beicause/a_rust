#pragma once

#include "core/object/ref_counted.h"
#include "crates/cxx.h"
#include "gd_json5.rs.h"

class JSON5 : public RefCounted {
	GDCLASS(JSON5, RefCounted);

protected:
	static void _bind_methods() {
	}

public:
	static String json5_to_json(String data, bool pretty) {
		return json5::json5_to_json(rust::Str(data.utf8().get_data()), pretty).data();
	}
	static String json_to_json5(String data) {
		return json5::json_to_json5(rust::Str(data.utf8().get_data())).data();
	}
};
