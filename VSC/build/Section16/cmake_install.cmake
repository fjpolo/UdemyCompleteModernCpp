# Install script for directory: C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/Section16

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
  include("C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/build/Section16/001Attributes/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/build/Section16/002FeatureTestMacros/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/build/Section16/003IfSwitchWithInit/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/build/Section16/004InlineVariables/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/build/Section16/005NestedNamespaces/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/build/Section16/006noexcept/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/build/Section16/007constexprLambda/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/build/Section16/008StructuredBindings/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/build/Section16/009ExpressionEvaluationOrder/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/fpolo/Downloads/Franco/Courses/Udemy/UdemyCompleteModernCpp/VSC/build/Section16/010MandatoryCopyElision/cmake_install.cmake")
endif()

