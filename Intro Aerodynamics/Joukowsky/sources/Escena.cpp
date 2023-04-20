#include "../headers/Escena.hpp"

Escena::Escena()
{
    circulo = NULL;
    airfoil = NULL;
}


bool Escena::Iniciar()
{
    escalaBasica = 80;
    
    circulo = new Circunferencia();
    circulo->CalculoPuntos();
    circulo->Escalar(escalaBasica,escalaBasica);


    airfoil = new perfil(*circulo);
    airfoil->CalculoPuntos();
    airfoil->Escalar(escalaBasica,escalaBasica);

    ActualizarPuntos();

    return true;
}

void Escena::ActualizarPuntos()
{
    puntosHijosX[0] = circulo->GetX();
    puntosHijosX[1] = airfoil->GetX();

    puntosHijosY[0] = circulo->GetY();
    puntosHijosY[1] = airfoil->GetY();
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