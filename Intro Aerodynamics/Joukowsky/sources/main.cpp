#include <iostream>
#include "../headers/circunferencia.hpp"

int main(int argc, char* argv[])
{
    float x, y;

    std::cout << "Escribir x origen ";
    std::cin >> x;

    std::cout << "Escribir y origen ";
    std::cin >> y;
    
    Circunferencia circulo = Circunferencia(x, y);

    return 0;
}