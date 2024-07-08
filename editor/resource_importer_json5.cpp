#include "resource_importer_json5.h"
#include "core/io/json.h"
#include "modules/a_rust/gd_json5.h"
#include "modules/a_rust/gd_lz4.h"

String ResourceImporterJSON5::get_importer_name() const {
	return "json";
}
String ResourceImporterJSON5::get_visible_name() const {
	return "JSON";
}
String ResourceImporterJSON5::get_save_extension() const {
	return "jsonz";
}

String ResourceImporterJSON5::get_resource_type() const {
	return "JSON";
}

int ResourceImporterJSON5::get_preset_count() const {
	return 0;
}
String ResourceImporterJSON5::get_preset_name(int p_idx) const {
	return "";
}
void ResourceImporterJSON5::get_import_options(const String &p_path, List<ImportOption> *r_options, int p_preset) const {
	r_options->push_back(ImportOption(PropertyInfo(Variant::BOOL, "pretty"), false));
	r_options->push_back(ImportOption(PropertyInfo(Variant::BOOL, "compress"), true));
}
bool ResourceImporterJSON5::get_option_visibility(const String &p_path, const String &p_option, const HashMap<StringName, Variant> &p_options) const {
	return true;
}
void ResourceImporterJSON5::get_recognized_extensions(List<String> *p_extensions) const {
	p_extensions->push_back("json5");
}

Error ResourceImporterJSON5::import(const String &p_source_file, const String &p_save_path, const HashMap<StringName, Variant> &p_options, List<String> *r_platform_variants, List<String> *r_gen_files, Variant *r_metadata) {
	const bool pretty = p_options["pretty"];
	const bool compress = p_options["compress"];

	Ref<JSON> json;
	json.instantiate();
	Error err = json->parse(JSON5::json5_to_json(FileAccess::get_file_as_string(p_source_file), pretty), true);
	if (err != OK) {
		String err_text = "Error parsing JSON file at '" + p_source_file + "', on line " + itos(json->get_error_line()) + ": " + json->get_error_message();
		ERR_PRINT(err_text);
		return ERR_INVALID_DATA;
	}
	Ref<FileAccess> file = FileAccess::open(p_save_path + ".jsonz", FileAccess::WRITE);
	if (compress) {
		file->store_buffer(Lz4::compress_frame(json->get_parsed_text().to_utf8_buffer()));
	} else {
		file->store_string(json->get_parsed_text());
	}
	file->close();
	return err;
}
