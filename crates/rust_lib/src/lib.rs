pub use gd_glicol::Glicol;
pub use gd_lz4::LZ4;
pub use gd_qjs::QuickJSContext;

use godot::prelude::*;
use logger::{log, GodotLogger};

static LOGGER: GodotLogger = GodotLogger;

struct MyExt;

#[gdextension]
unsafe impl ExtensionLibrary for MyExt {
    fn on_level_init(level: InitLevel) {
        if level != InitLevel::Scene {
            return;
        }
        log::set_logger(&LOGGER)
            .map(|()| log::set_max_level(log::LevelFilter::Info))
            .unwrap();
    }
    fn on_level_deinit(level: InitLevel) {
        if level != InitLevel::Scene {
            return;
        }
    }
}
