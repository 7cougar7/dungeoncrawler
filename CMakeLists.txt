cmake_minimum_required(VERSION 3.14)
project(dungeoncrawler)

set(CMAKE_CXX_STANDARD 14)

add_executable(DungeonCrawler src/main.cpp)
add_executable(Enemy src/Enemy.cpp)
add_executable(Tile src/Tile.cpp)
add_executable(Item src/Item.cpp)
add_executable(Consumables src/Consumables.cpp)
add_executable(Weapon src/Weapon.cpp)

add_executable(Test src/Test.cpp src/Tile.cpp src/Enemy.cpp src/Item.cpp src/Weapon.cpp src/Consumables.cpp)

