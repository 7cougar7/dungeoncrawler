#pragma once

/*
Created by Lets Make Games on July 12th, 2017
https://www.youtube.com/channel/UCAM9ZPgEIdeHAsmG50wqL1g
*/

#include "Dante's Crypt.h"

class Map
{
private:
	SDL_Rect src, dest;
	SDL_Texture* dirt;    //subject to change for Dante's Crypt
	SDL_Texture* grass;
	SDL_Texture* water;
	
	int map[20][25];



public:
	Map();
	~Map();

	void LoadMap(int arr[20][25]);
	void DrawMap();
};