#include "../headers/perfil.hpp"

perfil::perfil(Circunferencia c)
{
    circBase = c;
    cuerda = 1;
    r = 0; 
    g, b, a = 255;
}

void perfil::CalculoPuntos()
{
    for (int i=0; i<N; i++)
    {
        x[i] = circBase.GetX()[i] + circBase.GetX()[i]/(circBase.GetX()[i]*circBase.GetX()[i] + 
        circBase.GetY()[i]*circBase.GetY()[i]);
        y[i] = circBase.GetY()[i] - circBase.GetY()[i]/(circBase.GetX()[i]*circBase.GetX()[i] + 
        circBase.GetY()[i]*circBase.GetY()[i]);
    }
}