/*
 *  Created by Tilo Garcia, Marc Abdallah, and Zachary Smith
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
    game = new Game();

    game->init("Engine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

    while (game->running())
    {
        game->eventHandler();
        game->update();
        game->render();
    }

    game->clean();

    return 0;
}