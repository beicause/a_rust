#include "resource_loader_jsonz.h"
#include "core/io/json.h"
#include "gd_lz4.h"

Ref<Resource> ResourceFormatLoaderJSONZ::load(const String &p_path, const String &p_original_path, Error *r_error, bool p_use_sub_threads, float *r_progress, CacheMode p_cache_mode) {
	if (r_error) {
		*r_error = ERR_FILE_CANT_OPEN;
	}

	if (!FileAccess::exists(p_path)) {
		*r_error = ERR_FILE_NOT_FOUND;
		return Ref<Resource>();
	}

	Ref<JSON> json;
	json.instantiate();

	Error err_text = json->parse(FileAccess::get_file_as_string(p_path));
	if (err_text == OK) {
		if (r_error) {
			*r_error = OK;
		}
		return json;
	}

	PackedByteArray json_file = Lz4::decompress_frame(FileAccess::get_file_as_bytes(p_path));
	String json_str = "";
	Error err = json_str.parse_utf8(reinterpret_cast<const char *>(json_file.ptr()));
	if (err != OK) {
		ERR_PRINT("Error parsing decompressed buffer to utf8 string");
		return Ref<Resource>();
	}
	err = json->parse(json_str);
	if (err != OK) {
		String err_text = "Error parsing JSON file at '" + p_path + "', on line " + itos(json->get_error_line()) + ": " + json->get_error_message();
		if (r_error) {
			*r_error = err;
		}
		ERR_PRINT(err_text);
		return Ref<Resource>();
	}

	if (r_error) {
		*r_error = OK;
	}

	return json;
}

void ResourceFormatLoaderJSONZ::get_recognized_extensions(List<String> *p_extensions) const {
	p_extensions->push_back("jsonz");
}

bool ResourceFormatLoaderJSONZ::handles_type(const String &p_type) const {
	return (p_type == "JSON");
}

String ResourceFormatLoaderJSONZ::get_resource_type(const String &p_path) const {
	String el = p_path.get_extension().to_lower();
	if (el == "jsonz") {
		return "JSON";
	}
	return "";
}
