#pragma once

#include "resource.h"
#include "SDL.h"
#include "SDL_image.h"
#include <stdio.h>
#include <iostream>

class Game {

private:
	bool isRunning;
	SDL_Window* window;
	//SDL_Renderer* renderer;
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

	static SDL_Renderer* renderer;
	static SDL_Event event;

};