#include "../headers/perfil.hpp"

perfil::perfil(Circunferencia c)
{
    circBase = c;
    cuerda = 1;
}

void perfil::CalculoPuntos()
{
    std::cout << "x " << " y" << std::endl;
    for (int i=0; i<N; i++)
    {
        x[i] = circBase.GetX()[i];
        y[i] = circBase.GetY()[i];

        std::cout << x[i] << " " << y[i] << std::endl;
    }
}