#ifndef ELEMENTO_DIBUJABLE_H
#define ELEMENTO_DIBUJABLE_H

#include "common.hpp"
#include <math.h>
#include <iostream>

class ElementoDibujable
{
protected:
    int N;
    float* x;
    float* y;
    
public:
    ElementoDibujable(/* args */);
    ElementoDibujable(float* x, float* y);

    // Transformaciones Geométricas

    void Escalar(float escalaX, float escalaY);
    void Trasladar(float trasX, float trasY);
};


#endif