use godot::prelude::*;
use jmespath;

#[derive(GodotClass, Debug)]
pub struct JMESExpr {
    expr: jmespath::Expression<'static>,
}

#[godot_api]
impl IRefCounted for JMESExpr {
    fn init(_base: Base<RefCounted>) -> Self {
        JMESExpr {
            expr: jmespath::compile("").unwrap(),
        }
    }
}
#[derive(GodotClass)]
pub struct JMESVariable {
    var: jmespath::Variable,
}
#[godot_api]
impl IRefCounted for JMESVariable {
    fn init(_base: Base<RefCounted>) -> Self {
        JMESVariable {
            var: jmespath::Variable::Null,
        }
    }
}

#[godot_api]
impl JMESExpr {
    #[func]
    fn create_from_str(str: String) -> Gd<Self> {
        let expr = jmespath::compile(&str);
        Gd::from_object(if expr.is_err() {
            godot_error!("JMESPath expr compilation error: {}", expr.unwrap_err());
            Self {
                expr: jmespath::compile("").unwrap(),
            }
        } else {
            Self {
                expr: expr.unwrap(),
            }
        })
    }
    #[func]
    fn to_str(&self) -> String {
        self.expr.as_str().to_string()
    }
    #[func]
    fn search(&self, data: Gd<JMESVariable>) -> Variant {
        match self.expr.search(&data.bind().var) {
            Ok(v) => jmespath_to_variant(&v),
            Err(err) => {
                godot_error!("JMESPath search error: {}", err);
                Variant::nil()
            }
        }
    }
}

#[godot_api]
impl JMESVariable {
    #[func]
    fn create_from_json_str(str: String) -> Gd<Self> {
        let var = jmespath::Variable::from_json(&str);
        Gd::from_object(if var.is_err() {
            godot_error!(
                "JMESPath variable deserialization error: {}",
                var.unwrap_err()
            );
            Self {
                var: jmespath::Variable::Null,
            }
        } else {
            Self { var: var.unwrap() }
        })
    }

    #[func]
    fn to_json_str(&self, pretty: bool) -> String {
        if pretty {
            serde_json::to_string_pretty(&self.var).unwrap()
        } else {
            serde_json::to_string(&self.var).unwrap()
        }
    }
}

fn jmespath_to_variant(value: &jmespath::Variable) -> Variant {
    match value {
        jmespath::Variable::String(v) => v.to_variant(),
        jmespath::Variable::Number(v) => {
            if v.is_i64() {
                v.as_i64().unwrap().to_variant()
            } else if v.is_u64() {
                v.as_u64().unwrap().to_variant()
            } else if v.is_f64() {
                v.as_f64().unwrap().to_variant()
            } else {
                Variant::nil()
            }
        }
        jmespath::Variable::Bool(v) => v.to_variant(),
        jmespath::Variable::Array(v) => {
            let mut arr = Array::new();
            v.iter().for_each(|val| arr.push(jmespath_to_variant(val)));
            arr.to_variant()
        }
        jmespath::Variable::Object(v) => {
            let mut dict = Dictionary::new();
            v.iter().for_each(|(key, val)| {
                dict.set(key.to_variant(), jmespath_to_variant(val));
            });
            dict.to_variant()
        }
        jmespath::Variable::Null => Variant::nil(),
        jmespath::Variable::Expref(e) => {
            godot_warn!(
                "JMESPath: Expref to Variant is not supported (expref: {})",
                e
            );
            Variant::nil()
        }
    }
}
