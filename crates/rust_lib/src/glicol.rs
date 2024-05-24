use glicol::Engine;
use std::collections::VecDeque;
use std::ffi::c_char;

pub struct Glicol {
    pub engine: Engine<128>,
    pub buffer: VecDeque<f32>,
}

pub fn glicol_new() -> Box<Glicol> {
    Box::new(Glicol {
        engine: Engine::new(),
        buffer: VecDeque::with_capacity(128),
    })
}
impl Glicol {
    pub fn process(&mut self, out_ptr: *mut f32, size: usize) {
        while self.buffer.len() <= size {
            let (engine_out, _) = self.engine.next_block(vec![]);
            for o in engine_out[0].iter() {
                self.buffer.push_back(*o);
            }
        }
        for i in 0..size {
            unsafe {
                *out_ptr.offset(i as isize) = self.buffer.pop_front().unwrap();
            }
        }
    }

    pub fn add_sample(
        &mut self,
        name_str: *const c_char,
        arr_ptr: *const f32,
        length: usize,
        channels: usize,
        sr: usize,
    ) {
        let name = unsafe { std::ffi::CStr::from_ptr(name_str).to_str().unwrap() };
        let sample: &[f32] = unsafe { std::slice::from_raw_parts(arr_ptr, length) };
        self.engine.add_sample(name, sample, channels, sr);
    }

    pub fn update(&mut self, str_ptr: *const c_char) {
        let code = unsafe { std::ffi::CStr::from_ptr(str_ptr).to_str().unwrap() };
        self.engine.update_with_code(code);
    }

    pub fn send_msg(&mut self, str_ptr: *const c_char) {
        let msg = unsafe { std::ffi::CStr::from_ptr(str_ptr).to_str().unwrap() };
        self.engine.send_msg(msg);
    }

    pub fn live_coding_mode(&mut self, io: bool) {
        self.engine.livecoding = io;
    }

    pub fn set_bpm(&mut self, bpm: f32) {
        self.engine.set_bpm(bpm);
    }

    pub fn set_track_amp(&mut self, amp: f32) {
        self.engine.set_track_amp(amp);
    }

    pub fn set_sr(&mut self, sr: f32) {
        self.engine.set_sr(sr as usize);
    }

    pub fn set_seed(&mut self, seed: f32) {
        self.engine.set_seed(seed as usize);
    }

    pub fn reset(&mut self) {
        self.engine.reset();
    }
}
