//
// Created by 7cougar7 on 5/11/2020.
//

#ifndef DUNGEONCRAWLER_TILE_H
#define DUNGEONCRAWLER_TILE_H
class Tile{
    protected:
        //FixMe
        //SomeDataType texture;
        bool walkable; //Able
        bool solid;
        bool occupied;
        bool hasEnemy;
        bool hasItem;
        bool hazard;
        double light;
        //FixMe
        //Enemy enemy;
        //Item item;
    public:
        Tile();
        Tile(bool w, bool s, bool o, bool hE, bool hI, bool haz, bool l);
        ~Tile();

    bool getWalkable() {
        return walkable;
    }
    void setWalkable(bool walkable) {
        Tile::walkable = walkable;
    }
    bool getSolid() {
        return solid;
    }
    void setSolid(bool solid) {
        Tile::solid = solid;
    }
    bool getOccupied() {
        return occupied;
    }
    void setOccupied(bool occupied) {
        Tile::occupied = occupied;
    }
    bool getHasEnemy() {
        return hasEnemy;
    }
    void setHasEnemy(bool hasEnemy) {
        Tile::hasEnemy = hasEnemy;
    }
    bool getHasItem() {
        return hasItem;
    }
    void setHasItem(bool hasItem) {
        Tile::hasItem = hasItem;
    }
    bool getHazard() {
        return hazard;
    }
    void setHazard(bool hazard) {
        Tile::hazard = hazard;
    }
    double getLight() {
        return light;
    }
    void setLight(double light) {
        Tile::light = light;
    }
};

#endif //DUNGEONCRAWLER_TILE_H
