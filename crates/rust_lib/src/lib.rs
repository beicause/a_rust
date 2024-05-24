mod glicol;

use glicol::glicol_new;
use glicol::Glicol;

#[cxx::bridge(namespace = "glicol")]
mod ffi {
    extern "Rust" {
        type Glicol;
        pub fn glicol_new() -> Box<Glicol>;
        unsafe fn process(&mut self, out_ptr: *mut f32, size: usize);
        unsafe fn add_sample(
            &mut self,
            name_str: *const c_char,
            arr_ptr: *const f32,
            length: usize,
            channels: usize,
            sr: usize,
        );
        unsafe fn update(&mut self, str_ptr: *const c_char);
        unsafe fn send_msg(&mut self, str_ptr: *const c_char);
        fn live_coding_mode(&mut self, io: bool);
        fn set_bpm(&mut self, bpm: f32);
        fn set_track_amp(&mut self, amp: f32);
        fn set_sr(&mut self, sr: f32);
        fn set_seed(&mut self, seed: f32);
        fn reset(&mut self);
    }
}
