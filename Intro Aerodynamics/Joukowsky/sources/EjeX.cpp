#include "../headers/EjeX.hpp"

EjeX::EjeX()
{
    xi = -400;
    xf = 400;

    r, g, b, a = 255;
}

void EjeX::CalcularPuntos()
{
    float dx = (xf-xi)/static_cast<float>(N);
    for (int i=0; i<N; i++)
    {
        y[i] = 0;
        x[i] = xi + i*dx;
    }
}