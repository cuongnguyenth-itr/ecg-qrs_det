# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.16.3)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(cpuinfo-populate NONE)

include(ExternalProject)
ExternalProject_Add(cpuinfo-populate
                     "UPDATE_DISCONNECTED" "False" "GIT_REPOSITORY" "https://github.com/pytorch/cpuinfo" "GIT_TAG" "ef634603954d88d2643d5809011288b890ac126e" "GIT_PROGRESS" "TRUE"
                    SOURCE_DIR          "/home/huucuong/cpp/libs/3rdparty/tflite_build/cpuinfo"
                    BINARY_DIR          "/home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/cpuinfo-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
)
