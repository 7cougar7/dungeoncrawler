//
// Created by Zach on 5/11/2020.
//

#include <string>
#include "Item.h"

Item::Item()
{
    rarity = "null";
    tooltip = "null";
    name = "null";
}

Item::Item(std::string r, std::string t, std::string n)
{
    rarity = r;
    tooltip = t;
    name = n;
}
