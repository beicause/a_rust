use godot::prelude::*;
pub struct GodotLogger;
pub use log;

impl log::Log for GodotLogger {
    fn enabled(&self, metadata: &log::Metadata) -> bool {
        metadata.level() <= log::LevelFilter::Info
    }

    fn log(&self, record: &log::Record) {
        if self.enabled(record.metadata()) {
            if record.level() == log::Level::Error {
                godot_error!("{} - {}", record.level(), record.args());
            } else if record.level() == log::Level::Warn {
                godot_warn!("{} - {}", record.level(), record.args());
            } else {
                godot_print!("{} - {}", record.level(), record.args());
            }
        }
    }
    fn flush(&self) {}
}
