#include "vetor.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void alocarVetor(VETOR &v, int n)
{
    v = new int[n];
}

void desalocarVetor(VETOR &v)
{
    delete[] v;
    v = nullptr;
}

void sortearVetor(VETOR v, int n, int a, int b)
{
    std::srand(time(nullptr));

    for (size_t i = 0; i < n; i++)
    {
        v[i] = rand() % (b - a + 1) + a;
    }
}

void exibirVetor(VETOR &v, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        std::cout << "v[" << i << "] = " << v[i] << std::endl;
    }
}

double mediaPares(VETOR &v, int n)
{
    int soma = 0;
    int contador = 0;

    for (size_t i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            soma += v[i];
            contador++;
        }
    }
    
    if (contador == 0)
    {
        return 0;
    }

    return static_cast<double>(soma) / contador;
}