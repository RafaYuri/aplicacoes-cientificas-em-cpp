#include "matriz.h"
#include <cmath>

void calculaComponentes(SquareMatrix &matriz, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            matriz[i][j] = sin(i) / cos(j);
        }
    }
}

double calculaMedia(const SquareMatrix &matriz, int n)
{
    double soma = 0.0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            soma += matriz[i][j];
        }
    }
    return soma / (n * n);
}

double calculaPorcentagemNegativos(const SquareMatrix &matriz, int n)
{
    int countNegativos = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (matriz[i][j] < 0)
            {
                countNegativos++;
            }
        }
    }
    return (static_cast<double>(countNegativos) / (n * n)) * 100.0;
}