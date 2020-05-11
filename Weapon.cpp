//
// Created by spide on 5/11/2020.
//

#include <string>
#include "Weapon.h"

Weapon::Weapon()
{
    damage = 0.0;
    damageType = "null";
    critChance = 0.0;
    range = 0;
}

Weapon::Weapon(float d, std::string dT, double cC, int r)
{
    damage = d;
    damageType = dT;
    critChance = cC;
    range = r;
}
