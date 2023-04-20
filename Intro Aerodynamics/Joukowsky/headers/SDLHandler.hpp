#ifndef SDL_HANDLER_H
#define SDL_HANDLER_H

#include <SDL2/SDL.h>

class SDLHandler
{
private:
    SDL_Window* pWindow;
    SDL_Renderer* pRenderer;

public:
    SDLHandler();

    int Ejecutar();

    bool Iniciar();
    void ManejoEventos();
    void Eventos(SDL_Event *event);

    void Bucle();

    void Render();
    void Salida();
};


#endif