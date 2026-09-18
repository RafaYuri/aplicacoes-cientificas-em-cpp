#include "funcoes.h"
#include <cmath>

double distancia2D (double x1, double y1, double x2, double y2)
{
    return sqrt (pow (x2 - x1, 2) + pow (y2 - y1, 2));
}

double distancia3D (double x1, double y1, double z1, double x2, double y2, double z2)
{
    return sqrt (pow (x2 - x1, 2) + pow (y2 - y1, 2) + pow (z2 - z1, 2));
}

double modulo (double x)
{
    return x < 0 ? -x : x;
}

void ladosTriangulo (double x1, double y1, double x2, double y2, double x3, double y3, double &a, double &b, double &c)
{
    a = distancia2D (x1, y1, x2, y2);
    b = distancia2D (x2, y2, x3, y3);
    c = distancia2D (x3, y3, x1, y1);
}

double areaTriangulo (double x1, double y1, double x2, double y2, double x3, double y3)
{
    double a, b, c;
    ladosTriangulo (x1, y1, x2, y2, x3, y3, a, b, c);
    double s = (a + b + c) / 2;
    return sqrt (s * (s - a) * (s - b) * (s - c));
}