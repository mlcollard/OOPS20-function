# @file CMakeLists.txt
# 
# CMake files for functional decomposition examples

cmake_minimum_required(VERSION 3.10)

# project info
project(Functions)

# force release debug since used for demonstration
set(CMAKE_BUILD_TYPE Debug)

# C++17 standard
set(CMAKE_CXX_STANDARD 17)

# Assume each *_d.cpp file is a separate application with an
# associated *.hpp and *.cpp, e.g., function.hpp, function.cpp, function_d.cpp
file(GLOB APPLICATIONS "*.hpp")

# Generate executable for each application
foreach(APP ${APPLICATIONS})

    # Use basename (no path, no extension) of .cpp file for application name
    get_filename_component(APPBASENAME "${APP}" NAME_WLE)

    # Application is based on .cpp file only
    add_executable(${APPBASENAME} ${APPBASENAME}_d.cpp ${APPBASENAME}.cpp)

endforeach()
