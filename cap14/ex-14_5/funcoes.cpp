#include "funcoes.h"
#include <cmath>

bool is_par (int n)
{
    return n % 2 == 0;
}

double radParaGraus (double rad)
{
    return rad * 180.0 / M_PI;
}

double cosGraus (double graus)
{
    double rad = graus * M_PI / 180.0;
    return cos(rad);
}

double areaEsfera (double raio)
{
    return 4 * M_PI * raio * raio;
}

double volumeEsfera (double raio)
{
    return 4.0 / 3.0 * M_PI * raio * raio * raio;
}

double areaRetangulo (double base, double altura)
{
    return base * altura;
}

double perimetroRetangulo (double base, double altura)
{
    return 2 * (base + altura);
}