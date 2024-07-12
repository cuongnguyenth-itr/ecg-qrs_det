cmake_minimum_required(VERSION 3.5)
project(qrs_detection_app)

add_subdirectory(libs/libqrs-tflite)

include_directories(${PROJECT_NAME} PRIVATE libs/libqrs-tflite/include)
include_directories(${PROJECT_NAME} PUBLIC include)
include_directories(${PROJECT_NAME} PUBLIC libs/libqrs-tflite/include)
include_directories(${PROJECT_NAME} PUBLIC libs/common)
include_directories(${PROJECT_NAME} PUBLIC libs/3rdparty/tflite-dist/include)

# add_executable(${PROJECT_NAME} src/tflite-main.cpp)

add_library(${CMAKE_PROJECT_NAME} SHARED
        # List C/C++ source files with relative paths to this CMakeLists.txt.
        native-lib.cpp)

target_link_libraries(${PROJECT_NAME}
        android
        ecgqrsDet
        )