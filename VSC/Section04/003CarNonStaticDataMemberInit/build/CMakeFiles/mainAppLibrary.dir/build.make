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
CMAKE_SOURCE_DIR = C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section04\003CarNonStaticDataMemberInit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section04\003CarNonStaticDataMemberInit\build

# Include any dependencies generated for this target.
include CMakeFiles/mainAppLibrary.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mainAppLibrary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mainAppLibrary.dir/flags.make

CMakeFiles/mainAppLibrary.dir/car/Car.cpp.obj: CMakeFiles/mainAppLibrary.dir/flags.make
CMakeFiles/mainAppLibrary.dir/car/Car.cpp.obj: ../car/Car.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section04\003CarNonStaticDataMemberInit\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mainAppLibrary.dir/car/Car.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\mainAppLibrary.dir\car\Car.cpp.obj -c C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section04\003CarNonStaticDataMemberInit\car\Car.cpp

CMakeFiles/mainAppLibrary.dir/car/Car.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mainAppLibrary.dir/car/Car.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section04\003CarNonStaticDataMemberInit\car\Car.cpp > CMakeFiles\mainAppLibrary.dir\car\Car.cpp.i

CMakeFiles/mainAppLibrary.dir/car/Car.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mainAppLibrary.dir/car/Car.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section04\003CarNonStaticDataMemberInit\car\Car.cpp -o CMakeFiles\mainAppLibrary.dir\car\Car.cpp.s

# Object files for target mainAppLibrary
mainAppLibrary_OBJECTS = \
"CMakeFiles/mainAppLibrary.dir/car/Car.cpp.obj"

# External object files for target mainAppLibrary
mainAppLibrary_EXTERNAL_OBJECTS =

libmainAppLibrary.a: CMakeFiles/mainAppLibrary.dir/car/Car.cpp.obj
libmainAppLibrary.a: CMakeFiles/mainAppLibrary.dir/build.make
libmainAppLibrary.a: CMakeFiles/mainAppLibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section04\003CarNonStaticDataMemberInit\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmainAppLibrary.a"
	$(CMAKE_COMMAND) -P CMakeFiles\mainAppLibrary.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mainAppLibrary.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mainAppLibrary.dir/build: libmainAppLibrary.a

.PHONY : CMakeFiles/mainAppLibrary.dir/build

CMakeFiles/mainAppLibrary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\mainAppLibrary.dir\cmake_clean.cmake
.PHONY : CMakeFiles/mainAppLibrary.dir/clean

CMakeFiles/mainAppLibrary.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section04\003CarNonStaticDataMemberInit C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section04\003CarNonStaticDataMemberInit C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section04\003CarNonStaticDataMemberInit\build C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section04\003CarNonStaticDataMemberInit\build C:\Users\fpolo\Downloads\Franco\Courses\Udemy\UdemyCompleteModernCpp\VSC\Section04\003CarNonStaticDataMemberInit\build\CMakeFiles\mainAppLibrary.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mainAppLibrary.dir/depend

