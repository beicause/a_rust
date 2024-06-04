mod glicol;

pub use glicol::Glicol;
use godot::prelude::*;

struct MyExt;

#[gdextension]
unsafe impl ExtensionLibrary for MyExt {}
