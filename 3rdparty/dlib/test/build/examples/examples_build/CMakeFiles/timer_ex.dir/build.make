# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/zhida/Documents/Code/dlib/dlib/test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zhida/Documents/Code/dlib/dlib/test/build

# Include any dependencies generated for this target.
include examples/examples_build/CMakeFiles/timer_ex.dir/depend.make

# Include the progress variables for this target.
include examples/examples_build/CMakeFiles/timer_ex.dir/progress.make

# Include the compile flags for this target's objects.
include examples/examples_build/CMakeFiles/timer_ex.dir/flags.make

examples/examples_build/CMakeFiles/timer_ex.dir/timer_ex.cpp.o: examples/examples_build/CMakeFiles/timer_ex.dir/flags.make
examples/examples_build/CMakeFiles/timer_ex.dir/timer_ex.cpp.o: /home/zhida/Documents/Code/dlib/examples/timer_ex.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhida/Documents/Code/dlib/dlib/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/examples_build/CMakeFiles/timer_ex.dir/timer_ex.cpp.o"
	cd /home/zhida/Documents/Code/dlib/dlib/test/build/examples/examples_build && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/timer_ex.dir/timer_ex.cpp.o -c /home/zhida/Documents/Code/dlib/examples/timer_ex.cpp

examples/examples_build/CMakeFiles/timer_ex.dir/timer_ex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/timer_ex.dir/timer_ex.cpp.i"
	cd /home/zhida/Documents/Code/dlib/dlib/test/build/examples/examples_build && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhida/Documents/Code/dlib/examples/timer_ex.cpp > CMakeFiles/timer_ex.dir/timer_ex.cpp.i

examples/examples_build/CMakeFiles/timer_ex.dir/timer_ex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/timer_ex.dir/timer_ex.cpp.s"
	cd /home/zhida/Documents/Code/dlib/dlib/test/build/examples/examples_build && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhida/Documents/Code/dlib/examples/timer_ex.cpp -o CMakeFiles/timer_ex.dir/timer_ex.cpp.s

examples/examples_build/CMakeFiles/timer_ex.dir/timer_ex.cpp.o.requires:

.PHONY : examples/examples_build/CMakeFiles/timer_ex.dir/timer_ex.cpp.o.requires

examples/examples_build/CMakeFiles/timer_ex.dir/timer_ex.cpp.o.provides: examples/examples_build/CMakeFiles/timer_ex.dir/timer_ex.cpp.o.requires
	$(MAKE) -f examples/examples_build/CMakeFiles/timer_ex.dir/build.make examples/examples_build/CMakeFiles/timer_ex.dir/timer_ex.cpp.o.provides.build
.PHONY : examples/examples_build/CMakeFiles/timer_ex.dir/timer_ex.cpp.o.provides

examples/examples_build/CMakeFiles/timer_ex.dir/timer_ex.cpp.o.provides.build: examples/examples_build/CMakeFiles/timer_ex.dir/timer_ex.cpp.o


# Object files for target timer_ex
timer_ex_OBJECTS = \
"CMakeFiles/timer_ex.dir/timer_ex.cpp.o"

# External object files for target timer_ex
timer_ex_EXTERNAL_OBJECTS =

examples/examples_build/timer_ex: examples/examples_build/CMakeFiles/timer_ex.dir/timer_ex.cpp.o
examples/examples_build/timer_ex: examples/examples_build/CMakeFiles/timer_ex.dir/build.make
examples/examples_build/timer_ex: dlib_build/libdlib.a
examples/examples_build/timer_ex: /usr/local/cuda-8.0/lib64/libcudart_static.a
examples/examples_build/timer_ex: /usr/lib/x86_64-linux-gnu/librt.so
examples/examples_build/timer_ex: /usr/lib/x86_64-linux-gnu/librt.so
examples/examples_build/timer_ex: /usr/lib/x86_64-linux-gnu/libnsl.so
examples/examples_build/timer_ex: /usr/lib/x86_64-linux-gnu/libSM.so
examples/examples_build/timer_ex: /usr/lib/x86_64-linux-gnu/libICE.so
examples/examples_build/timer_ex: /usr/lib/x86_64-linux-gnu/libX11.so
examples/examples_build/timer_ex: /usr/lib/x86_64-linux-gnu/libXext.so
examples/examples_build/timer_ex: /usr/lib/x86_64-linux-gnu/libgif.so
examples/examples_build/timer_ex: /usr/lib/x86_64-linux-gnu/libpng.so
examples/examples_build/timer_ex: /usr/lib/x86_64-linux-gnu/libz.so
examples/examples_build/timer_ex: /usr/lib/x86_64-linux-gnu/libjpeg.so
examples/examples_build/timer_ex: /usr/lib/libopenblas.so
examples/examples_build/timer_ex: /usr/local/cuda-8.0/lib64/libcublas.so
examples/examples_build/timer_ex: /usr/local/cuda-8.0/lib64/libcudnn.so
examples/examples_build/timer_ex: /usr/local/cuda-8.0/lib64/libcurand.so
examples/examples_build/timer_ex: /usr/local/cuda-8.0/lib64/libcusolver.so
examples/examples_build/timer_ex: /usr/lib/x86_64-linux-gnu/libsqlite3.so
examples/examples_build/timer_ex: examples/examples_build/CMakeFiles/timer_ex.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zhida/Documents/Code/dlib/dlib/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable timer_ex"
	cd /home/zhida/Documents/Code/dlib/dlib/test/build/examples/examples_build && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/timer_ex.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/examples_build/CMakeFiles/timer_ex.dir/build: examples/examples_build/timer_ex

.PHONY : examples/examples_build/CMakeFiles/timer_ex.dir/build

examples/examples_build/CMakeFiles/timer_ex.dir/requires: examples/examples_build/CMakeFiles/timer_ex.dir/timer_ex.cpp.o.requires

.PHONY : examples/examples_build/CMakeFiles/timer_ex.dir/requires

examples/examples_build/CMakeFiles/timer_ex.dir/clean:
	cd /home/zhida/Documents/Code/dlib/dlib/test/build/examples/examples_build && $(CMAKE_COMMAND) -P CMakeFiles/timer_ex.dir/cmake_clean.cmake
.PHONY : examples/examples_build/CMakeFiles/timer_ex.dir/clean

examples/examples_build/CMakeFiles/timer_ex.dir/depend:
	cd /home/zhida/Documents/Code/dlib/dlib/test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zhida/Documents/Code/dlib/dlib/test /home/zhida/Documents/Code/dlib/examples /home/zhida/Documents/Code/dlib/dlib/test/build /home/zhida/Documents/Code/dlib/dlib/test/build/examples/examples_build /home/zhida/Documents/Code/dlib/dlib/test/build/examples/examples_build/CMakeFiles/timer_ex.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/examples_build/CMakeFiles/timer_ex.dir/depend

