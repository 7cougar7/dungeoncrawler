//
// Created by 7cougar7 on 5/11/2020.
//

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "Tile.h"

const int possibleDirections[4][2] = {
        {1,0},
        {-1,0},
        {0,1},
        {0,-1}
};
const int maxX = 20;
const int maxY = 20;
Tile *path = new Tile('@',true,true,false,false,false,false,1.0);

std::vector<std::vector<Tile>> levelLayout(maxX ,std::vector<Tile> (maxY)); //Outside Vector(x), Inside Vector(y)

//Size = length of each side
//xCoord/yCoord = bottom left corner coordinates
//Success = 0; Fail = 1
int createSquare(int size, int xCoord, int yCoord) {
    if(xCoord+size > maxX || yCoord+size > maxY){
        return 1;
    }
    for(int x = yCoord-1; x < yCoord+size-1; x++){
        for (int y = xCoord-1; y < xCoord+size-1; y++) {
            levelLayout[x][y] = *path;
        }
    }
    return 0;
}

int main(){
    srand(time(NULL));
//    for(int i=0;i<15;i++) {
//        levelLayout[rand() % maxX][rand() % maxY] = *path;
//    }
    levelLayout[0][0] = *path;
    createSquare(6,maxX/2-2,maxY/2-2);
    for (int x = maxY-1; x >= 0; x--) {
        for (int y = 0; y < maxX; y++){
            if(levelLayout[x][y].getSymbol() != '@'){
                std::cout << "x";
            }else{
                std::cout << levelLayout[x][y].getSymbol();
            }
            //std::cout<< " ";
        }
        std::cout << "\n";
    }
    return 0;
};
