# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\StudentWork\siaod\Task2\second

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\StudentWork\siaod\Task2\second\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/second.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/second.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/second.dir/flags.make

CMakeFiles/second.dir/main.cpp.obj: CMakeFiles/second.dir/flags.make
CMakeFiles/second.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\StudentWork\siaod\Task2\second\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/second.dir/main.cpp.obj"
	"D:\Program Files\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\second.dir\main.cpp.obj -c D:\StudentWork\siaod\Task2\second\main.cpp

CMakeFiles/second.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/second.dir/main.cpp.i"
	"D:\Program Files\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\StudentWork\siaod\Task2\second\main.cpp > CMakeFiles\second.dir\main.cpp.i

CMakeFiles/second.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/second.dir/main.cpp.s"
	"D:\Program Files\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\StudentWork\siaod\Task2\second\main.cpp -o CMakeFiles\second.dir\main.cpp.s

# Object files for target second
second_OBJECTS = \
"CMakeFiles/second.dir/main.cpp.obj"

# External object files for target second
second_EXTERNAL_OBJECTS =

second.exe: CMakeFiles/second.dir/main.cpp.obj
second.exe: CMakeFiles/second.dir/build.make
second.exe: CMakeFiles/second.dir/linklibs.rsp
second.exe: CMakeFiles/second.dir/objects1.rsp
second.exe: CMakeFiles/second.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\StudentWork\siaod\Task2\second\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable second.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\second.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/second.dir/build: second.exe
.PHONY : CMakeFiles/second.dir/build

CMakeFiles/second.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\second.dir\cmake_clean.cmake
.PHONY : CMakeFiles/second.dir/clean

CMakeFiles/second.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\StudentWork\siaod\Task2\second D:\StudentWork\siaod\Task2\second D:\StudentWork\siaod\Task2\second\cmake-build-debug D:\StudentWork\siaod\Task2\second\cmake-build-debug D:\StudentWork\siaod\Task2\second\cmake-build-debug\CMakeFiles\second.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/second.dir/depend
