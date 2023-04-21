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

void SDLHandler::Render(float** x, float** y, int N)
{
    //std::cout <<"SDL "<< y[1][3] << std::endl;
    // Set the background color to black
    SDL_SetRenderDrawColor(pRenderer, 0, 0, 0, 150);
    SDL_RenderClear(pRenderer);

    // Color de línea
    SDL_SetRenderDrawColor(pRenderer, 255, 255, 255, 255);
    for (int i=0; i<2; i++)
    {
        //std::cout<<i<<std::endl;
        for (int j = 0; j < N; j++)
        {
            SDL_RenderDrawLine(pRenderer, static_cast<int>(x[i][j]), 
            static_cast<int>(y[i][j]), static_cast<int>(x[i][(j+1)%N]), 
            static_cast<int>(y[i][(j+1)%N]));

            //std::cout << j <<" "<< static_cast<int>(x[i][j]) <<" "<< static_cast<int>(y[i][j]) << std::endl; 
        }
    }
    SDL_RenderPresent(pRenderer);
}

void SDLHandler::Salida()
{
    SDL_DestroyWindow(pWindow);
    pWindow = NULL;
    SDL_Quit();
}