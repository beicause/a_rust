
#include "core/io/json.h"
#include "core/io/resource_loader.h"

class ResourceFormatLoaderJSONZ : public ResourceFormatLoader {
public:
	static Ref<JSON> load(const PackedByteArray &p_bytes, Error *r_error = nullptr);

	virtual Ref<Resource> load(const String &p_path, const String &p_original_path = "", Error *r_error = nullptr, bool p_use_sub_threads = false, float *r_progress = nullptr, CacheMode p_cache_mode = CACHE_MODE_REUSE) override;
	virtual void get_recognized_extensions(List<String> *p_extensions) const override;
	virtual bool handles_type(const String &p_type) const override;
	virtual String get_resource_type(const String &p_path) const override;
};
