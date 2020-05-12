//
// Created by Marc Abdallah on 5/10/2020.
//

#include "Tile.h"
#include "Enemy.h"
#include "Consumables.h"
#include <iostream>

int main()
{
    Tile tile;
        tile = Tile();
        double w = tile.getLight();
        std::cout << w << std::endl;

    Enemy enemy;
        int speed = enemy.getSpeed();
        std::cout << speed;

     Consumables apple = Consumables(3, 0, "bruh", 3);
        int duration = apple.getDuration();
        std::cout << duration;

    return 0;
}