#include "../headers/joukowsky.hpp"

Joukowsky::Joukowsky(float x, float y)
{
    x0 = x;
    y0 = y;
}

void Joukowsky::Ejecutar()
{
    circ = Circunferencia(x0, y0);
    circ.CalculoPuntos();
}