//
// Created by Marc Abdallah on 5/11/2020.
//

#include "Enemy.h"

Enemy::Enemy(std::string n, std::string et, int s, int p, bool a, int h) {
    name = n;
    enemyTip = et;
    speed = s;
    path = p;
    aware = a;
    health = h;
}