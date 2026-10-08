#include "funcoes.h"
#include <iostream>
#include <cmath>

void LeDimensao (int &n)
{
    do {
        std::cout << "Digite a dimensão do vetor (1 <= n <= 30): ";
        std::cin >> n;
    } while (n < 1 || n > MAX_ELEMENTOS);
}

void LeValores (int v[], int n)
{
    std::cout << "Digite os elementos do vetor:" << std::endl;
    for (size_t i = 0; i < n; i++)
    {
        std::cout << "v[" << i << "] = ";
        std::cin >> v[i];
    }
}

void ExibeValores (int v[], int n)
{
    std::cout << "Elementos do vetor: ";
    for (size_t i = 0; i < n; i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

int Ocorrencias (int v[], int n, int numero)
{
    int contador = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (v[i] == numero) contador++;
    }

    return contador;
}

double Media (int v[], int n)
{
    double soma = 0;

    for (size_t i = 0; i < n; i++)
    {
        soma += v[i];
    }

    return soma / n;
}

void Multiplicar (int v[], int n, int escalar)
{
    for (size_t i = 0; i < n; i++)
    {
        v[i] *= escalar;
    }
}
