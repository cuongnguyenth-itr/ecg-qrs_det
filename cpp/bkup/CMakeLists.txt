cmake_minimum_required(VERSION 3.5)
# Define the project name and specify that it uses C++
project(qrs_detection_app)

find_package(ZLIB REQUIRED)

# add_library(libonnxruntime SHARED IMPORTED)

# set_target_properties(libonnxruntime PROPERTIES IMPORTED_LOCATION libs/3rdparty/onnxruntime/lib/libonnxruntime.so)
include_directories(include)
include_directories(libs/common)


add_library(cnpy SHARED libs/common/cnpy.cpp)
target_link_libraries(cnpy ${ZLIB_LIBRARIES})

add_library(loadData SHARED src/loadingData.cpp)
target_link_libraries(loadData cnpy)

# add_library(${PROJECT_NAME} SHARED libs/libqrs/src/loadingModel.cpp)
add_subdirectory(libs/libqrs)

include_directories(libs/libqrs/include)
include_directories(${PROJECT_NAME} PRIVATE libs/3rdparty/onnxruntime-android-1.18.0/headers)
#include_directories(${ANDROID_NDK}/sysroot/usr/include ${ANDROID_NDK}/sysroot/usr/include/${ANDROID_PLATFORM})

#add_executable(${PROJECT_NAME} src/main.cpp)
add_library(${CMAKE_PROJECT_NAME} SHARED
        # List C/C++ source files with relative paths to this CMakeLists.txt.
        native-lib.cpp)

target_link_libraries(${CMAKE_PROJECT_NAME}
        cnpy
        ecgqrsDet
        loadData
        )
