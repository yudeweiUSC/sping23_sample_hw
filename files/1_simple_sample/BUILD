cc_library(
    name = "SimpleSampleLib",
    srcs = ["q.cc"],
    hdrs = ["q.h"],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "SimpleSampleTest",
    srcs = ["test.cc"],
    deps = [
        ":SimpleSampleLib",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_binary(
    name = "SimpleSampleMain",
    srcs = ["main.cc"],
    deps = [
        ":SimpleSampleLib",
    ],
)
