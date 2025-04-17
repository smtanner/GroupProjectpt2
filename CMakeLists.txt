cmake_minimum_required(VERSION 3.29)
project(GroupProjectpt2)

set(CMAKE_CXX_STANDARD 20)

add_executable(GroupProjectpt2
        Creature.h
        Hero.h
        Monster.h
        Boss.h
        Army.h
        Turn.h
        Game.cpp
)
