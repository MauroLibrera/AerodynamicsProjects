#include "../headers/JouApp.hpp"

JouApp::JouApp()
{
    ejecutando = true;
    App_SDL = NULL;
}

bool JouApp::Iniciar()
{
    App_SDL = new SDLHandler();

    if (App_SDL->Iniciar() == false)
    {
        return false;
    }
    return true;
}

int JouApp::Ejecutar()
{
    SDL_Event evento;

    if (Iniciar() == false)
    {
        return -1;
    }

    while (ejecutando)
    {
        while (SDL_PollEvent(&evento) != 0)
        {
            Eventos(&evento);
        }
        EnBucle();
        App_SDL->Render();
    }
    Salida();
    return 0;
}

void JouApp::Eventos(SDL_Event* evento)
{
    App_SDL->Eventos(evento);
    
    if (evento -> type == SDL_QUIT)
    {
        ejecutando = false;
    }
}

void JouApp::EnBucle()
{
    App_SDL->Bucle();
}

void JouApp::Salida()
{
    App_SDL->Salida();
}