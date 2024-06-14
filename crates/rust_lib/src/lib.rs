pub use gd_glicol::Glicol;
pub use gd_lz4::LZ4;
pub use gd_qjs::QuickJSContext;

use godot::prelude::*;

struct MyExt;

#[gdextension]
unsafe impl ExtensionLibrary for MyExt {}
