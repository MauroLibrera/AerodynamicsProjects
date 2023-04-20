#include "../headers/SDLHandler.hpp"

SDLHandler::SDLHandler()
{
    isRunning = true;
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

int SDLHandler::Ejecutar()
{
    SDL_Event evento;

    if (Iniciar() == false)
    {
        return -1;
    }
    
    while (isRunning)
    {
        while (SDL_PollEvent(&evento) != 0)
        {
            Eventos(&evento);
        }
        Bucle();
        Render();
    }
    Salida();
    return 0;
}

void SDLHandler::Eventos(SDL_Event *evento)
{
    if (evento -> type == SDL_QUIT)
    {
        isRunning = false;
    }
}

void SDLHandler::Bucle()
{

}

void SDLHandler::Render()
{
    // Set the background color to white
    SDL_SetRenderDrawColor(pRenderer, 0, 0, 0, 255);
    SDL_RenderClear(pRenderer);
}

void SDLHandler::Salida()
{
    SDL_DestroyWindow(pWindow);
    pWindow = NULL;
    SDL_Quit();
}