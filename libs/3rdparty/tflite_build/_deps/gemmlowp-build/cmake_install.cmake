# Install script for directory: /home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/contrib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gemmlowp/eight_bit_int_gemm" TYPE FILE FILES "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/eight_bit_int_gemm/eight_bit_int_gemm.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gemmlowp/meta" TYPE FILE FILES
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/base.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/legacy_multi_thread_common.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/legacy_multi_thread_gemm.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/legacy_multi_thread_gemv.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/legacy_operations_common.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/legacy_single_thread_gemm.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/multi_thread_common.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/multi_thread_gemm.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/multi_thread_transform.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/quantized_mul_kernels.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/quantized_mul_kernels_arm_32.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/quantized_mul_kernels_arm_64.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/single_thread_gemm.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/single_thread_transform.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/streams.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/streams_arm_32.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/streams_arm_64.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/transform_kernels.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/transform_kernels_arm_32.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/meta/transform_kernels_arm_64.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gemmlowp/public" TYPE FILE FILES
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/public/bit_depth.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/public/gemmlowp.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/public/map.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/public/output_stages.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gemmlowp/profiling" TYPE FILE FILES
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/profiling/instrumentation.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/profiling/profiler.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/profiling/pthread_everywhere.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gemmlowp/internal" TYPE FILE FILES
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/allocator.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/block_params.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/common.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/compute.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/detect_platform.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/dispatch_gemm_shape.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/kernel.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/kernel_avx.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/kernel_default.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/kernel_msa.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/kernel_neon.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/kernel_reference.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/kernel_sse.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/multi_thread_gemm.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/output.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/output_avx.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/output_msa.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/output_neon.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/output_sse.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/pack.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/pack_avx.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/pack_msa.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/pack_neon.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/pack_sse.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/platform.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/simd_wrappers.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/simd_wrappers_common_neon_sse.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/simd_wrappers_msa.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/simd_wrappers_neon.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/simd_wrappers_sse.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/single_thread_gemm.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/internal/unpack.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gemmlowp/fixedpoint" TYPE FILE FILES
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/fixedpoint/fixedpoint.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/fixedpoint/fixedpoint_avx.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/fixedpoint/fixedpoint_msa.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/fixedpoint/fixedpoint_neon.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/fixedpoint/fixedpoint_sse.h"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/gemmlowp/fixedpoint/fixedpoint_wasmsimd.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/gemmlowp-build/libeight_bit_int_gemm.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/gemmlowp/gemmlowp-config.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/gemmlowp/gemmlowp-config.cmake"
         "/home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/gemmlowp-build/CMakeFiles/Export/lib/cmake/gemmlowp/gemmlowp-config.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/gemmlowp/gemmlowp-config-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/gemmlowp/gemmlowp-config.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/gemmlowp" TYPE FILE FILES "/home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/gemmlowp-build/CMakeFiles/Export/lib/cmake/gemmlowp/gemmlowp-config.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/gemmlowp" TYPE FILE FILES "/home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/gemmlowp-build/CMakeFiles/Export/lib/cmake/gemmlowp/gemmlowp-config-release.cmake")
  endif()
endif()

