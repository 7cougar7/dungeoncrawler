//
// Created by Marc Abdallah on 5/11/2020.
//

#pragma once
#include <string>

class Enemy{
    protected:
        //FixMe
        //SpriteDataType sprite;
        std::string name; //name of enemy
        std::string enemyTip; //caption or description of enemy when clicked on?
        int speed; //how many tiles the enemy can move in one movement
        int path; //predetermined path the enemy walks while it doesnt see you. data type could be changed later
        bool aware; //if the enemy knows where the player is
    public:
        explicit Enemy(std::string n = "null", std::string et = "null", int s = 1, int p = 0, bool a = false);

        std::string getName(){return name;}
        void setName(std::string name){this->name = name;}

        std::string getEnemyTip(){return enemyTip;}
        void setEnemyTip(std::string enemyTip){this->enemyTip = enemyTip;}

        int getSpeed(){return speed;}
        void setSpeed(int speed){this->speed = speed;}

        int getPath(){return path;}
        void setPath(int path){this->path = path;}

        bool getAware(){return aware;}
        void setAware(bool aware){this->aware = aware;}
};
