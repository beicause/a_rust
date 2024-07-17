def can_build(env,platform):
    env.module_add_dependencies("a_rust", ["a_lz4"])
    return True

def configure(env):
    pass

def get_doc_classes():
    return [
        "Glicol",
        "JMESExpr",
        "JMESVariable",
        "JSONConverter",
    ]

def get_doc_path():
    return "doc_classes"
