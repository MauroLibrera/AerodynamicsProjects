#include "../headers/Escena.hpp"

Escena::Escena()
{
    circulo = NULL;
    airfoil = NULL;
    ejeX = NULL;
}


bool Escena::Iniciar()
{
    escalaBasica = 80;
    
    ejeX = new EjeX();
    ejeX->CalcularPuntos();

    circulo = new Circunferencia(-1.0/14.0,0.1);
    circulo->CalculoPuntos();
    
    airfoil = new perfil(*circulo);
    airfoil->CalculoPuntos();
    airfoil->Escalar(1,-1);

    ejeX->Escalar(escalaBasica, escalaBasica);
    circulo->Escalar(escalaBasica,escalaBasica);
    airfoil->Escalar(escalaBasica,escalaBasica);

    ejeX->Trasladar(400,300);
    circulo->Trasladar(400, 300);
    airfoil->Trasladar(400, 300);

    ActualizarPuntos();

    return true;
}

void Escena::ActualizarPuntos()
{
    puntosHijosX[0] = ejeX->GetX();
    puntosHijosX[1] = circulo->GetX();
    puntosHijosX[2] = airfoil->GetX();
    //std::cout << airfoil->GetX()[3] <<" "<< puntosHijosX[1][3] << std::endl;

    puntosHijosY[0] = ejeX->GetY();
    puntosHijosY[1] = circulo->GetY();
    puntosHijosY[2] = airfoil->GetY();
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