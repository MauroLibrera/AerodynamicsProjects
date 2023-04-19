#include <iostream>
#include "../headers/circunferencia.hpp"
#include "../headers/perfil.hpp"

int main(int argc, char* argv[])
{
    float x, y;

    std::cout << "Escribir x origen ";
    std::cin >> x;

    std::cout << "Escribir y origen ";
    std::cin >> y;
    
    Circunferencia circ = Circunferencia(x, y);
    circ.CalculoPuntos();

    perfil per = perfil(circ);
    per.CalculoPuntos();

    return 0;
}