#include "../headers/JouApp.hpp"

JouApp::JouApp()
{
    ejecutando = true;
    App_SDL = NULL;
    currentScene = NULL;
}

bool JouApp::Iniciar()
{
    App_SDL = new SDLHandler();
    currentScene = new Escena();

    if (App_SDL->Iniciar() == false)
    {
        return false;
    }

    if (currentScene->Iniciar() == false)
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
        //std::cout << currentScene->GetPuntosY()[1][3] << std::endl;
        App_SDL->Render(currentScene->GetPuntosX(), currentScene->GetPuntosY(), currentScene->GetN());
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