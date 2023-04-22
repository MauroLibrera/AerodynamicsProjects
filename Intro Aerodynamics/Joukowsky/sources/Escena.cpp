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

    ejeY = new EjeY();
    ejeY->CalcularPuntos();

    circulo = new Circunferencia();
    circulo->CalculoPuntos();
    
    airfoil = new perfil(*circulo);
    airfoil->CalculoPuntos();
    airfoil->Escalar(1,-1);

    ejeX->Escalar(escalaBasica, escalaBasica);
    ejeY->Escalar(escalaBasica, escalaBasica);
    circulo->Escalar(escalaBasica,escalaBasica);
    airfoil->Escalar(escalaBasica,escalaBasica);

    ejeX->Trasladar(400,300);
    ejeY->Trasladar(400,300);
    circulo->Trasladar(400, 300);
    airfoil->Trasladar(400, 300);

    ActualizarPuntos();

    return true;
}

void Escena::ActualizarPuntos()
{
    puntosHijosX[0] = ejeX->GetX();
    puntosHijosX[1] = ejeY->GetX();
    puntosHijosX[2] = circulo->GetX();
    puntosHijosX[3] = airfoil->GetX();
    //std::cout << airfoil->GetX()[3] <<" "<< puntosHijosX[1][3] << std::endl;

    puntosHijosY[0] = ejeX->GetY();
    puntosHijosY[1] = ejeY->GetY();
    puntosHijosY[2] = circulo->GetY();
    puntosHijosY[3] = airfoil->GetY();
    //std::cout << airfoil->GetY()[3] <<" "<< puntosHijosY[1][3] << std::endl;
}

void Escena::Eventos(SDL_Event *event)
{
    switch (event->type)
    {
    case SDL_MOUSEBUTTONDOWN:
        if (event->button.button == SDL_BUTTON_LEFT)
        {
            mouseX = event->button.x;
            mouseY = event->button.y;
            Bucle();
        }
        break;
    
    default:
        break;
    }
}

void Escena::Bucle()
{
    float x = (static_cast<int>(mouseX) - 400)/escalaBasica;
    float y = (static_cast<int>(mouseY) - 300)/escalaBasica;

    circulo->SetCentro(x,y);
    circulo->CalculoPuntos();

    airfoil->CalculoPuntos();

    circulo->Escalar(escalaBasica,escalaBasica);
    airfoil->Escalar(escalaBasica,escalaBasica);

    circulo->Trasladar(400, 300);
    airfoil->Trasladar(400, 300);

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