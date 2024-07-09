#include "register_types.h"
#include "gd_glicol.h"
#include "gd_jmespath.h"
#include "gd_json_converter.h"
#include "gd_lz4.h"
#include "resource_loader_jsonz.h"

Ref<ResourceFormatLoaderJSONZ> resource_loader_jsonz;

#ifdef TOOLS_ENABLED
#include "editor/resource_importer_json_converter.h"

static Ref<ResourceImporterJSONConverter> resource_importer_json5;
#endif // TOOLS_ENABLED

void initialize_a_rust_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	ClassDB::register_class<Glicol>();
	ClassDB::register_class<Lz4>();
	ClassDB::register_class<JMESExpr>();
	ClassDB::register_class<JMESVariable>();
	ClassDB::register_class<JSONConverter>();

	resource_loader_jsonz.instantiate();

	ResourceLoader::add_resource_format_loader(resource_loader_jsonz);

#ifdef TOOLS_ENABLED
	resource_importer_json5.instantiate();

	ResourceFormatImporter::get_singleton()->add_importer(resource_importer_json5);
#endif // TOOLS_ENABLED
}

void uninitialize_a_rust_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}

	ResourceLoader::remove_resource_format_loader(resource_loader_jsonz);

	resource_loader_jsonz.unref();

#ifdef TOOLS_ENABLED
	ResourceFormatImporter::get_singleton()->remove_importer(resource_importer_json5);

	resource_importer_json5.unref();
#endif
}
