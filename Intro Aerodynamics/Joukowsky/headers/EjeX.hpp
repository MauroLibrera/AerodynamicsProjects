#ifndef EJE_X_H
#define EJE_X_H

#include "ElementoDibujable.hpp"

class EjeX: public ElementoDibujable
{
private:
    float xi;
    float xf;
public:
    EjeX(/* args */);

    void CalcularPuntos();
};


#endif