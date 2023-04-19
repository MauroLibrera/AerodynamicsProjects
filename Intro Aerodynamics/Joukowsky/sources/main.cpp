#include <iostream>
#include "../headers/joukowsky.hpp"

int main(int argc, char* argv[])
{
    float x, y;

    std::cout << "Escribir x origen ";
    std::cin >> x;

    std::cout << "Escribir y origen ";
    std::cin >> y;
    
    Joukowsky transform = Joukowsky(x, y);
    transform.Ejecutar();

    return 0;
}