# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.16.3)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(gemmlowp-populate NONE)

include(ExternalProject)
ExternalProject_Add(gemmlowp-populate
                     "UPDATE_DISCONNECTED" "False" "GIT_REPOSITORY" "https://github.com/google/gemmlowp" "GIT_TAG" "16e8662c34917be0065110bfcd9cc27d30f52fdf" "GIT_PROGRESS" "TRUE"
                    SOURCE_DIR          "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp"
                    BINARY_DIR          "/home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/gemmlowp-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
)
