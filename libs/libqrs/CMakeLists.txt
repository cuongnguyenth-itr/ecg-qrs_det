cmake_minimum_required(VERSION 3.10)

project(ecgqrsDet)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -O3 -g")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE Release)

get_filename_component(PARENT_DIR ../../ ABSOLUTE)
set(onnxruntime_DIR ${PARENT_DIR}/libs/3rdparty/onnxruntime)
message("-- LIBS_COMMON_DIR:  ${CMAKE_PROJECT_NAME}")
add_library(libonnxruntime SHARED IMPORTED)
set_target_properties(libonnxruntime PROPERTIES IMPORTED_LOCATION ${PARENT_DIR}/libs/3rdparty/onnxruntime/lib/libonnxruntime.so)

include_directories(${PROJECT_NAME} PUBLIC ${onnxruntime_DIR}/include)

include_directories(${PROJECT_NAME} PUBLIC ${PARENT_DIR}/libs/libqrs/include)

include_directories(${PROJECT_NAME} PUBLIC ${PARENT_DIR}/libs/common)

# add_executable(${PROJECT_NAME} src/loadingModel.cpp)
add_library(${PROJECT_NAME} SHARED src/loadingModel.cpp)

target_link_libraries(${PROJECT_NAME}
        libonnxruntime
        )


        