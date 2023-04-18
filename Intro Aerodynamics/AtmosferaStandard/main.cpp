#include <iostream>
#include <math.h>

float Temp(float h);
float Pres(float h, float T);
float Dens(float T, float P);
float Grav(float h);

int main()
{
    float h = 0.0;

    float temp;
    float dens;
    float pres;
    float grav;

    std::cout << "Ingresa la altura ";
    std::cin >> h;

    temp = Temp(h);

    std::cout << "La temperatura a esa altura es " << temp << " K"
    << std::endl;

    pres = Pres(h, temp);

    std::cout << "La presion a esa altura es " << pres << " Pa"
    << std::endl;

    dens = Dens(temp, pres);

    std::cout << "La densidad a esa altura es " << dens << " Kg/m3"
    << std::endl;

    grav = Grav(h);

    std::cout << "La gravedad a esa altura es " << grav << " m/s2"
    << std::endl;

    return 0;
} 


float Temp(float h)
{
    float T0 = 288.15;
    float L = 0.0065;

    float T;

    if (h<=11000)
    {
        T = T0 - L * h;
    }

    return T;
}

float Pres(float h, float T)
{
    float p0 = 101325;
    float T0 = 288.15;
    float P;

    if (h <= 11000)
    {
        P = p0 * powf(T/T0, 5.256);
    }

    return P;
}

float Dens(float T, float P)
{
    float R = 287.05287;

    float rho;

    rho = P/(R*T);

    return rho;
}

float Grav(float h)
{
    float g0 = 9.80665;
    float r0 = 2.0856 * powf(10.0,7);

    float g;

    g = g0 * powf(r0/(r0+h),2);

    return g;
}