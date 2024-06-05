use std::io::Cursor;

use godot::engine::FileAccess;
use godot::prelude::*;

#[derive(GodotClass)]
pub struct LZ4 {}

#[godot_api]
impl IRefCounted for LZ4 {
    fn init(_base: Base<RefCounted>) -> Self {
        LZ4 {}
    }
}

#[godot_api]
impl LZ4 {
    #[func]
    fn compress_block(data: PackedByteArray) -> PackedByteArray {
        let c = lz4_flex::compress_prepend_size(data.as_slice());
        iter_to_packed_byte_array(c.iter())
    }
    #[func]
    fn decompress_block(data: PackedByteArray) -> PackedByteArray {
        match lz4_flex::decompress_size_prepended(data.as_slice()) {
            Ok(c) => iter_to_packed_byte_array(c.iter()),
            Err(e) => {
                godot::log::godot_error!("{:#?}", e);
                PackedByteArray::new()
            }
        }
    }
    #[func]
    fn compress_frame(data: PackedByteArray) -> PackedByteArray {
        let mut res = Vec::new();
        let mut writer = lz4_flex::frame::FrameEncoder::new(&mut res);
        let proc = std::io::copy(&mut Cursor::new(data.as_slice()), &mut writer);
        if let Err(e) = proc {
            godot::log::godot_error!("{:#?}", e);
            PackedByteArray::new()
        } else {
            iter_to_packed_byte_array(res.iter())
        }
    }
    #[func]
    fn decompress_frame(data: PackedByteArray) -> PackedByteArray {
        let mut res = Vec::new();
        let mut cursor = Cursor::new(data.as_slice());
        let mut reader = lz4_flex::frame::FrameDecoder::new(&mut cursor);
        let proc = std::io::copy(&mut reader, &mut res);
        if let Err(e) = proc {
            godot::log::godot_error!("{:#?}", e);
            PackedByteArray::new()
        } else {
            iter_to_packed_byte_array(res.iter())
        }
    }

    #[func]
    fn compress_file(in_file: Gd<FileAccess>, out_file: Gd<FileAccess>) {
        let in_file = GFile::try_from_unique(in_file).unwrap();
        let mut out_file = GFile::try_from_unique(out_file).unwrap();

        let mut writer = lz4_flex::frame::FrameEncoder::new(in_file);
        let proc = std::io::copy(&mut out_file, &mut writer);
        if let Err(e) = proc {
            godot::log::godot_error!("{:#?}", e);
        }
    }
    #[func]
    fn decompress_file(in_file: Gd<FileAccess>, out_file: Gd<FileAccess>) {
        let in_file = GFile::try_from_unique(in_file).unwrap();
        let mut out_file = GFile::try_from_unique(out_file).unwrap();

        let mut reader = lz4_flex::frame::FrameDecoder::new(in_file);
        let proc = std::io::copy(&mut reader, &mut out_file);
        if let Err(e) = proc {
            godot::log::godot_error!("{:#?}", e);
        }
    }
}

fn iter_to_packed_byte_array(it: std::slice::Iter<u8>) -> PackedByteArray {
    let mut res = PackedByteArray::new();
    res.resize(it.len());
    it.for_each(|i| res.push(*i));
    res
}
