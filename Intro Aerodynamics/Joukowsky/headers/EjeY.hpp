#ifndef EJE_Y_H
#define EJE_Y_H

#include "ElementoDibujable.hpp"

class EjeY: public ElementoDibujable
{
private:
    float yi;
    float yf;
public:
    EjeY();
    void CalcularPuntos();
};

#endif