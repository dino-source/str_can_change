cmake_minimum_required(VERSION 3.30.0)
project("str_can_change" VERSION 0.0.1
    DESCRIPTION "str_can_change"
    LANGUAGES CXX)

# Disable response files
set(CMAKE_CXX_USE_RESPONSE_FILE_FOR_INCLUDES OFF)

# Enable C++23 compiler support
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Update the submodules here
include(cmake/UpdateSubmodules.cmake)

# Enable testing for this project
include(CTest)

# Add subdirectories with code
add_subdirectory(external)
add_subdirectory(test)
add_subdirectory(src)
