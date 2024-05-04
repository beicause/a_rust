use glicol::Engine;
use std::collections::VecDeque;
use std::ffi::{c_void,c_char};
use std::sync::Mutex;


fn get_engine(glicol: *mut Glicol) -> &'static Mutex<Engine<128>> {
    unsafe {
        ((*glicol).engine as *mut Mutex<Engine<128>>)
            .as_ref()
            .unwrap()
    }
}

fn get_buffer(glicol: *mut Glicol) -> &'static Mutex<VecDeque<f32>> {
    unsafe {
        ((*glicol).buffer as *mut Mutex<VecDeque<f32>>)
            .as_ref()
            .unwrap()
    }
}

#[repr(C)]
pub struct Glicol {
    pub engine: *mut c_void,
    pub buffer: *mut c_void,
}

#[no_mangle]
pub unsafe extern "C" fn glicol_alloc(out_glicol: *mut Glicol) {
    let engine = Box::leak(Box::new(Mutex::new(Engine::<128>::new()))) as *mut _ as *mut c_void;
    let buffer = Box::leak(Box::new(Mutex::new(VecDeque::<f32>::with_capacity(1024)))) as *mut _
        as *mut c_void;
    *out_glicol = Glicol { engine, buffer };
}

#[no_mangle]
pub unsafe extern "C" fn glicol_dealloc(glicol: *mut Glicol) {
    let _ = Box::from_raw((*glicol).engine as *mut Mutex<Engine<128>>);
    let _ = Box::from_raw((*glicol).buffer as *mut Mutex<VecDeque<f32>>);
}

#[no_mangle]
pub extern "C" fn process(glicol: *mut Glicol, out_ptr: *mut f32, size: usize) {
    let mut engine = get_engine(glicol).lock().unwrap();
    let mut buffer = get_buffer(glicol).lock().unwrap();
    while buffer.len() <= size {
        let (engine_out, _) = engine.next_block(vec![]);
        for o in engine_out[0].iter() {
            buffer.push_back(*o);
        }
    }
    for i in 0..size {
        unsafe {
            *out_ptr.offset(i as isize) = buffer.pop_front().unwrap();
        }
    }
}

#[no_mangle]
pub extern "C" fn add_sample(
    glicol: *mut Glicol,
    name_str: *const c_char,
    arr_ptr: *const f32,
    length: usize,
    channels: usize,
    sr: usize,
) {
    let mut engine = get_engine(glicol).lock().unwrap();
    let name = unsafe { std::ffi::CStr::from_ptr(name_str).to_str().unwrap() };
    let sample: &[f32] = unsafe { std::slice::from_raw_parts(arr_ptr, length) };
    engine.add_sample(name, sample, channels, sr);
    // engine.update(code);
}

#[no_mangle]
pub extern "C" fn update(glicol: *mut Glicol, str_ptr: *const c_char) {
    //, result_ptr: *mut u8

    let mut engine = get_engine(glicol).lock().unwrap();
    let code = unsafe { std::ffi::CStr::from_ptr(str_ptr).to_str().unwrap() };
    // let result:&mut [u8] = unsafe { from_raw_parts_mut(result_ptr, 256) };
    // assert_eq!(code, "o: sin 110");
    engine.update_with_code(code);
}

#[no_mangle]
pub extern "C" fn send_msg(glicol: *mut Glicol, str_ptr: *const c_char) {
    //, result_ptr: *mut u8
    let mut engine = get_engine(glicol).lock().unwrap();
    let msg = unsafe { std::ffi::CStr::from_ptr(str_ptr).to_str().unwrap() };
    engine.send_msg(msg);
}

#[no_mangle]
pub extern "C" fn live_coding_mode(glicol: *mut Glicol, io: bool) {
    let mut engine = get_engine(glicol).lock().unwrap();
    engine.livecoding = io;
}

#[no_mangle]
pub extern "C" fn set_bpm(glicol: *mut Glicol, bpm: f32) {
    let mut engine = get_engine(glicol).lock().unwrap();
    engine.set_bpm(bpm);
    // engine.reset();
}

#[no_mangle]
pub extern "C" fn set_track_amp(glicol: *mut Glicol, amp: f32) {
    let mut engine = get_engine(glicol).lock().unwrap();
    engine.set_track_amp(amp);
}

#[no_mangle]
pub extern "C" fn set_sr(glicol: *mut Glicol, sr: f32) {
    let mut engine = get_engine(glicol).lock().unwrap();
    engine.set_sr(sr as usize);
}

#[no_mangle]
pub extern "C" fn set_seed(glicol: *mut Glicol, seed: f32) {
    let mut engine = get_engine(glicol).lock().unwrap();
    engine.set_seed(seed as usize);
}

#[no_mangle]
pub extern "C" fn reset(glicol: *mut Glicol) {
    let mut engine = get_engine(glicol).lock().unwrap();
    engine.reset();
}
