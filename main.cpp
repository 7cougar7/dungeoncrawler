/*
 Created by Tilo Garcia, Marc Abdallah, and Zachary Smith, and Let's Make Games
 https://www.youtube.com/channel/UCAM9ZPgEIdeHAsmG50wqL1g
 */

#include <d2d1.h>
#include <iostream>
#include "Dante's Crypt.h"

//#include "mapCreation.h"
 //using namespace std;

Game* game = nullptr;


INT WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    PSTR lpCmdLine, INT nCmdShow)
{
    const int FPS = 60;
    const int frameDelay = 1000 / FPS;

    Uint32 frameStart;
    int frameTime;


    game = new Game();

    game->init("Dante's Crypt", 800, 640, false);

    while (game->running())
    {

        frameStart = SDL_GetTicks();

        game->eventHandler();
        game->update();
        game->render();

        frameTime = SDL_GetTicks() - frameStart;

        if (frameDelay > frameTime)
        {
            SDL_Delay(frameDelay - frameTime);
        }
    }

    game->clean();

    return 0;
}