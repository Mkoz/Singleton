cmake_minimum_required(VERSION 3.16)
project(Singleton)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS "-O0 -Wall -Wextra")

add_executable(Singleton main.cpp Singleton.cpp Singleton.h)