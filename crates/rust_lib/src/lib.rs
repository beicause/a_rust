use std::sync::LazyLock;

use godot::prelude::*;

pub use gd_glicol::Glicol;
pub use gd_lz4::LZ4;
pub use gd_toml::loader::{TOMLLoader, TOMLLoaderSingleton, TOMLSaver};
pub use gd_toml::TOML;

static TOML_LOADER_SINGLETON_NAME: LazyLock<StringName> =
    LazyLock::new(|| "TOMLLoaderSingleton".into());

struct MyExt;

#[gdextension]
unsafe impl ExtensionLibrary for MyExt {
    fn on_level_init(level: InitLevel) {
        if level == InitLevel::Scene {
            let toml_loader = TOMLLoaderSingleton::new_alloc();
            toml_loader.bind().register();
            godot::engine::Engine::singleton()
                .register_singleton(TOML_LOADER_SINGLETON_NAME.clone(), toml_loader.upcast());
        }
    }
    fn on_level_deinit(level: InitLevel) {
        if level == InitLevel::Scene {
            let toml_loader = godot::engine::Engine::singleton()
                .get_singleton(TOML_LOADER_SINGLETON_NAME.clone())
                .unwrap()
                .cast::<TOMLLoaderSingleton>();
            toml_loader.bind().unregister();
            toml_loader.free();
        }
    }
}
