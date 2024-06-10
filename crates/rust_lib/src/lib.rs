pub use gd_glicol::Glicol;
pub use gd_lz4::LZ4;

use godot::prelude::*;

struct MyExt;

#[gdextension]
unsafe impl ExtensionLibrary for MyExt {}
