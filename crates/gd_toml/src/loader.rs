use godot::{
    engine::{file_access::ModeFlags, IResourceFormatLoader, IResourceFormatSaver},
    prelude::*,
};

use crate::TOML;

#[derive(GodotClass)]
#[class(init, base = ResourceFormatLoader)]
pub struct TOMLLoader;

#[godot_api]
impl IResourceFormatLoader for TOMLLoader {
    fn get_recognized_extensions(&self) -> PackedStringArray {
        let mut res = PackedStringArray::new();
        res.push("toml".into());
        res
    }
    fn handles_type(&self, type_: StringName) -> bool {
        type_ == "TOML".into()
    }
    fn get_resource_type(&self, path: GString) -> GString {
        if std::path::Path::new(&path.to_string())
            .extension()
            .unwrap_or(std::ffi::OsStr::new(""))
            == "toml"
        {
            "TOML"
        } else {
            ""
        }
        .into()
    }
    fn load(
        &self,
        path: GString,
        _original_path: GString,
        _use_sub_threads: bool,
        _cache_mode: i32,
    ) -> Variant {
        let mut toml = TOML::new_gd();
        toml.bind_mut()
            .parse(godot::classes::FileAccess::get_file_as_string(path));
        toml.to_variant()
    }
}

#[derive(GodotClass)]
#[class(init, base = ResourceFormatSaver)]
pub struct TOMLSaver;

#[godot_api]
impl IResourceFormatSaver for TOMLSaver {
    fn get_recognized_extensions(&self, resource: Gd<Resource>) -> PackedStringArray {
        let mut res = PackedStringArray::new();
        if resource.is_class("TOML".into()) {
            res.push("toml".into());
        }
        res
    }
    fn recognize(&self, resource: Gd<Resource>) -> bool {
        resource.is_class("TOML".into())
    }
    fn save(&mut self, resource: Gd<Resource>, path: GString, _flags: u32) -> godot::global::Error {
        let toml = resource.try_cast::<TOML>();
        if toml.is_err() {
            return godot::global::Error::ERR_INVALID_PARAMETER;
        }
        let f = GFile::open(path, ModeFlags::WRITE);
        if f.is_err() {
            godot_error!("failed to open file");
            return godot::global::Error::ERR_FILE_CANT_OPEN;
        }
        let res = f
            .unwrap()
            .write_gstring(toml.unwrap().bind().to_toml_str(true));
        if res.is_err() {
            godot_error!("failed to write");
            return godot::global::Error::ERR_FILE_CANT_WRITE;
        }
        godot::global::Error::OK
    }
}

#[derive(GodotClass)]
#[class(init, base=Object)]
pub struct TOMLLoaderSingleton {
    pub loader: Gd<TOMLLoader>,
    pub saver: Gd<TOMLSaver>,
}

impl TOMLLoaderSingleton {
    pub fn register(&self) {
        godot::engine::ResourceLoader::singleton()
            .add_resource_format_loader(self.loader.clone().upcast());
        godot::engine::ResourceSaver::singleton()
            .add_resource_format_saver(self.saver.clone().upcast());
    }
    pub fn unregister(&self) {
        godot::engine::ResourceLoader::singleton()
            .remove_resource_format_loader(self.loader.clone().upcast());
        godot::engine::ResourceSaver::singleton()
            .remove_resource_format_saver(self.saver.clone().upcast());
    }
}
