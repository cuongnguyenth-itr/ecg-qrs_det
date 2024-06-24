cmake_minimum_required(VERSION 3.5)
# Define the project name and specify that it uses C++
project(ecgqrsnew LANGUAGES CXX)

# Set the C++ standard to C++11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -O3 -g")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE Release)

find_package(ZLIB REQUIRED)

# add_library(libonnxruntime SHARED IMPORTED)

# set_target_properties(libonnxruntime PROPERTIES IMPORTED_LOCATION libs/3rdparty/onnxruntime/lib/libonnxruntime.so)
include_directories(include)
include_directories(${PROJECT_NAME} PRIVATE libs/common)


add_library(cnpy STATIC libs/common/cnpy.cpp)
target_link_libraries(cnpy ${ZLIB_LIBRARIES})

add_library(loadData src/loadingData.cpp)
target_link_libraries(loadData cnpy)

# add_library(${PROJECT_NAME} SHARED libs/libqrs/src/loadingModel.cpp)
add_subdirectory(libs/libqrs)

include_directories(libs/libqrs/include)
include_directories(${PROJECT_NAME} PRIVATE libs/3rdparty/onnxruntime/include)

add_executable(${PROJECT_NAME} src/main.cpp)


target_link_libraries(${PROJECT_NAME}
        # cnpy
        ecgqrsDet
        loadData
        )

