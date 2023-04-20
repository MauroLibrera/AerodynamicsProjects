#include "../headers/Escena.hpp"

Escena::Escena()
{
    circulo = NULL;
    airfoil = NULL;
}

bool Escena::Iniciar()
{
    circulo = new Circunferencia();
    circulo->CalculoPuntos();

    airfoil = new perfil(*circulo);
    airfoil->CalculoPuntos();

    puntosHijosX[0] = circulo->GetX();
    puntosHijosX[1] = airfoil->GetX();

    puntosHijosY[0] = circulo->GetY();
    puntosHijosY[1] = airfoil->GetY();

    return true;
}

void Escena::Eventos(SDL_Event *event)
{

}

void Escena::Bucle()
{

}

void Escena::Salida()
{

}