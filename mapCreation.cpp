//
// Created by 7cougar7 on 5/11/2020.
//

#include "mapCreation.h"

Tile* path = new Tile('@', true, true, false, false, false, false, 1.0);

std::vector<std::vector<Tile>> levelLayout(maxX, std::vector<Tile>(maxY));  //Outside Vector(x), Inside Vector(y)

//Size = length of each side
//xCoord/yCoord = bottom left corner coordinates
//Success = 1; Fail = 0
int createSquare(int size, int xCoord, int yCoord) {
    if (xCoord + size > maxX || yCoord + size > maxY || xCoord < 0 || yCoord < 0) {
        return 0;
    }
    int count = 0;
    for (int x = yCoord - 1; x < yCoord + size - 1; x++) {
        for (int y = xCoord - 1; y < xCoord + size - 1; y++) {
            levelLayout[x][y] = *path;
            count++;
        }
    }
    std::cout << count << std::endl;
    return 1;
}

int createLine(int xStart, int yStart, int xEnd, int yEnd, int thickness) {
    if (xStart > maxX || yStart > maxY || xEnd > maxX || yEnd > maxY
        || xStart < 0 || yStart < 0 || xEnd < 0 || yEnd < 0) {
        return 1;
    }
    if (xStart == xEnd) { //Vertical Line
        for (int y = yStart; y < abs(yEnd - yStart) + 2; y++) {
            for (int t = 0; t < thickness; t++) {
                levelLayout[y][xStart + t] = *path;
            }
        }
    }
    else if (yStart == yEnd) { //Horizontal Line
        for (int x = xStart; x < abs(xEnd - xStart) + 2; x++) {
            for (int t = 0; t < thickness; t++) {
                levelLayout[yStart + t][x] = *path;
            }
        }
    }
    else if (thickness == 1) { //Diagonal Line
        int xDis = xEnd - xStart;
        int yDis = yEnd - yStart;
        double xAbsDis = abs(xEnd - xStart);
        double yAbsDis = abs(yEnd - yStart);
        int xSign = 1;
        if (xDis < 0) { xSign = -1; }
        int ySign = 1;
        if (yDis < 0) { ySign = -1; }
        int x = xStart;
        int y = yStart;
        levelLayout[y][x] = *path;
        for (int ix = 0, iy = 0; ix < xAbsDis || iy < yAbsDis;) {
            if ((0.5 + ix) / xAbsDis < (0.5 + iy) / yAbsDis) {
                // next step is horizontal
                x += xSign;
                ix++;
            }
            else {
                // next step is vertical
                y += ySign;
                iy++;
            }
            levelLayout[y][x] = *path;
        }
    }
    else {
        for (int t = 0; t < thickness; t++) {
            createLine(xStart + t, yStart, xEnd + t, yEnd, 1);
        }
    }

    return 0;
}

void randomWalk(int startX, int startY, int steps) {
    levelLayout[startY][startX] = *path;
    int x = startX;
    int y = startY;
    for (int s = 0; s < steps; s++) {
        int r = rand() % 4;
        if (r == 0) { //move right
            levelLayout[y][x++] = *path;
        } //move left
        else if (r == 1) {
            levelLayout[y][x--] = *path;
        }
        else if (r == 2) { //move up
            levelLayout[y++][x] = *path;
        }
        else { //move down
            levelLayout[y--][x] = *path;
        }
    }
}

void createRooms(int number, int minSize, int maxSize) {
    int i = 0;
    while (i < number) {
        createSquare(rand() % (maxSize - minSize) + minSize, rand() % maxX, rand() % maxY);
        i++;
    }
}

//create central room, random walks to create rooms, add dead ends
void createLayout() {
    //FIXME
}


void connectRooms() {
    //FIXME
}

int initLevel() {
    srand(time(NULL));
    //createSquare(8,20,10);
    //while(1) {
    //createRooms(5, 3, 7);
    //createLine(24, 5, 12, 28, 3);
    //createLine(12, 2, 12, 9, 1);
    //createLine(2, 3, 8, 3, 1);
    randomWalk(25, 25, 15);
    for (int x = maxY - 1; x >= 0; x--) {
        for (int y = 0; y < maxX; y++) {
            if (levelLayout[x][y].getSymbol() != '@') {
                std::cout << "x";
            }
            else {
                std::cout << levelLayout[x][y].getSymbol();
            }
        }
        std::cout << "\n";
        //}
    }
    return 0;
};