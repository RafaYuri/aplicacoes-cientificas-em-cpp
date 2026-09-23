#include "circulo.h"
#include <cmath>

double area_circulo (double raio)
{
    return raio * raio * M_PI;
}

double perimetro_circulo (double raio)
{
    return 2 * raio * M_PI;
}

void circulo (double raio, double &area, double &perimetro)
{
    area = raio * raio * M_PI;
    perimetro = 2 * raio * M_PI;
}