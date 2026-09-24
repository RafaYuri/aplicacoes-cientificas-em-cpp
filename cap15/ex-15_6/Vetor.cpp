#include "Vetor.h"
#include <cmath>
#include <cstdlib>
#include <ctime>

double grausParaRadianos (double graus)
{
    return graus * M_PI / 180.0;
}

void sortearVetor (Vetor &x, int n)
{
    srand (static_cast<unsigned int>(time(nullptr))); // Inicializa o gerador de números aleatórios
    for (size_t i = 0; i < n; i++)
    {
        x[i] = static_cast<double>(rand() % 361); // Sorteia um valor entre 0 e 360
    }
}

void calcularSeno (const Vetor &x, Vetor &y, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        y[i] = sin (grausParaRadianos (x[i])); // Converte para radianos e calcula o seno
    }
}
