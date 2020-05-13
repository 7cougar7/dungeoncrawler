cmake_minimum_required(VERSION 3.14)
project(dungeoncrawler)

set(CMAKE_CXX_STANDARD 14)

add_executable(DungeonCrawler main.cpp Tile.cpp mapCreation.cpp)
add_executable(Test Test.cpp)
add_executable(mapCreation mapCreation.cpp Tile.cpp Tile.h)

add_executable(Engine Game.cpp main.cpp)

