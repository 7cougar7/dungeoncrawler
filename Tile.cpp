//
// Created by Zach on 5/11/2020.
//

#include "Tile.h"

Tile::Tile()
{
    walkable = false;
    solid = false;
    occupied = false;
    hasEnemy = false;
    hasItem = false;
    hazard = false;
    light = 0.0;
}

Tile::Tile(bool w, bool s, bool o, bool hE, bool hI, bool haz, double l)
{
    walkable = w;
    solid = s;
    occupied = o;
    hasEnemy = hE;
    hasItem = hI;
    hazard = haz;
    light = l;
}
