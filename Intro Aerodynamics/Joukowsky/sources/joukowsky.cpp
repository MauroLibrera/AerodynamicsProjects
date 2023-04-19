#include "../headers/joukowsky.hpp"

Joukowsky::Joukowsky(float x, float y)
{
    x0 = x;
    y0 = y;
    n = 100;
}

void Joukowsky::Ejecutar()
{
    circ = Circunferencia(x0, y0, n);
    circ.CalculoPuntos();

    xc = circ.GetX();
    yc = circ.GetY();
}