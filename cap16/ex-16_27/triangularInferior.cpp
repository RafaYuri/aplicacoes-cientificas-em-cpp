#include "triangularInferior.h"
#include <iostream>

int leDimensao()
{
    int n;
    do
    {
        std::cout << "Digite a dimensão da matriz (1 a " << MAX << "): ";
        std::cin >> n;
        if (n < 1 || n > MAX)
        {
            std::cout << "Dimensão inválida. Tente novamente." << std::endl;
        }
    } while (n < 1 || n > MAX);
    return n;
}

void leMatriz(Matriz &mat, int n)
{
    std::cout << "Digite os elementos da matriz (" << n << "x" << n << "):" << std::endl;
    for (size_t i = 0; i < n; ++i)
    {
        for (size_t j = 0; j < n; ++j)
        {
            std::cin >> mat[i][j];
        }
    }
}

void imprimeMatriz(const Matriz &mat, int n)
{
    std::cout << "Matriz (" << n << "x" << n << "):" << std::endl;
    for (size_t i = 0; i < n; ++i)
    {
        for (size_t j = 0; j < n; ++j)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

bool ehTriangularInferior(const Matriz &mat, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            if (mat[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}