cmake_minimum_required(VERSION 3.16)
project(CPPCourse)

set(CMAKE_CXX_STANDARD 17)

# Include headers
include_directories(include)

# Collect all source files automatically
set(PROJECT_HEADERS
        include/menu/menu.h
        include/Exercises/Week1/Level0.h
        include/Exercises/Week1/Level1.h
        include/Exercises/Week1/Level2.h
        include/Exercises/Week2/W2_Level1.h
        src/Snake/TestFile.cpp
        include/Snake/TestFile.h
)
set(PROJECT_SOURCES
        main.cpp
        src/menu/menu.cpp
        src/Exercises/Week1/Level0.cpp
        include/Exercises/Week1/Level0.h
        src/Exercises/Week1/Level1.cpp
        include/Exercises/Week1/Level1.h
        src/Exercises/Week1/Level2.cpp
        include/Exercises/Week1/Level2.h
        src/Exercises/Week1/Level3.cpp
        include/Exercises/Week1/Level3.h
        src/Exercises/Week1/Level4.cpp
        include/Exercises/Week1/Level4.h
        src/Exercises/Week1/Level5.cpp
        include/Exercises/Week1/Level5.h
        src/Exercises/Week1/Level6.cpp
        include/Exercises/Week1/Level6.h
        src/Exercises/Week2/W2Level0.cpp
        include/Exercises/Week2/W2Level0.h
        src/Exercises/Week2/W2_Level1.cpp
        include/Exercises/Week2/W2_Level1.h
        src/Exercises/Week2/W2_Level2.cpp
        include/Exercises/Week2/W2_Level2.h
        src/Exercises/Week2/W2_References_Level0.cpp
        include/Exercises/Week2/W2_References_Level0.h
        src/Exercises/Week2/W2_References_Level1.cpp
        include/Exercises/Week2/W2_References_Level1.h
        src/Exercises/Week2/W2_Pointers_Level0.cpp
        include/Exercises/Week2/W2_Pointers_Level0.h
        src/Exercises/Week2/W2_Pointers_Level1.cpp
        include/Exercises/Week2/W2_Pointers_Level1.h
        src/Exercises/Week2/W2_Pointers_Level2.cpp
        include/Exercises/Week2/W2_Pointers_Level2.h
        src/Exercises/Week2/W2_FileIO_Level0.cpp
        include/Exercises/Week2/W2_FileIO_Level0.h
        include/Exercises/Week2/W2_FileIO_Level1.h
        src/Exercises/Week2/W2_FileIO_Level1.cpp
        include/Exercises/Week2/W2_FileIO_Level2.h
        src/Exercises/Week2/W2_FileIO_Level2.cpp
        src/Snake/Vec2.cpp
        include/Snake/Vec2.h
        src/Snake/Player.cpp
        include/Snake/Player.h
        src/Snake/Grid.cpp
        include/Snake/Grid.h
        src/Snake/Game.cpp
        include/Snake/Game.h
        src/Snake/TestFile.cpp
        include/Snake/TestFile.h
)

# Build executable
add_executable(CPPCourse ${PROJECT_SOURCES} ${PROJECT_HEADERS})
