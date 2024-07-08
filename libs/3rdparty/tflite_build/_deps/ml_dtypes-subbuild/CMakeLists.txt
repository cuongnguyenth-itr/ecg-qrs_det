# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.16.3)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(ml_dtypes-populate NONE)

include(ExternalProject)
ExternalProject_Add(ml_dtypes-populate
                     "UPDATE_DISCONNECTED" "False" "GIT_REPOSITORY" "https://github.com/jax-ml/ml_dtypes" "GIT_TAG" "24084d9ed2c3d45bf83b7a9bff833aa185bf9172" "GIT_PROGRESS" "TRUE"
                    SOURCE_DIR          "/home/huucuong/cpp/libs/3rdparty/tflite_build/ml_dtypes"
                    BINARY_DIR          "/home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/ml_dtypes-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
)
