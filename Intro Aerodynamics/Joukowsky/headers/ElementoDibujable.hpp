#ifndef ELEMENTO_DIBUJABLE_H
#define ELEMENTO_DIBUJABLE_H

#include "common.hpp"
#include <math.h>
#include <iostream>

class ElementoDibujable
{
protected:
    float* x;
    float* y;

    int r, g, b, a;
    
public:
    ElementoDibujable(/* args */);
    ElementoDibujable(float* x, float* y);

    int N;
    // Transformaciones Geométricas

    void Escalar(float escalaX, float escalaY);
    void Trasladar(float trasX, float trasY);

    float* GetX();
    float* GetY();
};


#endif