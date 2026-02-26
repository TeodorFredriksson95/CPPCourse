cmake_minimum_required(VERSION 4.1)
project(CPPCourse)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Test)

add_executable(CPPCourse
        Test/Test.cpp
        Test/Test.h
        CPPCourse.cpp
        GuessANumber.cpp
        GuessANumber.h
        resource.h)
