cmake_minimum_required(VERSION 3.6)
project(Venom)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
set(SOURCE_FILES main.cpp)
add_executable(Venom ${SOURCE_FILES})