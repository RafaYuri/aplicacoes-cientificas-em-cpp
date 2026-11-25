#include "somaMatriz.h"
#include <iostream>

int leDimensao()
{
    int n;

    std::cout << "Digite a ordem da matriz: ";
    std::cin >> n;

    return n;
}

void alocaMatriz(TMat &mat, int n)
{
    mat = new double*[n];
    for (size_t i = 0; i < n; i++)
    {
        mat[i] = new double[n];
    }
}

void liberaMatriz(TMat &mat, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        delete[] mat[i];
        mat[i] = nullptr;
    }
    delete[] mat;
    mat = nullptr;
}

void leMatriz(TMat &mat, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cin >> mat[i][j];
        }
    }
}

void imprimeMatriz(TMat &mat, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void SomaMat(TMat &a, TMat &b, TMat &c, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}



