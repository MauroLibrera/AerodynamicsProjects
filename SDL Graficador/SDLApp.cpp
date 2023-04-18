#include "SDLApp.hpp"

SDLApp::SDLApp()
{
    isRunning = true;
    window = NULL;
    renderer = NULL;
}

bool SDLApp::OnInit()
{
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
    {
        return false;
    }

    window = SDL_CreateWindow("Test Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);

    if (window != NULL)
    {
        renderer = SDL_CreateRenderer(window, -1, 0);
    }
    else
    {
        return false;
    }

    return true;
}

int SDLApp::OnExecute()
{
    SDL_Event event;

    if (OnInit() == false)
    {
        return -1;
    }

    while (isRunning)
    {
        while (SDL_PollEvent(&event) != 0)
        {
            OnEvent(&event);
        }

        OnLoop();
        OnRender();
    }

    OnExit();
    return 0;
}

void SDLApp::OnEvent(SDL_Event *event)
{
    if (event ->type == SDL_QUIT)
    {
        isRunning = false;
    }
}

void SDLApp::OnLoop()
{

}

void SDLApp::OnRender()
{
    // Set the background color to white
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);

    // Draw a red rectangle
    SDL_Rect fillRect = {150, 120, 300, 200};
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &fillRect);

    //Show the result
    SDL_RenderPresent(renderer);
}

void SDLApp::OnExit()
{
    SDL_DestroyWindow(window);
    window = NULL;
    SDL_Quit();
}
