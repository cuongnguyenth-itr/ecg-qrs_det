# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.16.3)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(protobuf-populate NONE)

include(ExternalProject)
ExternalProject_Add(protobuf-populate
                     "UPDATE_DISCONNECTED" "False" "GIT_REPOSITORY" "https://github.com/protocolbuffers/protobuf" "GIT_TAG" "90b73ac3f0b10320315c2ca0d03a5a9b095d2f66" "GIT_PROGRESS" "TRUE" "PREFIX" "/home/huucuong/cpp/libs/3rdparty/tflite_build"
                    SOURCE_DIR          "/home/huucuong/cpp/libs/3rdparty/tflite_build/protobuf"
                    BINARY_DIR          "/home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/protobuf-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
)
