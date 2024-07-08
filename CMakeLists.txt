cmake_minimum_required(VERSION 3.5)
project(ecgqrsnew)

find_package(ZLIB REQUIRED)

include_directories(include)
include_directories(${PROJECT_NAME} PRIVATE libs/common)


add_library(cnpy SHARED libs/common/cnpy.cpp)
target_link_libraries(cnpy ${ZLIB_LIBRARIES})

add_library(loadData SHARED src/loadingData.cpp)
target_link_libraries(loadData cnpy)

add_subdirectory(libs/libqrs)

include_directories(libs/libqrs/include)
include_directories(${PROJECT_NAME} PRIVATE libs/3rdparty/onnxruntime/include)

# include_directories(${PROJECT_NAME} PRIVATE assets/data)

add_executable(${PROJECT_NAME} src/main.cpp)
# add_library(${PROJECT_NAME} STATIC src/main.cpp)

# set(DATA_DIR ${CMAKE_CURRENT_SOURCE_DIR}/assets/data)
# file(COPY ${DATA_DIR} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})


target_link_libraries(${PROJECT_NAME}
        ecgqrsDet
        loadData
        )

