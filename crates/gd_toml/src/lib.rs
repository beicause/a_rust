use godot::prelude::*;
pub mod loader;

#[derive(GodotClass)]
#[class(base = Resource)]
pub struct TOML {
    value: toml::Value,
    base: Base<Resource>,
}

#[godot_api]
impl IResource for TOML {
    fn init(base: Base<Resource>) -> Self {
        TOML {
            value: toml::Value::Table(toml::map::Map::new()),
            base,
        }
    }
}

#[godot_api]
impl TOML {
    #[func]
    fn parse(&mut self, str: GString) -> godot::global::Error {
        let res = if let Ok(doc) = str.to_string().parse::<toml::Value>() {
            self.value.clone_from(&doc);
            godot::global::Error::OK
        } else {
            godot::global::Error::ERR_PARSE_ERROR
        };
        self.base.to_gd().emit_changed();
        res
    }

    #[func]
    fn parse_variant(&mut self, variant: Variant) -> godot::global::Error {
        let res = if let Some(val) = variant_to_value(&variant) {
            self.value.clone_from(&val);
            godot::global::Error::OK
        } else {
            godot::global::Error::ERR_PARSE_ERROR
        };
        self.base.to_gd().emit_changed();
        res
    }
    #[func]
    fn to_variant(&self) -> Variant {
        value_to_variant(&self.value)
    }

    #[func]
    fn to_toml_str(&self, pretty: bool) -> String {
        if pretty {
            toml::ser::to_string_pretty(&self.value).unwrap()
        } else {
            toml::ser::to_string(&self.value).unwrap()
        }
    }
}

fn value_to_variant(value: &toml::Value) -> Variant {
    match value {
        toml::Value::String(v) => v.to_variant(),
        toml::Value::Integer(v) => v.to_variant(),
        toml::Value::Float(v) => v.to_variant(),
        toml::Value::Boolean(v) => v.to_variant(),
        toml::Value::Datetime(v) => v.to_string().to_variant(),
        toml::Value::Array(v) => {
            let mut arr = Array::new();
            v.iter().for_each(|val| arr.push(value_to_variant(val)));
            arr.to_variant()
        }
        toml::Value::Table(v) => {
            let mut dict = Dictionary::new();
            v.iter().for_each(|(key, val)| {
                dict.set(key.to_variant(), value_to_variant(val));
            });
            dict.to_variant()
        }
    }
}

fn variant_to_value(variant: &Variant) -> Option<toml::Value> {
    match variant.get_type() {
        VariantType::STRING => Some(toml::Value::String(variant.to())),
        VariantType::INT => Some(toml::Value::Integer(variant.to())),
        VariantType::FLOAT => Some(toml::Value::Float(variant.to())),
        VariantType::BOOL => Some(toml::Value::Boolean(variant.to())),
        VariantType::DICTIONARY => {
            let dict: Dictionary = variant.to();
            let mut table = toml::map::Map::new();
            dict.iter_shared().for_each(|(key, val)| {
                if let Some(_v) = variant_to_value(&val) {
                    table[&key.to::<String>()] = _v
                };
            });
            Some(toml::Value::Table(table))
        }
        VariantType::ARRAY => {
            let arr: Array<Variant> = variant.to();
            let mut vec = Vec::new();
            arr.iter_shared().for_each(|val| {
                if let Some(_v) = variant_to_value(&val) {
                    vec.push(_v);
                }
            });
            Some(toml::Value::Array(vec))
        }
        VariantType::PACKED_BYTE_ARRAY => {
            let arr: PackedByteArray = variant.to();
            let mut vec = Vec::new();
            arr.as_slice()
                .iter()
                .for_each(|val| vec.push(toml::Value::Integer((*val).into())));
            Some(toml::Value::Array(vec))
        }
        VariantType::PACKED_INT32_ARRAY => {
            let arr: PackedInt32Array = variant.to();
            let mut vec = Vec::new();
            arr.as_slice()
                .iter()
                .for_each(|val| vec.push(toml::Value::Integer((*val).into())));
            Some(toml::Value::Array(vec))
        }
        VariantType::PACKED_INT64_ARRAY => {
            let arr: PackedInt64Array = variant.to();
            let mut vec = Vec::new();
            arr.as_slice()
                .iter()
                .for_each(|val| vec.push(toml::Value::Integer((*val).into())));
            Some(toml::Value::Array(vec))
        }
        VariantType::PACKED_FLOAT32_ARRAY => {
            let arr: PackedFloat32Array = variant.to();
            let mut vec = Vec::new();
            arr.as_slice()
                .iter()
                .for_each(|val| vec.push(toml::Value::Float((*val).into())));
            Some(toml::Value::Array(vec))
        }
        VariantType::PACKED_FLOAT64_ARRAY => {
            let arr: PackedFloat64Array = variant.to();
            let mut vec = Vec::new();
            arr.as_slice()
                .iter()
                .for_each(|val| vec.push(toml::Value::Float((*val).into())));
            Some(toml::Value::Array(vec))
        }
        VariantType::PACKED_STRING_ARRAY => {
            let arr: PackedStringArray = variant.to();
            let mut vec = Vec::new();
            arr.as_slice()
                .iter()
                .for_each(|val| vec.push(toml::Value::String(val.into())));
            Some(toml::Value::Array(vec))
        }
        _ => {
            godot_warn!("toml: unsupported variant type: {:?}", variant.get_type());
            None
        }
    }
}
