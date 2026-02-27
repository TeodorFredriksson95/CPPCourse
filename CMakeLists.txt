cmake_minimum_required(VERSION 3.16)
project(CPPCourse)

set(CMAKE_CXX_STANDARD 17)

# Include headers
include_directories(include)

# Collect all source files automatically
set(PROJECT_HEADERS
        include/menu/menu.h
)
set(PROJECT_SOURCES
        main.cpp
        src/menu/menu.cpp
)

# Build executable
add_executable(CPPCourse ${PROJECT_SOURCES} ${PROJECT_HEADERS})
