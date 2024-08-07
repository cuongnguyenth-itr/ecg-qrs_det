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
include _deps/ruy-build/ruy/profiler/CMakeFiles/ruy_profiler_instrumentation.dir/depend.make

# Include the progress variables for this target.
include _deps/ruy-build/ruy/profiler/CMakeFiles/ruy_profiler_instrumentation.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/ruy-build/ruy/profiler/CMakeFiles/ruy_profiler_instrumentation.dir/flags.make

_deps/ruy-build/ruy/profiler/CMakeFiles/ruy_profiler_instrumentation.dir/instrumentation.cc.o: _deps/ruy-build/ruy/profiler/CMakeFiles/ruy_profiler_instrumentation.dir/flags.make
_deps/ruy-build/ruy/profiler/CMakeFiles/ruy_profiler_instrumentation.dir/instrumentation.cc.o: ruy/ruy/profiler/instrumentation.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/huucuong/cpp/libs/3rdparty/tflite_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object _deps/ruy-build/ruy/profiler/CMakeFiles/ruy_profiler_instrumentation.dir/instrumentation.cc.o"
	cd /home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/ruy-build/ruy/profiler && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ruy_profiler_instrumentation.dir/instrumentation.cc.o -c /home/huucuong/cpp/libs/3rdparty/tflite_build/ruy/ruy/profiler/instrumentation.cc

_deps/ruy-build/ruy/profiler/CMakeFiles/ruy_profiler_instrumentation.dir/instrumentation.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ruy_profiler_instrumentation.dir/instrumentation.cc.i"
	cd /home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/ruy-build/ruy/profiler && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/huucuong/cpp/libs/3rdparty/tflite_build/ruy/ruy/profiler/instrumentation.cc > CMakeFiles/ruy_profiler_instrumentation.dir/instrumentation.cc.i

_deps/ruy-build/ruy/profiler/CMakeFiles/ruy_profiler_instrumentation.dir/instrumentation.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ruy_profiler_instrumentation.dir/instrumentation.cc.s"
	cd /home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/ruy-build/ruy/profiler && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/huucuong/cpp/libs/3rdparty/tflite_build/ruy/ruy/profiler/instrumentation.cc -o CMakeFiles/ruy_profiler_instrumentation.dir/instrumentation.cc.s

# Object files for target ruy_profiler_instrumentation
ruy_profiler_instrumentation_OBJECTS = \
"CMakeFiles/ruy_profiler_instrumentation.dir/instrumentation.cc.o"

# External object files for target ruy_profiler_instrumentation
ruy_profiler_instrumentation_EXTERNAL_OBJECTS =

_deps/ruy-build/ruy/profiler/libruy_profiler_instrumentation.a: _deps/ruy-build/ruy/profiler/CMakeFiles/ruy_profiler_instrumentation.dir/instrumentation.cc.o
_deps/ruy-build/ruy/profiler/libruy_profiler_instrumentation.a: _deps/ruy-build/ruy/profiler/CMakeFiles/ruy_profiler_instrumentation.dir/build.make
_deps/ruy-build/ruy/profiler/libruy_profiler_instrumentation.a: _deps/ruy-build/ruy/profiler/CMakeFiles/ruy_profiler_instrumentation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/huucuong/cpp/libs/3rdparty/tflite_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libruy_profiler_instrumentation.a"
	cd /home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/ruy-build/ruy/profiler && $(CMAKE_COMMAND) -P CMakeFiles/ruy_profiler_instrumentation.dir/cmake_clean_target.cmake
	cd /home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/ruy-build/ruy/profiler && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ruy_profiler_instrumentation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/ruy-build/ruy/profiler/CMakeFiles/ruy_profiler_instrumentation.dir/build: _deps/ruy-build/ruy/profiler/libruy_profiler_instrumentation.a

.PHONY : _deps/ruy-build/ruy/profiler/CMakeFiles/ruy_profiler_instrumentation.dir/build

_deps/ruy-build/ruy/profiler/CMakeFiles/ruy_profiler_instrumentation.dir/clean:
	cd /home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/ruy-build/ruy/profiler && $(CMAKE_COMMAND) -P CMakeFiles/ruy_profiler_instrumentation.dir/cmake_clean.cmake
.PHONY : _deps/ruy-build/ruy/profiler/CMakeFiles/ruy_profiler_instrumentation.dir/clean

_deps/ruy-build/ruy/profiler/CMakeFiles/ruy_profiler_instrumentation.dir/depend:
	cd /home/huucuong/cpp/libs/3rdparty/tflite_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/huucuong/cpp/libs/3rdparty/tensorflow-master/tensorflow/lite /home/huucuong/cpp/libs/3rdparty/tflite_build/ruy/ruy/profiler /home/huucuong/cpp/libs/3rdparty/tflite_build /home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/ruy-build/ruy/profiler /home/huucuong/cpp/libs/3rdparty/tflite_build/_deps/ruy-build/ruy/profiler/CMakeFiles/ruy_profiler_instrumentation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : _deps/ruy-build/ruy/profiler/CMakeFiles/ruy_profiler_instrumentation.dir/depend

