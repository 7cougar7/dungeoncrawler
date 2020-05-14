/*
Created by Lets Make Games on July 3rd, 2017
https://www.youtube.com/channel/UCAM9ZPgEIdeHAsmG50wqL1g
*/


#pragma once

#include "Dante's Crypt.h"

class GameObject
{
private:
	int xpos;
	int ypos;

	SDL_Texture* objTex;
	SDL_Rect srcRect, destRect;

public:
	GameObject(const char* texturesheet, int x, int y);
	~GameObject();

	void update();
	void render();

};