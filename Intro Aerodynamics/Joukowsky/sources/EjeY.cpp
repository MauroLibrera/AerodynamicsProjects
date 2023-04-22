#include "../headers/EjeY.hpp"

EjeY::EjeY()
{
    yi = -3.75;
    yf = 3.75;

    r, g, b, a = 255;
}

void EjeY::CalcularPuntos()
{
    float dy = (yf-yi)/static_cast<float>(N);
    for (int i=0; i<N; i++)
    {
        x[i] = 0;
        y[i] = yi + i*dy;
    }
}