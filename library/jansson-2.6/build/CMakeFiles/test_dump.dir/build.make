# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/2.8.12.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/2.8.12.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/local/Cellar/cmake/2.8.12.2/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build

# Include any dependencies generated for this target.
include CMakeFiles/test_dump.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_dump.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_dump.dir/flags.make

CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.o: CMakeFiles/test_dump.dir/flags.make
CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.o: ../test/suites/api/test_dump.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.o   -c /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/test/suites/api/test_dump.c

CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/test/suites/api/test_dump.c > CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.i

CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/test/suites/api/test_dump.c -o CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.s

CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.o.requires:
.PHONY : CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.o.requires

CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.o.provides: CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.o.requires
	$(MAKE) -f CMakeFiles/test_dump.dir/build.make CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.o.provides.build
.PHONY : CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.o.provides

CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.o.provides.build: CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.o

# Object files for target test_dump
test_dump_OBJECTS = \
"CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.o"

# External object files for target test_dump
test_dump_EXTERNAL_OBJECTS =

bin/test_dump: CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.o
bin/test_dump: CMakeFiles/test_dump.dir/build.make
bin/test_dump: lib/libjansson.a
bin/test_dump: CMakeFiles/test_dump.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable bin/test_dump"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_dump.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_dump.dir/build: bin/test_dump
.PHONY : CMakeFiles/test_dump.dir/build

CMakeFiles/test_dump.dir/requires: CMakeFiles/test_dump.dir/test/suites/api/test_dump.c.o.requires
.PHONY : CMakeFiles/test_dump.dir/requires

CMakeFiles/test_dump.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_dump.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_dump.dir/clean

CMakeFiles/test_dump.dir/depend:
	cd /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6 /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6 /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build/CMakeFiles/test_dump.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_dump.dir/depend

