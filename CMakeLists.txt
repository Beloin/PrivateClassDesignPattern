cmake_minimum_required(VERSION 3.10)
project(private_class)

set(CMAKE_CXX_STANDARD 14)

add_executable(private_class
        video/VideoData.cpp
        video/VideoData.h
        main.cpp video/VideoInterface.cpp video/VideoInterface.h video/VideoExternAPI.cpp video/VideoExternAPI.h)
