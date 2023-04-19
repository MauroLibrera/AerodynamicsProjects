#ifndef JOUKOWSKY_H
#define JOUKOWSKY_H

#include "circunferencia.hpp"
#include "transformada.hpp"


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
    Transformada* transform;

    float* xc;
    float* yc;

    float* xp;
    float* yp;
};


#endif
