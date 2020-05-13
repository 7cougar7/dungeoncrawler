#pragma once

#include "resource.h"
#include "SDL.h"
#include <stdio.h>
#include <iostream>

class Game {

private:
	bool isRunning;
	SDL_Window* window;
	SDL_Renderer* renderer;


public:
	Game();
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullScreen);

	void eventHandler();
	void update();
	void render();
	void clean();

	bool running() { return isRunning; }

};