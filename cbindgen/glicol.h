#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <ostream>
#include <new>


namespace glicol {

struct Glicol {
  void *engine;
  void *buffer;
};


extern "C" {

void add_sample(Glicol *glicol,
                const char *name_str,
                const float *arr_ptr,
                size_t length,
                size_t channels,
                size_t sr);

void glicol_alloc(Glicol *out_glicol);

void glicol_dealloc(Glicol *glicol);

void live_coding_mode(Glicol *glicol, bool io);

void process(Glicol *glicol, float *out_ptr, size_t size);

void reset(Glicol *glicol);

void send_msg(Glicol *glicol, const char *str_ptr);

void set_bpm(Glicol *glicol, float bpm);

void set_seed(Glicol *glicol, float seed);

void set_sr(Glicol *glicol, float sr);

void set_track_amp(Glicol *glicol, float amp);

void update(Glicol *glicol, const char *str_ptr);

} // extern "C"

} // namespace glicol
