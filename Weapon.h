//
// Created by Zach on 5/11/2020.
//
// A possible implementation of the Weapon class, using inheritance

#pragma once

#include "Item.h"

class Weapon : public Item
{
protected:
    float damage;
    std::string damageType;
    //int durability ??
    double critChance; //0.0 - 0.1
    int range;
public:
    Weapon(std::string r = "null", std::string t = "null", std::string n = "null", float d = 0.0, std::string dT = "null", double cC = 0.0, int rng = 0)
        : Item{ r, t, n }
    {}

    float getDamage() { return damage; }
    void setDamage(float damage) { Weapon::damage = damage; }
    std::string getDamageType() { return damageType; }
    void setDamageType(std::string dT) { damageType = dT; }
    double getCritChance() { return critChance; }
    void setCritChance(double cC) { critChance = cC; }
    int getRange() { return range; }
    void setRange(int range) { this->range = range; }
};
