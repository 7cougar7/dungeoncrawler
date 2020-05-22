#pragma once

#include "resource.h"
#include "SDL.h"
#include "SDL_image.h"
#include <stdio.h>
#include <iostream>
#include <vector>

class ColliderComponent;

class Game {

private:
	bool isRunning;
	SDL_Window* window;
	int cnt = 0;


public:
	Game();
	~Game();

	void init(const char* title, int width, int height, bool fullScreen);

	void eventHandler();
	void update();
	void render();
	void clean();

	bool running() { return isRunning; }

	static void AddTile(int id, int x, int y);
	static SDL_Renderer* renderer;
	static SDL_Event event;
	static std::vector<ColliderComponent*> colliders;

};