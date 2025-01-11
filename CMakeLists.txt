cmake_minimum_required(VERSION 3.30)
project(1-15)

set(CMAKE_CXX_STANDARD 20)

add_executable(1-15
        1-15.cpp)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")