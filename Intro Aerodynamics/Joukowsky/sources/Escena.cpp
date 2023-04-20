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
    circulo->Escalar(100.0, 100.0);


    airfoil = new perfil(*circulo);
    airfoil->CalculoPuntos();
    airfoil->Escalar(100.0,100.0);

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

float** Escena::GetPuntosX()
{
    return puntosHijosX;
}

float** Escena::GetPuntosY()
{
    return puntosHijosY;
}

int Escena::GetN()
{
    return circulo->N;
}