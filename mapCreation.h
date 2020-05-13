#pragma once

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include "Tile.h"

const int maxX = 50;
const int maxY = 50;

const int possibleDirections[4][2] = {
        {1,0},
        {-1,0},
        {0,1},
        {0,-1}
};

//extern std::vector<std::vector<Tile>> levelLayout(maxX, std::vector<Tile>(maxY));  //Outside Vector(x), Inside Vector(y)

int createSquare(int size, int xCoord, int yCoord);
int createLine(int xStart, int yStart, int xEnd, int yEnd, int thickness);
void createRooms(int number, int minSize, int maxSize);
void randomWalk(int startX, int startY, int steps);
void createLayout();
void connectRooms();
int initLevel();