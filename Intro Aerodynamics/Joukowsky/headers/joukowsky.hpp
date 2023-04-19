#ifndef JOUKOWSKY_H
#define JOUKOWSKY_H

#include "circunferencia.hpp"


class Joukowsky
{
public:
    Joukowsky(float x, float y);

    float x0;
    float y0;
    int n;

    void Ejecutar();

private:
    Circunferencia circ;

    float* xc;
    float* yc;

    float* xp;
    float* yp;
};


#endif
