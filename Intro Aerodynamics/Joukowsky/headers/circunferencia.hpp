#ifndef CIRCUNFERENCIA_H
#define CIRCUNFERENCIA_H

#include <math.h>
#include <iostream>

#include "common.hpp"

class Circunferencia
{
public:
    Circunferencia();
    Circunferencia(float x, float y, int n);

    void CalculoPuntos();

    float* GetX();
    float* GetY();

private:
    float x0; // Coordenada x del origen
    float y0; // Coordenada y del origen
    int N;  // Cantidad de puntos
    float R;  // Radio

    float* x;
    float* y;
};

#endif