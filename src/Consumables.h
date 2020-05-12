//
// Created by Marc Abdallah on 5/11/2020.
//

#pragma once

#include "Item.h"
#include <string>

class Consumables : public Item{
    protected:
        int healthEffect;
        int manaEffect;
        std::string statusEffect;
        int duration;
    public:
        explicit Consumables(int hE = 0, int mE = 0, std::string sE = "null", int d = 0);

        int getHealthEffect(){return healthEffect;}
        void setHealthEffect(int healthEffect){this->healthEffect = healthEffect;}

        int getManaEffect(){return manaEffect;}
        void setManaEffect(int manaEffect){this->manaEffect = manaEffect;}

        std::string getStatusEffect(){return statusEffect;}
        void setStatusEffect(std::string statusEffect){this->statusEffect = statusEffect;}

        int getDuration(){return duration;}
        void setDuration(int duration){this->duration = duration;}
};
