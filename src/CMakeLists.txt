cmake_minimum_required(VERSION 3.16)
project(ecgqrsnew)

set(CMAKE_CXX_STANDARD 14)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

find_package(ZLIB REQUIRED)

include_directories(/media/huucuong/Windows-SSD/cpp/include)
include_directories(${PROJECT_NAME} PRIVATE /media/huucuong/Windows-SSD/cpp/libs/common)


add_library(cnpy SHARED /media/huucuong/Windows-SSD/cpp/libs/common/cnpy.cpp)
target_link_libraries(cnpy ${ZLIB_LIBRARIES})

add_library(loadData SHARED loadingData.cpp)
target_link_libraries(loadData cnpy)

# /media/huucuong/Windows-SSD/cpp/libs/3rdparty/tflite-dist/include
include_directories(/media/huucuong/Windows-SSD/cpp/libs/3rdparty/tflite-dist/include)

add_executable(${PROJECT_NAME} tflite-main.cpp)

ADD_LIBRARY(tensorflowlite SHARED IMPORTED)
set_property(TARGET tensorflowlite PROPERTY IMPORTED_LOCATION /media/huucuong/Windows-SSD/cpp/libs/3rdparty/tflite-dist/libs/linux_x64/libtensorflowlite.so)
target_link_libraries(ecgqrsnew 
                        tensorflowlite 
                        ${OpenCV_LIBS}
                        loadData
                        )

