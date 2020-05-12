//
// Created by Zach on 5/11/2020.

// A possible implementation of the Item class
//

#pragma once
#include <string>

class Item
{
protected:
    std::string rarity; //could be changed to a stuct data type
    std::string tooltip;
    std::string name;
    //FIXME
    //T texture;
public:
    Item();
    Item(std::string r, std::string t, std::string n);

    std::string getRarity() { return rarity; }
    void setRarity(std::string rarity) { this->rarity = rarity; }

    std::string getTooltip() { return tooltip; }
    void setTooltip(std::string t) { tooltip = t; }

    std::string getName() { return name; }
    void setName(std::string name) { this->name = name; }
};