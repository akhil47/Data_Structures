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
include Tests/CMakeFiles/Tests.dir/depend.make

# Include the progress variables for this target.
include Tests/CMakeFiles/Tests.dir/progress.make

# Include the compile flags for this target's objects.
include Tests/CMakeFiles/Tests.dir/flags.make

Tests/CMakeFiles/Tests.dir/RedBlackTreeTests.cpp.o: Tests/CMakeFiles/Tests.dir/flags.make
Tests/CMakeFiles/Tests.dir/RedBlackTreeTests.cpp.o: ../Tests/RedBlackTreeTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Tests/CMakeFiles/Tests.dir/RedBlackTreeTests.cpp.o"
	cd "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/Tests" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tests.dir/RedBlackTreeTests.cpp.o -c "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/Tests/RedBlackTreeTests.cpp"

Tests/CMakeFiles/Tests.dir/RedBlackTreeTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tests.dir/RedBlackTreeTests.cpp.i"
	cd "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/Tests" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/Tests/RedBlackTreeTests.cpp" > CMakeFiles/Tests.dir/RedBlackTreeTests.cpp.i

Tests/CMakeFiles/Tests.dir/RedBlackTreeTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tests.dir/RedBlackTreeTests.cpp.s"
	cd "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/Tests" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/Tests/RedBlackTreeTests.cpp" -o CMakeFiles/Tests.dir/RedBlackTreeTests.cpp.s

Tests/CMakeFiles/Tests.dir/AVLTreeTests.cpp.o: Tests/CMakeFiles/Tests.dir/flags.make
Tests/CMakeFiles/Tests.dir/AVLTreeTests.cpp.o: ../Tests/AVLTreeTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Tests/CMakeFiles/Tests.dir/AVLTreeTests.cpp.o"
	cd "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/Tests" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tests.dir/AVLTreeTests.cpp.o -c "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/Tests/AVLTreeTests.cpp"

Tests/CMakeFiles/Tests.dir/AVLTreeTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tests.dir/AVLTreeTests.cpp.i"
	cd "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/Tests" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/Tests/AVLTreeTests.cpp" > CMakeFiles/Tests.dir/AVLTreeTests.cpp.i

Tests/CMakeFiles/Tests.dir/AVLTreeTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tests.dir/AVLTreeTests.cpp.s"
	cd "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/Tests" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/Tests/AVLTreeTests.cpp" -o CMakeFiles/Tests.dir/AVLTreeTests.cpp.s

Tests/CMakeFiles/Tests.dir/PrefixTreeTests.cpp.o: Tests/CMakeFiles/Tests.dir/flags.make
Tests/CMakeFiles/Tests.dir/PrefixTreeTests.cpp.o: ../Tests/PrefixTreeTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Tests/CMakeFiles/Tests.dir/PrefixTreeTests.cpp.o"
	cd "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/Tests" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tests.dir/PrefixTreeTests.cpp.o -c "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/Tests/PrefixTreeTests.cpp"

Tests/CMakeFiles/Tests.dir/PrefixTreeTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tests.dir/PrefixTreeTests.cpp.i"
	cd "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/Tests" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/Tests/PrefixTreeTests.cpp" > CMakeFiles/Tests.dir/PrefixTreeTests.cpp.i

Tests/CMakeFiles/Tests.dir/PrefixTreeTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tests.dir/PrefixTreeTests.cpp.s"
	cd "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/Tests" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/Tests/PrefixTreeTests.cpp" -o CMakeFiles/Tests.dir/PrefixTreeTests.cpp.s

# Object files for target Tests
Tests_OBJECTS = \
"CMakeFiles/Tests.dir/RedBlackTreeTests.cpp.o" \
"CMakeFiles/Tests.dir/AVLTreeTests.cpp.o" \
"CMakeFiles/Tests.dir/PrefixTreeTests.cpp.o"

# External object files for target Tests
Tests_EXTERNAL_OBJECTS =

Tests/Tests: Tests/CMakeFiles/Tests.dir/RedBlackTreeTests.cpp.o
Tests/Tests: Tests/CMakeFiles/Tests.dir/AVLTreeTests.cpp.o
Tests/Tests: Tests/CMakeFiles/Tests.dir/PrefixTreeTests.cpp.o
Tests/Tests: Tests/CMakeFiles/Tests.dir/build.make
Tests/Tests: Tests/lib/googletest/libgtestd.a
Tests/Tests: Tests/lib/googletest/libgtest_maind.a
Tests/Tests: Source_Files/libSource_Files.a
Tests/Tests: Tests/lib/googletest/libgtestd.a
Tests/Tests: Tests/CMakeFiles/Tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Tests"
	cd "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/Tests" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Tests/CMakeFiles/Tests.dir/build: Tests/Tests

.PHONY : Tests/CMakeFiles/Tests.dir/build

Tests/CMakeFiles/Tests.dir/clean:
	cd "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/Tests" && $(CMAKE_COMMAND) -P CMakeFiles/Tests.dir/cmake_clean.cmake
.PHONY : Tests/CMakeFiles/Tests.dir/clean

Tests/CMakeFiles/Tests.dir/depend:
	cd "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures" "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/Tests" "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug" "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/Tests" "/Users/akhil/Library/Mobile Documents/com~apple~CloudDocs/Data_Structures/cmake-build-debug/Tests/CMakeFiles/Tests.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : Tests/CMakeFiles/Tests.dir/depend

