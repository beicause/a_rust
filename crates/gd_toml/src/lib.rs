use toml;

pub fn toml_to_json(toml: &str, pretty: bool) -> String {
    let toml_value: Result<toml::Value, toml::de::Error> = toml.parse();
    if toml_value.is_err() {
        println!("TOML deserialization error: {}", toml_value.unwrap_err());
        return String::new();
    }
    if pretty {
        serde_json::to_string_pretty(&toml_value.unwrap()).unwrap()
    } else {
        serde_json::to_string(&toml_value.unwrap()).unwrap()
    }
}

pub fn json_to_toml(json: &str, pretty: bool) -> String {
    let value: serde_json::Result<serde_json::Value> = serde_json::from_str(json);
    if value.is_err() {
        println!("JSON deserialization error: {}", value.unwrap_err());
        return String::new();
    }
    if pretty {
        toml::to_string_pretty(&value.unwrap()).unwrap()
    } else {
        toml::to_string(&value.unwrap()).unwrap()
    }
}

#[cxx::bridge(namespace = "toml")]
pub mod ffi {
    extern "Rust" {
        fn toml_to_json(toml: &str, pretty: bool) -> String;
        fn json_to_toml(json: &str, pretty: bool) -> String;
    }
}
