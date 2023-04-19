#include "../headers/ElementoDibujable.hpp"

ElementoDibujable::ElementoDibujable()
{
    N = 100;

    x = new float[N];
    x = {0};

    y = new float[N];
    y = {0};
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