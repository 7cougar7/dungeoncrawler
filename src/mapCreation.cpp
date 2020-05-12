//
// Created by 7cougar7 on 5/11/2020.
//

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include "Tile.h"

const int possibleDirections[4][2] = {
        {1,0},
        {-1,0},
        {0,1},
        {0,-1}
};
const int maxX = 50;
const int maxY = 50;
Tile *path = new Tile('@',true,true,false,false,false,false,1.0);

std::vector<std::vector<Tile>> levelLayout(maxX ,std::vector<Tile> (maxY)); //Outside Vector(x), Inside Vector(y)

//Size = length of each side
//xCoord/yCoord = bottom left corner coordinates
//Success = 0; Fail = 1
int createSquare(int size, int xCoord, int yCoord) {
    if(xCoord+size > maxX || yCoord+size > maxY || xCoord < 0 || yCoord < 0){
        return 1;
    }
    for(int x = yCoord-1; x < yCoord+size-1; x++){
        for (int y = xCoord-1; y < xCoord+size-1; y++) {
            levelLayout[x][y] = *path;
        }
    }
    return 0;
}

int createLine(int xStart, int yStart, int xEnd, int yEnd){
    if(xStart > maxX || yStart > maxY || xEnd > maxX || yEnd > maxY
        || xStart < 0 || yStart < 0 || xEnd < 0 || yEnd < 0){
            return 1;
    }
    if(xStart == xEnd){ //Vertical Line
        for(int y = yStart; y<abs(yEnd-yStart)+2; y++){
            levelLayout[y][xStart] = *path;
        }
    } else if(yStart == yEnd){ //Horizontal Line
        for(int x = xStart; x <abs(xEnd-xStart)+2; x++){
            levelLayout[yStart][x] = *path;
        }
    } else { //Diagonal Line
        int xDis = xEnd-xStart;
        int yDis = yEnd-yStart;
        double xAbsDis = abs(xEnd-xStart);
        double yAbsDis = abs(yEnd-yStart);
        int xSign = 1;
        if(xDis < 0){ xSign = -1;}
        int ySign = 1;
        if(yDis < 0){ ySign = -1;}
        int x = xStart;
        int y = yStart;
        levelLayout[y][x] = *path;
        for (int ix = 0, iy = 0; ix < xAbsDis || iy < yAbsDis;) {
            if ((0.5+ix) / xAbsDis < (0.5+iy) / yAbsDis) {
                // next step is horizontal
                x += xSign;
                ix++;
            } else {
                // next step is vertical
                y += ySign;
                iy++;
            }
            levelLayout[y][x] = *path;
        }
    }
    return 0;
}

int main(){
    srand(time(NULL));
    createSquare(6,maxX/2-2,maxY/2-2);
    createLine(20,20,5,5);
    for (int x = maxY-1; x >= 0; x--) {
        for (int y = 0; y < maxX; y++){
            if(levelLayout[x][y].getSymbol() != '@'){
                std::cout << "x";
            }else{
                std::cout << levelLayout[x][y].getSymbol();
            }
        }
        std::cout << "\n";
    }
    return 0;
};
