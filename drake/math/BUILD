# -*- python -*

package(default_visibility = ["//visibility:public"])
DEPS = ["//drake/common:common"]

cc_library(
    name = "autodiff",
    srcs = ["autodiff.cc"],
    hdrs = ["autodiff.h"],
    deps = DEPS + ["//drake/common:autodiff"],
    linkstatic = 1)

# TODO(jwnimmer-tri) Improved name for this library, "pose_representations"?
cc_library(
    name = "geometric_transform",
    srcs = [
        "axis_angle.cc",
        "quaternion.cc",
        "random_rotation.cc",
        "roll_pitch_yaw.cc",
        "rotation_matrix.cc",
    ],
    hdrs = [
        "axis_angle.h",
        "quaternion.h",
        "random_rotation.h",
        "roll_pitch_yaw.h",
        "roll_pitch_yaw_not_using_quaternion.h",
        "roll_pitch_yaw_using_quaternion.h",
        "rotation_matrix.h",
    ],
    deps = DEPS,
    linkstatic = 1)

cc_library(
    name = "gradient",
    srcs = [
         "autodiff_gradient.cc",
         "cross_product.cc",
         "gradient.cc",
         "normalize_vector.cc",
         "rotation_conversion_gradient.cc",
    ],
    hdrs = [
         "autodiff_gradient.h",
         "cross_product.h",
         "gradient.h",
         "gradient_util.h",
         "normalize_vector.h",
         "rotation_conversion_gradient.h",
    ],
    deps = DEPS + [":autodiff"],
    linkstatic = 1)

# These all require bleeding-edge Eigen, so please don't fold them into any
# other important labels until we get all workspaces on newer-Eigen.
cc_library(
    name = "eigen_sparse_triplet",
    srcs = ["eigen_sparse_triplet.cc"],
    hdrs = ["eigen_sparse_triplet.h"],
    deps = DEPS,
    linkstatic = 1)

cc_library(
    name = "expmap",
    srcs = ["expmap.cc"],
    hdrs = ["expmap.h"],
    deps = DEPS + [":gradient"],
    linkstatic = 1)

cc_library(
    name = "jacobian",
    srcs = ["jacobian.cc"],
    hdrs = ["jacobian.h"],
    deps = DEPS,
    linkstatic = 1)
