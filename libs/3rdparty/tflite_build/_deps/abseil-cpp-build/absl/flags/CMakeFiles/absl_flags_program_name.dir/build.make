# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/huucuong/cpp/libs/3rdparty/tensorflow-master/tensorflow/lite

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/huucuong/cpp/libs/3rdparty/tflite_build

# Include any dependencies generated for this target.
include _deps/abseil-cpp-build/absl/flags/CMakeFiles/absl_flags_program_name.dir/depend.make

# Include the progress variables for this target.
include _deps/abseil-cpp-build/absl/flags/CMakeFiles/absl_flags_program_name.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/abseil-cpp-build/absl/flags/CMakeFiles/absl_flags_program_name.dir/flags.make

_deps/abseil-cpp-build/absl/flags/CMakeFiles/absl_flags_program_name.dir/internal/program_name.cc.o: _deps/abseil-cpp-build/absl/flags/CMakeFiles/absl_flags_program_name.dir/flags.make
_deps/abseil-cpp-build/absl/flags/CMakeFiles/absl_flags_program_name.dir/internal/program_name.cc.o: abseil-cpp/absl/flags/internal/program_name.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/huucuong/cpp/libs/3rdparty/tflite_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object _deps/abseil-cpp-build/absl/flags/CMakeFiles/absl_flags_program_name.dir/internal/program_name.cc.o"
	cd /home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/abseil-cpp-build/absl/flags && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/absl_flags_program_name.dir/internal/program_name.cc.o -c /home/huucuong/cpp/libs/3rdparty/tflite_build/abseil-cpp/absl/flags/internal/program_name.cc

_deps/abseil-cpp-build/absl/flags/CMakeFiles/absl_flags_program_name.dir/internal/program_name.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/absl_flags_program_name.dir/internal/program_name.cc.i"
	cd /home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/abseil-cpp-build/absl/flags && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/huucuong/cpp/libs/3rdparty/tflite_build/abseil-cpp/absl/flags/internal/program_name.cc > CMakeFiles/absl_flags_program_name.dir/internal/program_name.cc.i

_deps/abseil-cpp-build/absl/flags/CMakeFiles/absl_flags_program_name.dir/internal/program_name.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/absl_flags_program_name.dir/internal/program_name.cc.s"
	cd /home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/abseil-cpp-build/absl/flags && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/huucuong/cpp/libs/3rdparty/tflite_build/abseil-cpp/absl/flags/internal/program_name.cc -o CMakeFiles/absl_flags_program_name.dir/internal/program_name.cc.s

# Object files for target absl_flags_program_name
absl_flags_program_name_OBJECTS = \
"CMakeFiles/absl_flags_program_name.dir/internal/program_name.cc.o"

# External object files for target absl_flags_program_name
absl_flags_program_name_EXTERNAL_OBJECTS =

_deps/abseil-cpp-build/absl/flags/libabsl_flags_program_name.a: _deps/abseil-cpp-build/absl/flags/CMakeFiles/absl_flags_program_name.dir/internal/program_name.cc.o
_deps/abseil-cpp-build/absl/flags/libabsl_flags_program_name.a: _deps/abseil-cpp-build/absl/flags/CMakeFiles/absl_flags_program_name.dir/build.make
_deps/abseil-cpp-build/absl/flags/libabsl_flags_program_name.a: _deps/abseil-cpp-build/absl/flags/CMakeFiles/absl_flags_program_name.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/huucuong/cpp/libs/3rdparty/tflite_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libabsl_flags_program_name.a"
	cd /home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/abseil-cpp-build/absl/flags && $(CMAKE_COMMAND) -P CMakeFiles/absl_flags_program_name.dir/cmake_clean_target.cmake
	cd /home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/abseil-cpp-build/absl/flags && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/absl_flags_program_name.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/abseil-cpp-build/absl/flags/CMakeFiles/absl_flags_program_name.dir/build: _deps/abseil-cpp-build/absl/flags/libabsl_flags_program_name.a

.PHONY : _deps/abseil-cpp-build/absl/flags/CMakeFiles/absl_flags_program_name.dir/build

_deps/abseil-cpp-build/absl/flags/CMakeFiles/absl_flags_program_name.dir/clean:
	cd /home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/abseil-cpp-build/absl/flags && $(CMAKE_COMMAND) -P CMakeFiles/absl_flags_program_name.dir/cmake_clean.cmake
.PHONY : _deps/abseil-cpp-build/absl/flags/CMakeFiles/absl_flags_program_name.dir/clean

_deps/abseil-cpp-build/absl/flags/CMakeFiles/absl_flags_program_name.dir/depend:
	cd /home/huucuong/cpp/libs/3rdparty/tflite_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/huucuong/cpp/libs/3rdparty/tensorflow-master/tensorflow/lite /home/huucuong/cpp/libs/3rdparty/tflite_build/abseil-cpp/absl/flags /home/huucuong/cpp/libs/3rdparty/tflite_build /home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/abseil-cpp-build/absl/flags /home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/abseil-cpp-build/absl/flags/CMakeFiles/absl_flags_program_name.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : _deps/abseil-cpp-build/absl/flags/CMakeFiles/absl_flags_program_name.dir/depend
