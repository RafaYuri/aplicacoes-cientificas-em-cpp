#include "transposta.h"
#include <iostream>

int leDimensao()
{
    int n;
    std::cout << "Digite a dimensão da matriz quadrada: ";
    std::cin >> n;
    return n;
}

void alocaMatriz(Matriz &x, int n)
{
    x = new double*[n];

    for (size_t i = 0; i < n; i++)
    {
        x[i] = new double[n];
    }
}

void desalocaMatriz(Matriz &x, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        delete[] x[i];
        x[i] = nullptr;
    }
    delete[] x;
    x = nullptr;
}

void leMatriz(Matriz &x, int n)
{
    std::cout << "Digite os elementos da matriz:" << std::endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cin >> x[i][j];
        }
    }
}

void imprimeMatriz(Matriz x, int n)
{
    std::cout << "Matriz:" << std::endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cout << x[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void transformaEmTransposta(Matriz &x, int n)
{
    double aux;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            aux = x[i][j];
            x[i][j] = x[j][i];
            x[j][i] = aux;
        }
    }
}