# https://stackoverflow.com/questions/13703647/how-to-properly-add-include-directories-with-cmake
# https://cmake.org/cmake/help/latest/guide/tutorial/index.html

# Minimum version of CMake
cmake_minimum_required(VERSION 3.12) # version can be different

# Project name
project(UdemyCourse) #name of your project

#
# general
#
#add_compile_definitions(MYDEFINE)
#add_subdirectory(googletest)


#
# GoogleTest - testRunner
#
#add_library(myBSPLibrary )
#set(mySOURCES) 
#include_directories(googletest/include) 
#include_directories(googlemock/include) 
#add_executable(testRunner ${adcBSPSOURCES}) 
#target_link_libraries(testRunner PRIVATE gtest) # link google test to this executable
#target_link_libraries(testRunner PRIVATE gmock) # link google mock to this executable

#
# Main App
#

# Add executable
add_executable(mainApp src/main.cpp)                 # add this executable
# Link libraries
#target_link_libraries(mainApp CommonLibrary)
