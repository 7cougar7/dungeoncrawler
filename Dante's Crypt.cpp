// Dante's Crypt.cpp : Defines the entry point for the application.
//

/*
Created by Lets Make Games in July 2017, edited by Zachary Smith in 2020
https://www.youtube.com/channel/UCAM9ZPgEIdeHAsmG50wqL1g
*/


//#include "framework.h"
#include "Dante's Crypt.h"
#include "TextureManager.h"
#include "Map.h"
#include "Components.h"
#include "Vector2D.h"

Map* map;
Manager manager;

SDL_Renderer* Game::renderer = nullptr;
SDL_Event Game::event;

auto& player(manager.addEntity());

Game::Game()
{}

Game::~Game()
{}

void Game::init(const char* title, int width, int height, bool fullscreen)
{
    int flags = 0;
    if (fullscreen)
    {
        flags = SDL_WINDOW_FULLSCREEN;
    }

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        //std::cout << "Subsystems Initialized" << std::endl;

        window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, flags);
        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer)
        {
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
            std::cout << "Window created" << std::endl;
        }
        isRunning = true;
    }
    else
    {
        isRunning = false;
    }

    /*SDL_Surface* tmpSurface = IMG_Load("logo1.png");
    playerTex = SDL_CreateTextureFromSurface(renderer, tmpSurface);
    SDL_FreeSurface(tmpSurface); */

    map = new Map();


    player.addComponent<TransformComponent>();
    player.addComponent<SpriteComponent>("player.png");
    player.addComponent<KeyboardController>();
    
}

void Game::eventHandler()
{

    SDL_PollEvent(&event);
    switch (event.type)
    {
    case SDL_QUIT:
        isRunning = false;
        break;
    default:
        break;
    }
}

void Game::update()
{
    manager.refresh();
    manager.update();
}

void Game::render()
{
    SDL_RenderClear(renderer);
    map->DrawMap();
    
    manager.draw();
    SDL_RenderPresent(renderer);
}

void Game::clean()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}