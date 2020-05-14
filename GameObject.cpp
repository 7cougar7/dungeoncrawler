/*
Created by Lets Make Games on July 12th, 2017
https://www.youtube.com/channel/UCAM9ZPgEIdeHAsmG50wqL1g
*/


#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char* texturesheet, int x, int y)
{
	objTex = TextureManager::LoadTexture(texturesheet);

	xpos = x;
	ypos = y;
}

void GameObject::update()
{
	xpos++;
	ypos++;

	srcRect.h = 32;
	srcRect.w = 32;
	srcRect.x = 0;
	srcRect.y = 0;
	
	destRect.x = xpos;
	destRect.y = ypos;
	destRect.w = srcRect.w * 2;
	destRect.h = srcRect.h * 2;
}

void GameObject::render()
{
	SDL_RenderCopy(Game::renderer, objTex, &srcRect, &destRect);
}