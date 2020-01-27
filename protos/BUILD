load("@rules_proto//proto:defs.bzl", "proto_library")

package(default_visibility = ["//visibility:public"])

proto_library(
    name = "addressbook_proto",
    srcs = ["addressbook.proto"],
)

load("@build_stack_rules_proto//cpp:cpp_proto_library.bzl", "cpp_proto_library")

cpp_proto_library(
    name = "addressbook_cpp_proto",
    deps = [":addressbook_proto"],
)

load("@build_stack_rules_proto//python:python_proto_library.bzl", "python_proto_library")

python_proto_library(
    name = "addressbook_python_proto",
    deps = [":addressbook_proto"],
)
