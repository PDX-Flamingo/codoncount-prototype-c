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
include CMakeFiles/jansson.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/jansson.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/jansson.dir/flags.make

CMakeFiles/jansson.dir/src/dump.c.o: CMakeFiles/jansson.dir/flags.make
CMakeFiles/jansson.dir/src/dump.c.o: ../src/dump.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/jansson.dir/src/dump.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/jansson.dir/src/dump.c.o   -c /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/dump.c

CMakeFiles/jansson.dir/src/dump.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/jansson.dir/src/dump.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/dump.c > CMakeFiles/jansson.dir/src/dump.c.i

CMakeFiles/jansson.dir/src/dump.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/jansson.dir/src/dump.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/dump.c -o CMakeFiles/jansson.dir/src/dump.c.s

CMakeFiles/jansson.dir/src/dump.c.o.requires:
.PHONY : CMakeFiles/jansson.dir/src/dump.c.o.requires

CMakeFiles/jansson.dir/src/dump.c.o.provides: CMakeFiles/jansson.dir/src/dump.c.o.requires
	$(MAKE) -f CMakeFiles/jansson.dir/build.make CMakeFiles/jansson.dir/src/dump.c.o.provides.build
.PHONY : CMakeFiles/jansson.dir/src/dump.c.o.provides

CMakeFiles/jansson.dir/src/dump.c.o.provides.build: CMakeFiles/jansson.dir/src/dump.c.o

CMakeFiles/jansson.dir/src/error.c.o: CMakeFiles/jansson.dir/flags.make
CMakeFiles/jansson.dir/src/error.c.o: ../src/error.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/jansson.dir/src/error.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/jansson.dir/src/error.c.o   -c /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/error.c

CMakeFiles/jansson.dir/src/error.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/jansson.dir/src/error.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/error.c > CMakeFiles/jansson.dir/src/error.c.i

CMakeFiles/jansson.dir/src/error.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/jansson.dir/src/error.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/error.c -o CMakeFiles/jansson.dir/src/error.c.s

CMakeFiles/jansson.dir/src/error.c.o.requires:
.PHONY : CMakeFiles/jansson.dir/src/error.c.o.requires

CMakeFiles/jansson.dir/src/error.c.o.provides: CMakeFiles/jansson.dir/src/error.c.o.requires
	$(MAKE) -f CMakeFiles/jansson.dir/build.make CMakeFiles/jansson.dir/src/error.c.o.provides.build
.PHONY : CMakeFiles/jansson.dir/src/error.c.o.provides

CMakeFiles/jansson.dir/src/error.c.o.provides.build: CMakeFiles/jansson.dir/src/error.c.o

CMakeFiles/jansson.dir/src/hashtable.c.o: CMakeFiles/jansson.dir/flags.make
CMakeFiles/jansson.dir/src/hashtable.c.o: ../src/hashtable.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/jansson.dir/src/hashtable.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/jansson.dir/src/hashtable.c.o   -c /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/hashtable.c

CMakeFiles/jansson.dir/src/hashtable.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/jansson.dir/src/hashtable.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/hashtable.c > CMakeFiles/jansson.dir/src/hashtable.c.i

CMakeFiles/jansson.dir/src/hashtable.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/jansson.dir/src/hashtable.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/hashtable.c -o CMakeFiles/jansson.dir/src/hashtable.c.s

CMakeFiles/jansson.dir/src/hashtable.c.o.requires:
.PHONY : CMakeFiles/jansson.dir/src/hashtable.c.o.requires

CMakeFiles/jansson.dir/src/hashtable.c.o.provides: CMakeFiles/jansson.dir/src/hashtable.c.o.requires
	$(MAKE) -f CMakeFiles/jansson.dir/build.make CMakeFiles/jansson.dir/src/hashtable.c.o.provides.build
.PHONY : CMakeFiles/jansson.dir/src/hashtable.c.o.provides

CMakeFiles/jansson.dir/src/hashtable.c.o.provides.build: CMakeFiles/jansson.dir/src/hashtable.c.o

CMakeFiles/jansson.dir/src/hashtable_seed.c.o: CMakeFiles/jansson.dir/flags.make
CMakeFiles/jansson.dir/src/hashtable_seed.c.o: ../src/hashtable_seed.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/jansson.dir/src/hashtable_seed.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/jansson.dir/src/hashtable_seed.c.o   -c /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/hashtable_seed.c

CMakeFiles/jansson.dir/src/hashtable_seed.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/jansson.dir/src/hashtable_seed.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/hashtable_seed.c > CMakeFiles/jansson.dir/src/hashtable_seed.c.i

CMakeFiles/jansson.dir/src/hashtable_seed.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/jansson.dir/src/hashtable_seed.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/hashtable_seed.c -o CMakeFiles/jansson.dir/src/hashtable_seed.c.s

CMakeFiles/jansson.dir/src/hashtable_seed.c.o.requires:
.PHONY : CMakeFiles/jansson.dir/src/hashtable_seed.c.o.requires

CMakeFiles/jansson.dir/src/hashtable_seed.c.o.provides: CMakeFiles/jansson.dir/src/hashtable_seed.c.o.requires
	$(MAKE) -f CMakeFiles/jansson.dir/build.make CMakeFiles/jansson.dir/src/hashtable_seed.c.o.provides.build
.PHONY : CMakeFiles/jansson.dir/src/hashtable_seed.c.o.provides

CMakeFiles/jansson.dir/src/hashtable_seed.c.o.provides.build: CMakeFiles/jansson.dir/src/hashtable_seed.c.o

CMakeFiles/jansson.dir/src/load.c.o: CMakeFiles/jansson.dir/flags.make
CMakeFiles/jansson.dir/src/load.c.o: ../src/load.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/jansson.dir/src/load.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/jansson.dir/src/load.c.o   -c /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/load.c

CMakeFiles/jansson.dir/src/load.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/jansson.dir/src/load.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/load.c > CMakeFiles/jansson.dir/src/load.c.i

CMakeFiles/jansson.dir/src/load.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/jansson.dir/src/load.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/load.c -o CMakeFiles/jansson.dir/src/load.c.s

CMakeFiles/jansson.dir/src/load.c.o.requires:
.PHONY : CMakeFiles/jansson.dir/src/load.c.o.requires

CMakeFiles/jansson.dir/src/load.c.o.provides: CMakeFiles/jansson.dir/src/load.c.o.requires
	$(MAKE) -f CMakeFiles/jansson.dir/build.make CMakeFiles/jansson.dir/src/load.c.o.provides.build
.PHONY : CMakeFiles/jansson.dir/src/load.c.o.provides

CMakeFiles/jansson.dir/src/load.c.o.provides.build: CMakeFiles/jansson.dir/src/load.c.o

CMakeFiles/jansson.dir/src/memory.c.o: CMakeFiles/jansson.dir/flags.make
CMakeFiles/jansson.dir/src/memory.c.o: ../src/memory.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/jansson.dir/src/memory.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/jansson.dir/src/memory.c.o   -c /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/memory.c

CMakeFiles/jansson.dir/src/memory.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/jansson.dir/src/memory.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/memory.c > CMakeFiles/jansson.dir/src/memory.c.i

CMakeFiles/jansson.dir/src/memory.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/jansson.dir/src/memory.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/memory.c -o CMakeFiles/jansson.dir/src/memory.c.s

CMakeFiles/jansson.dir/src/memory.c.o.requires:
.PHONY : CMakeFiles/jansson.dir/src/memory.c.o.requires

CMakeFiles/jansson.dir/src/memory.c.o.provides: CMakeFiles/jansson.dir/src/memory.c.o.requires
	$(MAKE) -f CMakeFiles/jansson.dir/build.make CMakeFiles/jansson.dir/src/memory.c.o.provides.build
.PHONY : CMakeFiles/jansson.dir/src/memory.c.o.provides

CMakeFiles/jansson.dir/src/memory.c.o.provides.build: CMakeFiles/jansson.dir/src/memory.c.o

CMakeFiles/jansson.dir/src/pack_unpack.c.o: CMakeFiles/jansson.dir/flags.make
CMakeFiles/jansson.dir/src/pack_unpack.c.o: ../src/pack_unpack.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/jansson.dir/src/pack_unpack.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/jansson.dir/src/pack_unpack.c.o   -c /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/pack_unpack.c

CMakeFiles/jansson.dir/src/pack_unpack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/jansson.dir/src/pack_unpack.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/pack_unpack.c > CMakeFiles/jansson.dir/src/pack_unpack.c.i

CMakeFiles/jansson.dir/src/pack_unpack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/jansson.dir/src/pack_unpack.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/pack_unpack.c -o CMakeFiles/jansson.dir/src/pack_unpack.c.s

CMakeFiles/jansson.dir/src/pack_unpack.c.o.requires:
.PHONY : CMakeFiles/jansson.dir/src/pack_unpack.c.o.requires

CMakeFiles/jansson.dir/src/pack_unpack.c.o.provides: CMakeFiles/jansson.dir/src/pack_unpack.c.o.requires
	$(MAKE) -f CMakeFiles/jansson.dir/build.make CMakeFiles/jansson.dir/src/pack_unpack.c.o.provides.build
.PHONY : CMakeFiles/jansson.dir/src/pack_unpack.c.o.provides

CMakeFiles/jansson.dir/src/pack_unpack.c.o.provides.build: CMakeFiles/jansson.dir/src/pack_unpack.c.o

CMakeFiles/jansson.dir/src/strbuffer.c.o: CMakeFiles/jansson.dir/flags.make
CMakeFiles/jansson.dir/src/strbuffer.c.o: ../src/strbuffer.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/jansson.dir/src/strbuffer.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/jansson.dir/src/strbuffer.c.o   -c /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/strbuffer.c

CMakeFiles/jansson.dir/src/strbuffer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/jansson.dir/src/strbuffer.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/strbuffer.c > CMakeFiles/jansson.dir/src/strbuffer.c.i

CMakeFiles/jansson.dir/src/strbuffer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/jansson.dir/src/strbuffer.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/strbuffer.c -o CMakeFiles/jansson.dir/src/strbuffer.c.s

CMakeFiles/jansson.dir/src/strbuffer.c.o.requires:
.PHONY : CMakeFiles/jansson.dir/src/strbuffer.c.o.requires

CMakeFiles/jansson.dir/src/strbuffer.c.o.provides: CMakeFiles/jansson.dir/src/strbuffer.c.o.requires
	$(MAKE) -f CMakeFiles/jansson.dir/build.make CMakeFiles/jansson.dir/src/strbuffer.c.o.provides.build
.PHONY : CMakeFiles/jansson.dir/src/strbuffer.c.o.provides

CMakeFiles/jansson.dir/src/strbuffer.c.o.provides.build: CMakeFiles/jansson.dir/src/strbuffer.c.o

CMakeFiles/jansson.dir/src/strconv.c.o: CMakeFiles/jansson.dir/flags.make
CMakeFiles/jansson.dir/src/strconv.c.o: ../src/strconv.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/jansson.dir/src/strconv.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/jansson.dir/src/strconv.c.o   -c /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/strconv.c

CMakeFiles/jansson.dir/src/strconv.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/jansson.dir/src/strconv.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/strconv.c > CMakeFiles/jansson.dir/src/strconv.c.i

CMakeFiles/jansson.dir/src/strconv.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/jansson.dir/src/strconv.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/strconv.c -o CMakeFiles/jansson.dir/src/strconv.c.s

CMakeFiles/jansson.dir/src/strconv.c.o.requires:
.PHONY : CMakeFiles/jansson.dir/src/strconv.c.o.requires

CMakeFiles/jansson.dir/src/strconv.c.o.provides: CMakeFiles/jansson.dir/src/strconv.c.o.requires
	$(MAKE) -f CMakeFiles/jansson.dir/build.make CMakeFiles/jansson.dir/src/strconv.c.o.provides.build
.PHONY : CMakeFiles/jansson.dir/src/strconv.c.o.provides

CMakeFiles/jansson.dir/src/strconv.c.o.provides.build: CMakeFiles/jansson.dir/src/strconv.c.o

CMakeFiles/jansson.dir/src/utf.c.o: CMakeFiles/jansson.dir/flags.make
CMakeFiles/jansson.dir/src/utf.c.o: ../src/utf.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/jansson.dir/src/utf.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/jansson.dir/src/utf.c.o   -c /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/utf.c

CMakeFiles/jansson.dir/src/utf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/jansson.dir/src/utf.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/utf.c > CMakeFiles/jansson.dir/src/utf.c.i

CMakeFiles/jansson.dir/src/utf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/jansson.dir/src/utf.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/utf.c -o CMakeFiles/jansson.dir/src/utf.c.s

CMakeFiles/jansson.dir/src/utf.c.o.requires:
.PHONY : CMakeFiles/jansson.dir/src/utf.c.o.requires

CMakeFiles/jansson.dir/src/utf.c.o.provides: CMakeFiles/jansson.dir/src/utf.c.o.requires
	$(MAKE) -f CMakeFiles/jansson.dir/build.make CMakeFiles/jansson.dir/src/utf.c.o.provides.build
.PHONY : CMakeFiles/jansson.dir/src/utf.c.o.provides

CMakeFiles/jansson.dir/src/utf.c.o.provides.build: CMakeFiles/jansson.dir/src/utf.c.o

CMakeFiles/jansson.dir/src/value.c.o: CMakeFiles/jansson.dir/flags.make
CMakeFiles/jansson.dir/src/value.c.o: ../src/value.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build/CMakeFiles $(CMAKE_PROGRESS_11)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/jansson.dir/src/value.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/jansson.dir/src/value.c.o   -c /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/value.c

CMakeFiles/jansson.dir/src/value.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/jansson.dir/src/value.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/value.c > CMakeFiles/jansson.dir/src/value.c.i

CMakeFiles/jansson.dir/src/value.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/jansson.dir/src/value.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/src/value.c -o CMakeFiles/jansson.dir/src/value.c.s

CMakeFiles/jansson.dir/src/value.c.o.requires:
.PHONY : CMakeFiles/jansson.dir/src/value.c.o.requires

CMakeFiles/jansson.dir/src/value.c.o.provides: CMakeFiles/jansson.dir/src/value.c.o.requires
	$(MAKE) -f CMakeFiles/jansson.dir/build.make CMakeFiles/jansson.dir/src/value.c.o.provides.build
.PHONY : CMakeFiles/jansson.dir/src/value.c.o.provides

CMakeFiles/jansson.dir/src/value.c.o.provides.build: CMakeFiles/jansson.dir/src/value.c.o

# Object files for target jansson
jansson_OBJECTS = \
"CMakeFiles/jansson.dir/src/dump.c.o" \
"CMakeFiles/jansson.dir/src/error.c.o" \
"CMakeFiles/jansson.dir/src/hashtable.c.o" \
"CMakeFiles/jansson.dir/src/hashtable_seed.c.o" \
"CMakeFiles/jansson.dir/src/load.c.o" \
"CMakeFiles/jansson.dir/src/memory.c.o" \
"CMakeFiles/jansson.dir/src/pack_unpack.c.o" \
"CMakeFiles/jansson.dir/src/strbuffer.c.o" \
"CMakeFiles/jansson.dir/src/strconv.c.o" \
"CMakeFiles/jansson.dir/src/utf.c.o" \
"CMakeFiles/jansson.dir/src/value.c.o"

# External object files for target jansson
jansson_EXTERNAL_OBJECTS =

lib/libjansson.a: CMakeFiles/jansson.dir/src/dump.c.o
lib/libjansson.a: CMakeFiles/jansson.dir/src/error.c.o
lib/libjansson.a: CMakeFiles/jansson.dir/src/hashtable.c.o
lib/libjansson.a: CMakeFiles/jansson.dir/src/hashtable_seed.c.o
lib/libjansson.a: CMakeFiles/jansson.dir/src/load.c.o
lib/libjansson.a: CMakeFiles/jansson.dir/src/memory.c.o
lib/libjansson.a: CMakeFiles/jansson.dir/src/pack_unpack.c.o
lib/libjansson.a: CMakeFiles/jansson.dir/src/strbuffer.c.o
lib/libjansson.a: CMakeFiles/jansson.dir/src/strconv.c.o
lib/libjansson.a: CMakeFiles/jansson.dir/src/utf.c.o
lib/libjansson.a: CMakeFiles/jansson.dir/src/value.c.o
lib/libjansson.a: CMakeFiles/jansson.dir/build.make
lib/libjansson.a: CMakeFiles/jansson.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C static library lib/libjansson.a"
	$(CMAKE_COMMAND) -P CMakeFiles/jansson.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/jansson.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/jansson.dir/build: lib/libjansson.a
.PHONY : CMakeFiles/jansson.dir/build

CMakeFiles/jansson.dir/requires: CMakeFiles/jansson.dir/src/dump.c.o.requires
CMakeFiles/jansson.dir/requires: CMakeFiles/jansson.dir/src/error.c.o.requires
CMakeFiles/jansson.dir/requires: CMakeFiles/jansson.dir/src/hashtable.c.o.requires
CMakeFiles/jansson.dir/requires: CMakeFiles/jansson.dir/src/hashtable_seed.c.o.requires
CMakeFiles/jansson.dir/requires: CMakeFiles/jansson.dir/src/load.c.o.requires
CMakeFiles/jansson.dir/requires: CMakeFiles/jansson.dir/src/memory.c.o.requires
CMakeFiles/jansson.dir/requires: CMakeFiles/jansson.dir/src/pack_unpack.c.o.requires
CMakeFiles/jansson.dir/requires: CMakeFiles/jansson.dir/src/strbuffer.c.o.requires
CMakeFiles/jansson.dir/requires: CMakeFiles/jansson.dir/src/strconv.c.o.requires
CMakeFiles/jansson.dir/requires: CMakeFiles/jansson.dir/src/utf.c.o.requires
CMakeFiles/jansson.dir/requires: CMakeFiles/jansson.dir/src/value.c.o.requires
.PHONY : CMakeFiles/jansson.dir/requires

CMakeFiles/jansson.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/jansson.dir/cmake_clean.cmake
.PHONY : CMakeFiles/jansson.dir/clean

CMakeFiles/jansson.dir/depend:
	cd /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6 /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6 /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build /Users/ptseng/Developer/C/CodonCount-C/CodonCount-C/library/jansson-2.6/build/CMakeFiles/jansson.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/jansson.dir/depend
