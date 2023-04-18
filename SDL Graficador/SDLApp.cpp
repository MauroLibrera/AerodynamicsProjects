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
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    //Draw Grid
    //drawGrid();

    // Draw axis
    drawAxes();

    //Show the result
    SDL_RenderPresent(renderer);
}

void SDLApp::OnExit()
{
    SDL_DestroyWindow(window);
    window = NULL;
    SDL_Quit();
}


void SDLApp::drawAxes() {
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
    SDL_RenderDrawLine(renderer, 0, 240, 640, 240); // X-Axis
    for (int x = 0; x <= 320; x += 50) {
        SDL_RenderDrawLine(renderer, 320 + x, 240 - 5, 320 + x, 240 + 5);
        SDL_RenderDrawLine(renderer, 320 - x, 240 - 5, 320 - x, 240 + 5);
    }

    SDL_RenderDrawLine(renderer, 320, 0, 320, 480); // Y-Axis
    for (int y = 0; y <= 240; y += 50) {
        SDL_RenderDrawLine(renderer, 320 - 5, 240 + y, 320 + 5, 240 + y);
        SDL_RenderDrawLine(renderer, 320 - 5, 240 - y, 320 + 5, 240 - y);
    }
}

void SDLApp::drawGrid()
{
    SDL_SetRenderDrawColor(renderer, 150, 150, 150, 255);
    for (int x = -320; x <= 320; x += 10) {
        SDL_RenderDrawLine(renderer, 320 + x, 0, 320 + x, 480);
    }
    for (int y = -240; y <= 240; y += 10) {
        SDL_RenderDrawLine(renderer, 0, 240 + y, 640, 240 + y);
    }
}