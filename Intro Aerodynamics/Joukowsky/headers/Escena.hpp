#ifndef ESCENA_H
#define ESCENA_H

#include <iostream>
#include <SDL2/SDL.h>

#include "ElementoDibujable.hpp"
#include "circunferencia.hpp"
#include "perfil.hpp"
#include "EjeX.hpp"
#include "EjeY.hpp"

class Escena
{
private:
    float escalaBasica;

    float* puntosHijosX[4];
    float* puntosHijosY[4];

    Circunferencia* circulo;
    perfil* airfoil;
    EjeX* ejeX;
    EjeY* ejeY;

    int mouseX;
    int mouseY;

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