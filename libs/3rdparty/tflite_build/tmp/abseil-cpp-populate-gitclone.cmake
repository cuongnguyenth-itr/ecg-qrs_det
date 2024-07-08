
if(NOT "/home/huucuong/cpp/libs/3rdparty/tflite_build/src/abseil-cpp-populate-stamp/abseil-cpp-populate-gitinfo.txt" IS_NEWER_THAN "/home/huucuong/cpp/libs/3rdparty/tflite_build/src/abseil-cpp-populate-stamp/abseil-cpp-populate-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/home/huucuong/cpp/libs/3rdparty/tflite_build/src/abseil-cpp-populate-stamp/abseil-cpp-populate-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E remove_directory "/home/huucuong/cpp/libs/3rdparty/tflite_build/abseil-cpp"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/home/huucuong/cpp/libs/3rdparty/tflite_build/abseil-cpp'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone --no-checkout --depth 1 --no-single-branch --progress "https://github.com/abseil/abseil-cpp" "abseil-cpp"
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
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/abseil/abseil-cpp'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout fb3621f4f897824c0dbe0615fa94543df6192f30 --
  WORKING_DIRECTORY "/home/huucuong/cpp/libs/3rdparty/tflite_build/abseil-cpp"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'fb3621f4f897824c0dbe0615fa94543df6192f30'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/home/huucuong/cpp/libs/3rdparty/tflite_build/abseil-cpp"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/home/huucuong/cpp/libs/3rdparty/tflite_build/abseil-cpp'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/src/abseil-cpp-populate-stamp/abseil-cpp-populate-gitinfo.txt"
    "/home/huucuong/cpp/libs/3rdparty/tflite_build/src/abseil-cpp-populate-stamp/abseil-cpp-populate-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/home/huucuong/cpp/libs/3rdparty/tflite_build/src/abseil-cpp-populate-stamp/abseil-cpp-populate-gitclone-lastrun.txt'")
endif()

