# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = C:\CMake\bin\cmake.exe

# The command to remove a file.
RM = C:\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section08\006UserDefinedLiterals

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section08\006UserDefinedLiterals\build

# Include any dependencies generated for this target.
include CMakeFiles/mainApp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mainApp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mainApp.dir/flags.make

CMakeFiles/mainApp.dir/src/main.cpp.obj: CMakeFiles/mainApp.dir/flags.make
CMakeFiles/mainApp.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section08\006UserDefinedLiterals\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mainApp.dir/src/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\mainApp.dir\src\main.cpp.obj -c C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section08\006UserDefinedLiterals\src\main.cpp

CMakeFiles/mainApp.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mainApp.dir/src/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section08\006UserDefinedLiterals\src\main.cpp > CMakeFiles\mainApp.dir\src\main.cpp.i

CMakeFiles/mainApp.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mainApp.dir/src/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section08\006UserDefinedLiterals\src\main.cpp -o CMakeFiles\mainApp.dir\src\main.cpp.s

# Object files for target mainApp
mainApp_OBJECTS = \
"CMakeFiles/mainApp.dir/src/main.cpp.obj"

# External object files for target mainApp
mainApp_EXTERNAL_OBJECTS =

mainApp.exe: CMakeFiles/mainApp.dir/src/main.cpp.obj
mainApp.exe: CMakeFiles/mainApp.dir/build.make
mainApp.exe: CMakeFiles/mainApp.dir/linklibs.rsp
mainApp.exe: CMakeFiles/mainApp.dir/objects1.rsp
mainApp.exe: CMakeFiles/mainApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section08\006UserDefinedLiterals\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mainApp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mainApp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mainApp.dir/build: mainApp.exe

.PHONY : CMakeFiles/mainApp.dir/build

CMakeFiles/mainApp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\mainApp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/mainApp.dir/clean

CMakeFiles/mainApp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section08\006UserDefinedLiterals C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section08\006UserDefinedLiterals C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section08\006UserDefinedLiterals\build C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section08\006UserDefinedLiterals\build C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section08\006UserDefinedLiterals\build\CMakeFiles\mainApp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mainApp.dir/depend

