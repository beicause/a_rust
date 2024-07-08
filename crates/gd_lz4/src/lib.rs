use std::io::Cursor;

pub fn compress_block(data: *const u8, len: usize) -> Vec<u8> {
    lz4_flex::compress_prepend_size(unsafe { std::slice::from_raw_parts(data, len) })
}

pub fn decompress_block(data: *const u8, len: usize) -> Vec<u8> {
    match lz4_flex::decompress_size_prepended(unsafe { std::slice::from_raw_parts(data, len) }) {
        Ok(c) => c,
        Err(e) => {
            println!("{:#?}", e);
            Vec::new()
        }
    }
}

pub fn compress_frame(data: *const u8, len: usize) -> Vec<u8> {
    let mut res = Vec::new();
    let mut writer = lz4_flex::frame::FrameEncoder::new(&mut res);
    let proc = std::io::copy(
        &mut Cursor::new(unsafe { std::slice::from_raw_parts(data, len) }),
        &mut writer,
    );
    if let Err(e) = proc {
        println!("{:#?}", e);
        Vec::new()
    } else {
        res
    }
}

pub fn decompress_frame(data: *const u8, len: usize) -> Vec<u8> {
    let mut res = Vec::new();
    let mut cursor = Cursor::new(unsafe { std::slice::from_raw_parts(data, len) });
    let mut reader = lz4_flex::frame::FrameDecoder::new(&mut cursor);
    let proc = std::io::copy(&mut reader, &mut res);
    if let Err(e) = proc {
        println!("{:#?}", e);
        Vec::new()
    } else {
        res
    }
}

#[cxx::bridge(namespace = "lz4")]
pub mod ffi {
    extern "Rust" {
        unsafe fn compress_block(data: *const u8, len: usize) -> Vec<u8>;
        unsafe fn decompress_block(data: *const u8, len: usize) -> Vec<u8>;
        unsafe fn compress_frame(data: *const u8, len: usize) -> Vec<u8>;
        unsafe fn decompress_frame(data: *const u8, len: usize) -> Vec<u8>;

    }
}
