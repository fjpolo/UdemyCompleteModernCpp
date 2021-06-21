# Install script for directory: C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/Section14

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/UdemyModernCPP")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "C:/mingw64/bin/objdump.exe")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/build/Section14/001std_array/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/build/Section14/002std_vector/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/build/Section14/003std_deque/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/build/Section14/004std_list/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/build/Section14/005std_set__std_multiset/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/build/Section14/006std_map__std_multimap/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/build/Section14/007unorderedcontainers/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/build/Section14/008stl_algorithms/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/build/Section14/009STLproject/cmake_install.cmake")
endif()

