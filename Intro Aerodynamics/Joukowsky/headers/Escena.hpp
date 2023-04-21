#ifndef ESCENA_H
#define ESCENA_H

#include <iostream>
#include <SDL2/SDL.h>

#include "ElementoDibujable.hpp"
#include "circunferencia.hpp"
#include "perfil.hpp"
#include "EjeX.hpp"

class Escena
{
private:
    float escalaBasica;

    float* puntosHijosX[3];
    float* puntosHijosY[3];

    Circunferencia* circulo;
    perfil* airfoil;
    EjeX* ejeX;

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