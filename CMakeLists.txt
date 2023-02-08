# Set minimum version - I tested to 3.17 and it was fine so can change
cmake_minimum_required(VERSION 3.21)
# project name should be here
project(SampleProj)

# Set the standard, need 14 or higher for this (not fully tested on 13)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# add our subdirectory (where we've installed a static version of SFML) and directories to be searched with includes
# note: could use a git Fetch here but want static so all students are the same
# 2nd note: make sure to delete "docs" and "example" subdirectories after installing/fetch from source
#           they just take up extra space and are not used
add_subdirectory(libs/SFML-2.5.1)
include_directories(.
        include
        libs/SFML-2.5.1/include)

# we are going to build this as part of our main project so just need Project name here
add_executable(SampleProj
        main.cpp gameobjects/Ball.cpp gameobjects/Ball.h gameobjects/Paddle.cpp gameobjects/Paddle.h gameobjects/Wall.cpp gameobjects/Wall.h gameobjects/Menu.cpp gameobjects/Menu.h)

# Again - rather than adding a new, secondary, project we will build within our main project
# so just need project name as the link target
target_link_libraries(SampleProj sfml-graphics sfml-system)