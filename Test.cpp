//
// Created by Marc Abdallah on 5/10/2020.
//

#include "Tile.h"
#include <iostream>

int main()
{
    Tile tile;
    tile = Tile();
    double w = tile.getLight();
    std::cout << w << std::endl;
    return 0;
}