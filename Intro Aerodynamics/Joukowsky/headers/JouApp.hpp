#ifndef JOU_APP_H
#define JOU_APP_H

#include "SDLHandler.hpp"

class JouApp
{
private:
    bool ejecutando;
    SDLHandler* App_SDL;

public:
    JouApp(/* args */);

    int Ejecutar();

    bool Iniciar();
    void Eventos(SDL_Event* event);
    void EnBucle();
    void Salida();
};

#endif