use godot::prelude::*;
use quick_js::Context;

#[derive(GodotClass)]
pub struct QuickJSContext {
    ctx: *const Context,
}

#[godot_api]
impl IRefCounted for QuickJSContext {
    fn init(_base: Base<RefCounted>) -> Self {
        let ctx = Context::builder()
            .console(quick_js::console::LogConsole)
            .build()
            .unwrap();
        let res = Self { ctx: &ctx };
        std::mem::forget(ctx);
        res
    }
}
#[godot_api]
impl QuickJSContext {
    #[func]
    fn eval(&self, code: String) -> Variant {
        let ctx = unsafe { self.ctx.read() };
        let res = match ctx.eval(&code) {
            Ok(res) => js_value_to_variant(&res),
            Err(e) => {
                godot_error!("{}", format!("{:#?}", e));
                Variant::nil()
            }
        };
        std::mem::forget(ctx);
        res
    }

    #[func]
    fn reset(&mut self) {
        let ctx = unsafe { self.ctx.read() };
        let new_ctx = ctx.reset().unwrap();
        self.ctx = &new_ctx;
        std::mem::forget(new_ctx);
    }

    pub fn set_global(&self, name: &str, value: Variant) -> bool {
        let ctx = unsafe { self.ctx.read() };
        let res = ctx.set_global(name, variant_to_js_value(&value));
        std::mem::forget(ctx);
        if res.is_err() {
            godot_warn!("{}", format!("{:#?}", res));
        }
        res.is_ok()
    }

    pub fn call_function(&self, name: &str, args: Array<Variant>) -> Variant {
        let ctx = unsafe { self.ctx.read() };
        let res = match ctx.call_function(name, args.iter_shared().map(|v| variant_to_js_value(&v)))
        {
            Ok(res) => js_value_to_variant(&res),
            Err(e) => {
                godot_error!("{}", format!("{:#?}", e));
                Variant::nil()
            }
        };
        std::mem::forget(ctx);
        res
    }

    pub fn add_callback(&self, name: &str, callback: Callable) -> bool {
        let ctx = unsafe { self.ctx.read() };
        let res = ctx.add_callback(name, move || {
            let ret = callback.callv(Array::new());
            variant_to_js_value(&ret)
        });
        std::mem::forget(ctx);
        if res.is_err() {
            godot_warn!("{}", format!("{:#?}", res));
        }
        res.is_ok()
    }
}

impl Drop for QuickJSContext {
    fn drop(&mut self) {
        unsafe { self.ctx.read() };
    }
}
fn js_value_to_variant(v: &quick_js::JsValue) -> Variant {
    match v {
        quick_js::JsValue::Undefined => Variant::nil(),
        quick_js::JsValue::Null => Variant::nil(),
        quick_js::JsValue::Bool(v) => v.to_variant(),
        quick_js::JsValue::Int(v) => v.to_variant(),
        quick_js::JsValue::Float(v) => v.to_variant(),
        quick_js::JsValue::String(v) => v.to_variant(),
        quick_js::JsValue::Array(v) => {
            let mut res = Array::new();
            for i in 0..v.len() {
                let v = v.get(i).unwrap();
                res.push(js_value_to_variant(v));
            }
            res.to_variant()
        }
        quick_js::JsValue::Object(v) => {
            let mut res = Dictionary::new();
            for (k, v) in v.iter() {
                res.set(k.to_variant(), js_value_to_variant(v));
            }
            res.to_variant()
        }
        quick_js::JsValue::Date(v) => v.timestamp_millis().to_variant(),
        _ => Variant::nil(),
    }
}

fn variant_to_js_value(v: &Variant) -> quick_js::JsValue {
    match v.get_type() {
        VariantType::INT => quick_js::JsValue::Int(v.to()),
        VariantType::BOOL => quick_js::JsValue::Bool(v.to()),
        VariantType::FLOAT => quick_js::JsValue::Float(v.to()),
        VariantType::STRING => quick_js::JsValue::String(v.to()),
        VariantType::PACKED_BYTE_ARRAY => {
            let mut res = Vec::new();
            let v: PackedByteArray = v.to();
            for i in 0..v.len() {
                res.push(quick_js::JsValue::Int(v.get(i).unwrap().into()));
            }
            quick_js::JsValue::Array(res)
        }
        VariantType::ARRAY => {
            let mut res = Vec::new();
            let v: Array<Variant> = v.to();
            for i in 0..v.len() {
                res.push(variant_to_js_value(&v.get(i).unwrap()));
            }
            quick_js::JsValue::Array(res)
        }
        VariantType::PACKED_INT32_ARRAY => {
            let mut res = Vec::new();
            let v: PackedInt32Array = v.to();
            for i in 0..v.len() {
                res.push(quick_js::JsValue::Int(v.get(i).unwrap().into()));
            }
            quick_js::JsValue::Array(res)
        }
        VariantType::PACKED_INT64_ARRAY => {
            let mut res = Vec::new();
            let v: PackedInt64Array = v.to();
            for i in 0..v.len() {
                res.push(quick_js::JsValue::Int(v.get(i).unwrap() as i32));
            }
            quick_js::JsValue::Array(res)
        }
        VariantType::PACKED_FLOAT32_ARRAY => {
            let mut res = Vec::new();
            let v: PackedFloat32Array = v.to();
            for i in 0..v.len() {
                res.push(quick_js::JsValue::Float(v.get(i).unwrap().into()));
            }
            quick_js::JsValue::Array(res)
        }
        VariantType::PACKED_FLOAT64_ARRAY => {
            let mut res = Vec::new();
            let v: PackedFloat64Array = v.to();
            for i in 0..v.len() {
                res.push(quick_js::JsValue::Float(v.get(i).unwrap()));
            }
            quick_js::JsValue::Array(res)
        }
        VariantType::PACKED_STRING_ARRAY => {
            let mut res = Vec::new();
            let v: PackedStringArray = v.to();
            for i in 0..v.len() {
                res.push(quick_js::JsValue::String(v.get(i).unwrap().into()));
            }
            quick_js::JsValue::Array(res)
        }
        VariantType::DICTIONARY => {
            let mut res = std::collections::HashMap::new();
            let v: Dictionary = v.to();
            for (k, v) in v.iter_shared() {
                res.insert(k.to(), variant_to_js_value(&v));
            }
            quick_js::JsValue::Object(res)
        }
        VariantType::NIL => quick_js::JsValue::Null,
        _ => quick_js::JsValue::Undefined,
    }
}
