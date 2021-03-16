cmake_minimum_required(VERSION 3.16)
project(Singleton)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_VERBOSE_MAKEFILE true)

if(OPTIMAZE)
    set(CMAKE_CXX_FLAGS "-O3 -Wall -Wextra")
else()
    set(CMAKE_CXX_FLAGS "-O0 -Wall -Wextra")
endif()

add_executable(Singleton main.cpp Singleton.cpp Singleton.h MeyersSingleton/MeyersSingleton.cpp MeyersSingleton/MeyersSingleton.h)