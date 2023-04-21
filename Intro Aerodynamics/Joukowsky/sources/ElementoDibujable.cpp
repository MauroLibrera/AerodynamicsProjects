#include "../headers/ElementoDibujable.hpp"

ElementoDibujable::ElementoDibujable()
{
    N = 1000;

    x = new float[N];
    y = new float[N];
}

ElementoDibujable::ElementoDibujable(float* xa, float*ya)
{
    N = 100;

    x = xa;
    y = ya;
}

void ElementoDibujable::Escalar(float esX, float esY)
{
    for (int i = 0; i < N; i++)
    {
        x[i] *= esX;
        y[i] *= esY;
    }
}

void ElementoDibujable::Trasladar(float trasX, float trasY)
{
    for (int i = 0; i < N; i++)
    {
        x[i] += trasX;
        y[i] += trasY;
    }
}

float* ElementoDibujable::GetX()
{
    return x;
}

float* ElementoDibujable::GetY()
{
    return y;
}