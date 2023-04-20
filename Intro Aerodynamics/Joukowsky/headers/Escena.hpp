#ifndef ESCENA_H
#define ESCENA_H

#include <SDL2/SDL.h>

#include "ElementoDibujable.hpp"
#include "circunferencia.hpp"
#include "perfil.hpp"

class Escena
{
private:
    float* puntosHijosX[2];
    float* puntosHijosY[2];

    Circunferencia* circulo;
    perfil* airfoil;

public:
    Escena(/* args */);

    bool Iniciar();
    void Eventos(SDL_Event *event);
    void Bucle();
    void Salida();
};

#endif