#include "VetorInteiros.h"
#include <cstdlib>
#include <ctime>

void sortearVetor (VetorInteiros &vetor, int n)
{
    std::srand(std::time(0)); 

    for (size_t i = 0; i < n; i++)
    {
        vetor[i] = std::rand() % (30 - (-20) + 1) + (-20);
    }
}

int somaComponentes (const VetorInteiros &vetor, int n)
{
    int soma = 0;
    for (size_t i = 0; i < n; i++)
    {
        soma += vetor[i];
    }
    return soma;
}

int contaPositivos (const VetorInteiros &vetor, int n)
{
    int contPositivos = 0;

    for (size_t i = 0; i < n; i++)
    {
        if (vetor[i] > 0) contPositivos++;
    }

    return contPositivos;
}
