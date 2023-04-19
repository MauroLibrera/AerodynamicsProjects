#include "../headers/circunferencia.hpp"

Circunferencia::Circunferencia()
{
    x0 = 0;
    y0 = 0;
    N = 100;
    R = 5.0;
}

Circunferencia::Circunferencia(float x, float y, int n)
{
    x0 = x;
    y0 = y;
    N = n;
    R = 5.0;
}

void Circunferencia::CalculoPuntos()
{
    x = new float[N];
    y = new float[N];

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

float* Circunferencia::GetX()
{
    return x;
}

float* Circunferencia::GetY()
{
    return y;
}
