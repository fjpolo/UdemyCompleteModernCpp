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
CMAKE_SOURCE_DIR = C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build

# Include any dependencies generated for this target.
include Section15/001Threads/CMakeFiles/001Threads.dir/depend.make

# Include the progress variables for this target.
include Section15/001Threads/CMakeFiles/001Threads.dir/progress.make

# Include the compile flags for this target's objects.
include Section15/001Threads/CMakeFiles/001Threads.dir/flags.make

Section15/001Threads/CMakeFiles/001Threads.dir/src/main.cpp.obj: Section15/001Threads/CMakeFiles/001Threads.dir/flags.make
Section15/001Threads/CMakeFiles/001Threads.dir/src/main.cpp.obj: ../Section15/001Threads/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Section15/001Threads/CMakeFiles/001Threads.dir/src/main.cpp.obj"
	cd /d C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build\Section15\001Threads && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\001Threads.dir\src\main.cpp.obj -c C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section15\001Threads\src\main.cpp

Section15/001Threads/CMakeFiles/001Threads.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/001Threads.dir/src/main.cpp.i"
	cd /d C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build\Section15\001Threads && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section15\001Threads\src\main.cpp > CMakeFiles\001Threads.dir\src\main.cpp.i

Section15/001Threads/CMakeFiles/001Threads.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/001Threads.dir/src/main.cpp.s"
	cd /d C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build\Section15\001Threads && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section15\001Threads\src\main.cpp -o CMakeFiles\001Threads.dir\src\main.cpp.s

# Object files for target 001Threads
001Threads_OBJECTS = \
"CMakeFiles/001Threads.dir/src/main.cpp.obj"

# External object files for target 001Threads
001Threads_EXTERNAL_OBJECTS =

Section15/001Threads/001Threads.exe: Section15/001Threads/CMakeFiles/001Threads.dir/src/main.cpp.obj
Section15/001Threads/001Threads.exe: Section15/001Threads/CMakeFiles/001Threads.dir/build.make
Section15/001Threads/001Threads.exe: Section15/001Threads/CMakeFiles/001Threads.dir/linklibs.rsp
Section15/001Threads/001Threads.exe: Section15/001Threads/CMakeFiles/001Threads.dir/objects1.rsp
Section15/001Threads/001Threads.exe: Section15/001Threads/CMakeFiles/001Threads.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 001Threads.exe"
	cd /d C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build\Section15\001Threads && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\001Threads.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Section15/001Threads/CMakeFiles/001Threads.dir/build: Section15/001Threads/001Threads.exe

.PHONY : Section15/001Threads/CMakeFiles/001Threads.dir/build

Section15/001Threads/CMakeFiles/001Threads.dir/clean:
	cd /d C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build\Section15\001Threads && $(CMAKE_COMMAND) -P CMakeFiles\001Threads.dir\cmake_clean.cmake
.PHONY : Section15/001Threads/CMakeFiles/001Threads.dir/clean

Section15/001Threads/CMakeFiles/001Threads.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section15\001Threads C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build\Section15\001Threads C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build\Section15\001Threads\CMakeFiles\001Threads.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Section15/001Threads/CMakeFiles/001Threads.dir/depend
