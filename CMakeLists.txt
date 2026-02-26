cmake_minimum_required(VERSION 3.16)
project(CPPCourse)

set(CMAKE_CXX_STANDARD 17)

# Include headers
include_directories(include)

# Collect all source files
file(GLOB_RECURSE SOURCES "src/*.cpp")
list(APPEND SOURCES "${PROJECT_SOURCE_DIR}/main.cpp")


# Build the executable
add_executable(CPPCourse ${SOURCES}
        src/menu/menu.cpp
        include/menu/menu.h)

