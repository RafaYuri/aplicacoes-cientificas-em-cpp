#include "estatisticas.h"
#include <cmath>

double media (Valores &x, int n)
{
    double soma = 0;
    for (size_t i = 0; i < n; i++)
    {
        soma += x[i];
    }
    return soma / n;
}

double desvioPadrao (Valores &x, int n)
{
    double m = media (x, n);
    double soma = 0;

    for (size_t i = 0; i < n; i++)
    {
        soma += pow(x[i] - m, 2);
    }

    return sqrt(soma / (n - 1));
}