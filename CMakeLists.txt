cmake_minimum_required(VERSION 3.27)
project(TheMonk___CopySave_10_)

set(CMAKE_CXX_STANDARD 17)

add_executable(TheMonk___CopySave_10_ main.cpp
        emptyRoom.h
        
        gameGUI.h
        monk.h
        monster.h
        monsterRoom.h
        room.h
        treasureRoom.h
        emptyRoom.cpp
        
        gameGUI.cpp
        monk.cpp
        monster.cpp
        monsterRoom.cpp
        room.cpp
        treasureRoom.cpp
        difficulty.h
        difficulty.cpp
)
