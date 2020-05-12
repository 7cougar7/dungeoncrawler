//
// Created by Marc Abdallah on 5/11/2020.
//

#include "Consumables.h"

Consumables::Consumables(int hE, int mE, std::string sE, int d){
    healthEffect = hE;
    manaEffect = mE;
    statusEffect = sE;
    duration = d;
}