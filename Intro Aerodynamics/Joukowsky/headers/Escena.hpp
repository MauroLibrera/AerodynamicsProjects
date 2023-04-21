#ifndef ESCENA_H
#define ESCENA_H

#include <iostream>
#include <SDL2/SDL.h>

#include "ElementoDibujable.hpp"
#include "circunferencia.hpp"
#include "perfil.hpp"

class Escena
{
private:
    float escalaBasica;

    float* puntosHijosX[2];
    float* puntosHijosY[2];

    Circunferencia* circulo;
    perfil* airfoil;

    void ActualizarPuntos();

public:
    Escena(/* args */);

    bool Iniciar();
    void Eventos(SDL_Event *event);
    void Bucle();
    void Salida();

    float** GetPuntosX();
    float** GetPuntosY();

    int GetN();
};

#endif