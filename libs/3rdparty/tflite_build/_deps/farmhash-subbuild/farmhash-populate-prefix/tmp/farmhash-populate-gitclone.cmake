
if(NOT "/home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/farmhash-subbuild/farmhash-populate-prefix/src/farmhash-populate-stamp/farmhash-populate-gitinfo.txt" IS_NEWER_THAN "/home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/farmhash-subbuild/farmhash-populate-prefix/src/farmhash-populate-stamp/farmhash-populate-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/farmhash-subbuild/farmhash-populate-prefix/src/farmhash-populate-stamp/farmhash-populate-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E remove_directory "/home/huucuong/cpp/libs/3rdparty/tflite_build/farmhash"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/home/huucuong/cpp/libs/3rdparty/tflite_build/farmhash'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone --no-checkout --progress "https://github.com/google/farmhash" "farmhash"
    WORKING_DIRECTORY "/home/huucuong/cpp/libs/3rdparty/tflite_build"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/google/farmhash'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout 0d859a811870d10f53a594927d0d0b97573ad06d --
  WORKING_DIRECTORY "/home/huucuong/cpp/libs/3rdparty/tflite_build/farmhash"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: '0d859a811870d10f53a594927d0d0b97573ad06d'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/home/huucuong/cpp/libs/3rdparty/tflite_build/farmhash"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/home/huucuong/cpp/libs/3rdparty/tflite_build/farmhash'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/farmhash-subbuild/farmhash-populate-prefix/src/farmhash-populate-stamp/farmhash-populate-gitinfo.txt"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/farmhash-subbuild/farmhash-populate-prefix/src/farmhash-populate-stamp/farmhash-populate-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/farmhash-subbuild/farmhash-populate-prefix/src/farmhash-populate-stamp/farmhash-populate-gitclone-lastrun.txt'")
endif()

