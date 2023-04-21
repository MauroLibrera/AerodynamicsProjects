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
    
    airfoil = new perfil(*circulo);
    airfoil->CalculoPuntos();

    circulo->Escalar(escalaBasica,escalaBasica);
    airfoil->Escalar(escalaBasica,escalaBasica);

    circulo->Trasladar(400, 300);
    airfoil->Trasladar(400, 300);

    ActualizarPuntos();

    return true;
}

void Escena::ActualizarPuntos()
{
    puntosHijosX[0] = circulo->GetX();
    puntosHijosX[1] = airfoil->GetX();
    //std::cout << airfoil->GetX()[3] <<" "<< puntosHijosX[1][3] << std::endl;

    puntosHijosY[0] = circulo->GetY();
    puntosHijosY[1] = airfoil->GetY();
    //std::cout << airfoil->GetY()[3] <<" "<< puntosHijosY[1][3] << std::endl;
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