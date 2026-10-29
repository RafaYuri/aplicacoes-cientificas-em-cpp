#include "matriz.h"
#include <cstdlib>
#include <ctime>

void sortearMatriz (Matriz &matriz, int m, int n)
{
    std::srand(std::time(nullptr));

    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            matriz[i][j] = std::rand() % (100 - 30 + 1) + 30;
        }
    }
}

double mediaPares (const Matriz &matriz, int m, int n)
{
    int soma = 0;
    int contaPares = 0;

    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                soma += matriz[i][j];
                contaPares++;
            }
        }
    }

    if (contaPares == 0)
    {
        return 0.0;
    }

    else
    {
        return static_cast<double>(soma) / contaPares;
    }
}

double porcentagemImpares (const Matriz &matriz, int m, int n)
{
    int contaImpares = 0;
    
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (matriz[i][j] % 2 != 0)
            {
                contaImpares++;
            }
        }
    }

    return (static_cast<double>(contaImpares) / (m * n)) * 100.0;
}
