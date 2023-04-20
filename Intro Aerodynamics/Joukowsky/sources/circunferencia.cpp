#include "../headers/circunferencia.hpp"

Circunferencia::Circunferencia()
{
    x0 = 0;
    y0 = 0;
    R = 5.0;

    r, g, b, a = 255;
}

Circunferencia::Circunferencia(float x, float y)
{
    x0 = x;
    y0 = y;
    R = 5.0;
    r, g, b, a = 255;
}

void Circunferencia::CalculoPuntos()
{
    float tita[N];

    float dTita = M_PI*2/static_cast<float>(N);

    std::cout << "x " << " y" << std::endl;
    
    for (int i = 0; i < N; i++)
    {
        tita[i] = dTita * i; 
        x[i] = cos(tita[i]) + x0;
        y[i] = sin(tita[i]) + y0;

        std::cout << tita[i] <<" "<< x[i] << " " << y[i] << std::endl;
    }
}
