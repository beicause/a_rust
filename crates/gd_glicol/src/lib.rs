use glicol::Engine;
use godot::prelude::*;
use std::collections::VecDeque;

#[derive(GodotClass)]
pub struct Glicol {
    engine: Engine<128>,
    buffer: VecDeque<f32>,
    samples: Vec<Vec<f32>>,
}

#[godot_api]
impl IRefCounted for Glicol {
    fn init(_base: Base<RefCounted>) -> Self {
        Glicol {
            engine: Engine::new(),
            buffer: VecDeque::with_capacity(128),
            samples: Vec::new(),
        }
    }
}

#[godot_api]
impl Glicol {
    
    #[func]
    pub fn process(&mut self, size: u64) -> PackedFloat32Array {
        let size = size as usize;
        let mut res = PackedFloat32Array::new();
        res.resize(size);
        while self.buffer.len() <= size {
            let (engine_out, _) = self.engine.next_block(vec![]);
            for o in engine_out[0].iter() {
                self.buffer.push_back(*o);
            }
        }
        for i in 0..size {
            res[i] = self.buffer.pop_front().unwrap();
        }
        res
    }

    #[func]
    pub fn add_sample(&mut self, name: String, arr: PackedFloat32Array, channels: u64, sr: u64) {
        self.samples.push(arr.to_vec());
        let sample = self.samples.last().unwrap();
        self.engine.add_sample(
            &name,
            unsafe { std::slice::from_raw_parts(sample.as_ptr(), sample.len()) },
            channels as usize,
            sr as usize,
        );
    }

    #[func]
    pub fn update_code(&mut self, str: String) {
        self.engine.update_with_code(&str);
    }

    #[func]
    pub fn send_msg(&mut self, str: String) {
        self.engine.send_msg(&str);
    }

    #[func]
    pub fn live_coding_mode(&mut self, io: bool) {
        self.engine.livecoding = io;
    }

    #[func]
    pub fn set_bpm(&mut self, bpm: f32) {
        self.engine.set_bpm(bpm);
    }

    #[func]
    pub fn set_track_amp(&mut self, amp: f32) {
        self.engine.set_track_amp(amp);
    }

    #[func]
    pub fn set_sample_rate(&mut self, sr: f32) {
        self.engine.set_sr(sr as usize);
    }

    #[func]
    pub fn set_seed(&mut self, seed: u64) {
        self.engine.set_seed(seed as usize);
    }

    #[func]
    pub fn reset(&mut self) {
        self.engine.reset();
    }
}
