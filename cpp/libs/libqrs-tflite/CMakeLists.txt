cmake_minimum_required(VERSION 3.10)

project(ecgqrsDet)

set(CMAKE_CXX_STANDARD 14)

get_filename_component(PARENT_DIR ../../ ABSOLUTE)
set(tflite_DIR ${PARENT_DIR}/libs/3rdparty/tflite-dist)
message("-- LIBS_COMMON_DIR:  ${CMAKE_PROJECT_NAME}")
add_library(libtflite SHARED IMPORTED)
set_target_properties(libtflite PROPERTIES IMPORTED_LOCATION ${PARENT_DIR}/libs/3rdparty/tflite-dist/libs/arm64-v8a/libtensorflowlite.so)
#/media/huucuong/Windows-SSD/QRS_Detection_APP/app/src/main/cpp/libs/3rdparty/tflite/jni/arm64-v8a/libtensorflowlite_jni.so
#set_target_properties(libtflite PROPERTIES IMPORTED_LOCATION ${PARENT_DIR}/libs/3rdparty/tflite-dist/libs/linux_x64/libtensorflowlite.so)

find_package(ZLIB REQUIRED)

add_library(cnpy SHARED ${PARENT_DIR}/libs/common/cnpy.cpp)
target_link_libraries(cnpy ${ZLIB_LIBRARIES})

add_library(loadData SHARED ${PARENT_DIR}/src/loadingData.cpp)
target_link_libraries(loadData cnpy)

include_directories(${PROJECT_NAME} PUBLIC ${tflite_DIR}/include)

include_directories(${PROJECT_NAME} PUBLIC ${PARENT_DIR}/libs/libqrs-tflite/include)

include_directories(${PROJECT_NAME} PUBLIC ${PARENT_DIR}/libs/common)

include_directories(${PROJECT_NAME} PUBLIC ${PARENT_DIR}/include)

# add_executable(${PROJECT_NAME} src/loadingModelTFLITE.cpp)
add_library(${PROJECT_NAME} SHARED src/loadingModelTFLITE.cpp)

target_link_libraries(${PROJECT_NAME}
        libtflite
        loadData
        )


        