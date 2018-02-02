package(default_visibility = ["//visibility:public"])

cc_binary(
  name = "demo",
  srcs = ["demo.cc"],
  deps = [
    "//sling/base",
    "//sling/base:clock",
    "//sling/file:posix",
    "//sling/frame:object",
    "//sling/frame:serialization",
	"//sling/myelin:builder",
	"//sling/myelin:compute",
	"//sling/myelin:flow",
	"//sling/myelin:graph",
	"//sling/myelin:multi-process",
    "//sling/nlp/document",
    "//sling/nlp/document:document-source",
    "//sling/nlp/document:document-tokenizer",
    "//sling/nlp/parser",
    "//sling/nlp/parser/trainer:frame-evaluation",
    "//sling/string:printf",
  ],
)

