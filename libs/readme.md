# Static Library (installed in project) used
This was to make it easier for students and provide a quick way to get started.
A secondary, possibly better, version is to simply fetch the latest version at build.

## CMakeLists.txt file for git fetch:
````
# Set minimum version - I tested to 3.19 and it was fine so can change
cmake_minimum_required(VERSION 3.21)
# project name should be here
project(SampleProj)
include(FetchContent)

# Set the standard, need 14 or higher for this (not fully tested on 13)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# Still don't want a shared lib but static so change that
set(BUILD_SHARED_LIBS OFF)

# Declare our fetch repositories, names, and usage
FetchContent_Declare(
    SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.5.1
)

# Fetch and make our content available
FetchContent_MakeAvailable(SFML)

# add our subdirectory (where we've installed a static version of SFML) and directories to be searched with includes
# note: make sure to delete "docs" and "example" subdirectories after installing/fetch from source
#       they just take up extra space and are not used
# Subdirectories might be a bit off (if main repo changes significantly)

add_subdirectory(libs/SFML-2.5.1)
include_directories(
    .
    include
    libs/SFML-2.5.1/include
)

# we are going to build this as part of our main project so just need Project name here
add_executable(SampleProj main.cpp)

# Again - rather than adding a new, secondary, project we will build within our main project
# so just need project name as the link target
target_link_libraries(SampleProj sfml-graphics sfml-system)
````
