# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Data_Structures.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Data_Structures.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Data_Structures.dir/flags.make

CMakeFiles/Data_Structures.dir/main.cpp.o: CMakeFiles/Data_Structures.dir/flags.make
CMakeFiles/Data_Structures.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Data_Structures.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Data_Structures.dir/main.cpp.o -c "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/main.cpp"

CMakeFiles/Data_Structures.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Data_Structures.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/main.cpp" > CMakeFiles/Data_Structures.dir/main.cpp.i

CMakeFiles/Data_Structures.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Data_Structures.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/main.cpp" -o CMakeFiles/Data_Structures.dir/main.cpp.s

# Object files for target Data_Structures
Data_Structures_OBJECTS = \
"CMakeFiles/Data_Structures.dir/main.cpp.o"

# External object files for target Data_Structures
Data_Structures_EXTERNAL_OBJECTS =

Data_Structures: CMakeFiles/Data_Structures.dir/main.cpp.o
Data_Structures: CMakeFiles/Data_Structures.dir/build.make
Data_Structures: Source_Files/libSource_Files.a
Data_Structures: CMakeFiles/Data_Structures.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Data_Structures"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Data_Structures.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Data_Structures.dir/build: Data_Structures

.PHONY : CMakeFiles/Data_Structures.dir/build

CMakeFiles/Data_Structures.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Data_Structures.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Data_Structures.dir/clean

CMakeFiles/Data_Structures.dir/depend:
	cd "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures" "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures" "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug" "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug" "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/CMakeFiles/Data_Structures.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Data_Structures.dir/depend
