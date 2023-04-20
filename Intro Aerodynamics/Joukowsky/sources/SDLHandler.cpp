#include "../headers/SDLHandler.hpp"

SDLHandler::SDLHandler()
{
    pWindow = NULL;
    pRenderer = NULL;
}

bool SDLHandler::Iniciar()
{
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
    {
        return false;
    }

    pWindow = SDL_CreateWindow("Test Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
    800, 600, SDL_WINDOW_SHOWN);

    if (pWindow != NULL)
    {
        pRenderer = SDL_CreateRenderer(pWindow,-1,0);
    }
    else
    {
        return false;
    }

    return true;
}



void SDLHandler::Eventos(SDL_Event *evento)
{
}

void SDLHandler::Bucle()
{

}

void SDLHandler::Render()
{
    // Set the background color to white
    SDL_SetRenderDrawColor(pRenderer, 0, 0, 255, 255);
    SDL_RenderClear(pRenderer);
}

void SDLHandler::Salida()
{
    SDL_DestroyWindow(pWindow);
    pWindow = NULL;
    SDL_Quit();
}