#ifndef PERFIL_H
#define PERFIL_H

#include "ElementoDibujable.hpp"
#include "circunferencia.hpp"

class perfil: public ElementoDibujable
{
private:
    Circunferencia circBase;

    float cuerda;

public:
    perfil(Circunferencia c);

    void CalculoPuntos();
};

#endif