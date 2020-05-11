//
// Created by Marc Abdallah on 5/10/2020.
//

#include "Tile.h"
#include <iostream>

int main()
{
    Tile* tile;

    tile = new Tile();

    bool w = tile->getWalkable();

    std::cout << w << std::endl;

    return 0;
}