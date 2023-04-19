#ifndef CIRCUNFERENCIA_H
#define CIRCUNFERENCIA_H

#include "ElementoDibujable.hpp"

class Circunferencia: public ElementoDibujable
{
public:
    Circunferencia();
    Circunferencia(float x, float y);

    void CalculoPuntos();

    float* GetX();
    float* GetY();

private:
    float x0; // Coordenada x del origen
    float y0; // Coordenada y del origen
    float R;  // Radio
};

#endif