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
include Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/depend.make

# Include the progress variables for this target.
include Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/progress.make

# Include the compile flags for this target's objects.
include Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/flags.make

Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/src/main.cpp.obj: Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/flags.make
Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/src/main.cpp.obj: ../Section15/003this_thread/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/src/main.cpp.obj"
	cd /d C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build\Section15\003this_thread && C:\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Section15_003this_thread.dir\src\main.cpp.obj -c C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section15\003this_thread\src\main.cpp

Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Section15_003this_thread.dir/src/main.cpp.i"
	cd /d C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build\Section15\003this_thread && C:\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section15\003this_thread\src\main.cpp > CMakeFiles\Section15_003this_thread.dir\src\main.cpp.i

Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Section15_003this_thread.dir/src/main.cpp.s"
	cd /d C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build\Section15\003this_thread && C:\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section15\003this_thread\src\main.cpp -o CMakeFiles\Section15_003this_thread.dir\src\main.cpp.s

# Object files for target Section15_003this_thread
Section15_003this_thread_OBJECTS = \
"CMakeFiles/Section15_003this_thread.dir/src/main.cpp.obj"

# External object files for target Section15_003this_thread
Section15_003this_thread_EXTERNAL_OBJECTS =

Section15/003this_thread/Section15_003this_thread.exe: Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/src/main.cpp.obj
Section15/003this_thread/Section15_003this_thread.exe: Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/build.make
Section15/003this_thread/Section15_003this_thread.exe: Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/linklibs.rsp
Section15/003this_thread/Section15_003this_thread.exe: Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/objects1.rsp
Section15/003this_thread/Section15_003this_thread.exe: Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Section15_003this_thread.exe"
	cd /d C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build\Section15\003this_thread && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Section15_003this_thread.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/build: Section15/003this_thread/Section15_003this_thread.exe

.PHONY : Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/build

Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/clean:
	cd /d C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build\Section15\003this_thread && $(CMAKE_COMMAND) -P CMakeFiles\Section15_003this_thread.dir\cmake_clean.cmake
.PHONY : Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/clean

Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section15\003this_thread C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build\Section15\003this_thread C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\build\Section15\003this_thread\CMakeFiles\Section15_003this_thread.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Section15/003this_thread/CMakeFiles/Section15_003this_thread.dir/depend

