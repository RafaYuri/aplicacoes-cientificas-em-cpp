#include "correlacao.h"
#include <iostream>
#include <cmath>

int leDimensao()
{
    int n;
    std::cout << "Digite a dimensão do vetor: ";
    std::cin >> n;
    return n;
}

void alocaVetor(Valores &v, int n)
{
    v = new double[n];
}

void desalocaVetor(Valores &v)
{
    delete[] v;
    v = nullptr;
}

void leValores(Valores &v, int n)
{
    std::cout << "Digite os valores do vetor:\n";
    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }
}

void imprimeValores(Valores &v, int n)
{
    std::cout << "Valores do vetor:\n";
    for (int i = 0; i < n; ++i)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

double mediaValores(Valores &v, int n)
{
    double soma = 0.0;
    for (size_t i = 0; i < n; i++)
    {
        soma += v[i];
    }

    return soma / n;
}

double coefCorrelacao(Valores &x, Valores &y, int n)
{
    double mediaX = mediaValores(x, n);
    double mediaY = mediaValores(y, n);

    double numerador = 0.0;
    double denominador_1 = 0.0;
    double denominador_2 = 0.0;

    for (size_t i = 0; i < n; i++)
    {
        numerador += (x[i] - mediaX) * (y[i] - mediaY);
        denominador_1 += pow(x[i] - mediaX, 2);
        denominador_2 += pow(y[i] - mediaY, 2);
    }

    return numerador / sqrt(denominador_1 * denominador_2);
}