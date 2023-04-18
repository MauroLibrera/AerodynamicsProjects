#ifndef CIRCUNFERENCIA_H
#define CIRCUNFERENCIA_H

class Circunferencia
{
public:
    Circunferencia();
    Circunferencia(float x, float y);

private:
    float x0; // Coordenada x del origen
    float y0; // Coordenada y del origen
    float N;  // Cantidad de puntos
    float R;  // Radio

    float* x;
    float* y;

    void CalculoPuntos();  
};

#endif