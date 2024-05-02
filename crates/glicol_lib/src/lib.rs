use glicol::Engine;
use std::{collections::VecDeque, ffi::CStr};


#[repr(C)]
pub struct GlicolEngine {
    engine: Engine<1024>,
    buffer: VecDeque<f32>,
}

#[no_mangle]
pub extern "C" fn process(glicol: &mut GlicolEngine, out_ptr: *mut f32, size: usize) {
    while glicol.buffer.len() <= size {
        let (engine_out, _) = glicol.engine.next_block(vec![]);
        glicol.buffer.extend(engine_out[0].iter());
    }
    let out_buf: &mut [f32] = unsafe { std::slice::from_raw_parts_mut(out_ptr, size) };
    glicol
        .buffer
        .drain(..size)
        .enumerate()
        .for_each(|(i, f)| out_buf[i] = f);
}

/// # Safety
///
/// - name_ptr must be aligned and non-null
/// - arr_ptr must aligned and non-null
#[no_mangle]
pub extern "C" fn add_sample(
    glicol: &mut GlicolEngine,
    name_str: &i8,
    smpl_ptr: *const f32,
    length: usize,
    channels: usize,
    sr: usize,
) {
    let engine = &mut glicol.engine;
    let name = unsafe { CStr::from_ptr(name_str).to_str().unwrap() };
    let sample: &[f32] = unsafe { std::slice::from_raw_parts(smpl_ptr, length) };
    engine.add_sample(name, sample, channels, sr);
    // engine.update(code);
}

/// # Safety
///
/// - str_ptr must be aligned and non-null
#[no_mangle]
pub extern "C" fn update(glicol: &mut GlicolEngine, str: *const i8) {
    //, result_ptr: *mut u8
    let engine = &mut glicol.engine;
    let code = unsafe { CStr::from_ptr(str).to_str().unwrap() };
    // let result:&mut [u8] = unsafe { from_raw_parts_mut(result_ptr, 256) };
    // assert_eq!(code, "o: sin 110");
    engine.update_with_code(code);
}

/// # Safety
///
/// - str_ptr must be aligned and non-null
#[no_mangle]
pub extern "C" fn send_msg(glicol: &mut GlicolEngine, str_ptr: *const i8) {
    //, result_ptr: *mut u8
    let engine = &mut glicol.engine;
    let msg = unsafe { std::ffi::CStr::from_ptr(str_ptr).to_str().unwrap() };
    engine.send_msg(msg);
}

#[no_mangle]
pub extern "C" fn live_coding_mode(glicol: &mut GlicolEngine, io: bool) {
    let engine = &mut glicol.engine;
    engine.livecoding = io;
}

#[no_mangle]
pub extern "C" fn set_bpm(glicol: &mut GlicolEngine, bpm: f32) {
    let engine = &mut glicol.engine;
    engine.set_bpm(bpm);
    // engine.reset();
}

#[no_mangle]
pub extern "C" fn set_track_amp(glicol: &mut GlicolEngine, amp: f32) {
    let engine = &mut glicol.engine;
    engine.set_track_amp(amp);
}

#[no_mangle]
pub extern "C" fn set_sr(glicol: &mut GlicolEngine, sr: f32) {
    let engine = &mut glicol.engine;
    engine.set_sr(sr as usize);
}

#[no_mangle]
pub extern "C" fn set_seed(glicol: &mut GlicolEngine, seed: f32) {
    let engine = &mut glicol.engine;
    engine.set_seed(seed as usize);
}

#[no_mangle]
pub extern "C" fn reset(glicol: &mut GlicolEngine) {
    let engine = &mut glicol.engine;
    engine.reset();
}
