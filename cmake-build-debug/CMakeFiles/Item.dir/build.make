# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\spide\Desktop\dungeoncrawler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\spide\Desktop\dungeoncrawler\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Item.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Item.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Item.dir/flags.make

CMakeFiles/Item.dir/src/Item.cpp.obj: CMakeFiles/Item.dir/flags.make
CMakeFiles/Item.dir/src/Item.cpp.obj: ../src/Item.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\spide\Desktop\dungeoncrawler\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Item.dir/src/Item.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Item.dir\src\Item.cpp.obj -c C:\Users\spide\Desktop\dungeoncrawler\src\Item.cpp

CMakeFiles/Item.dir/src/Item.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Item.dir/src/Item.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\spide\Desktop\dungeoncrawler\src\Item.cpp > CMakeFiles\Item.dir\src\Item.cpp.i

CMakeFiles/Item.dir/src/Item.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Item.dir/src/Item.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\spide\Desktop\dungeoncrawler\src\Item.cpp -o CMakeFiles\Item.dir\src\Item.cpp.s

# Object files for target Item
Item_OBJECTS = \
"CMakeFiles/Item.dir/src/Item.cpp.obj"

# External object files for target Item
Item_EXTERNAL_OBJECTS =

Item.exe: CMakeFiles/Item.dir/src/Item.cpp.obj
Item.exe: CMakeFiles/Item.dir/build.make
Item.exe: CMakeFiles/Item.dir/linklibs.rsp
Item.exe: CMakeFiles/Item.dir/objects1.rsp
Item.exe: CMakeFiles/Item.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\spide\Desktop\dungeoncrawler\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Item.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Item.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Item.dir/build: Item.exe

.PHONY : CMakeFiles/Item.dir/build

CMakeFiles/Item.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Item.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Item.dir/clean

CMakeFiles/Item.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\spide\Desktop\dungeoncrawler C:\Users\spide\Desktop\dungeoncrawler C:\Users\spide\Desktop\dungeoncrawler\cmake-build-debug C:\Users\spide\Desktop\dungeoncrawler\cmake-build-debug C:\Users\spide\Desktop\dungeoncrawler\cmake-build-debug\CMakeFiles\Item.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Item.dir/depend

