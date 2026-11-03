#include "Matriz.h"
#include <iostream>

int lerDimensao()
{
    int n;
    std::cout << "Digite a dimensão da matriz (max " << MAX << "): ";
    std::cin >> n;

    if (n < 1 || n > MAX) {
        std::cerr << "Dimensão inválida!" << std::endl;
        return -1;
    }

    return n;
}

void lerMatriz (Matriz& m, int n)
{
    std::cout << "Digite os elementos da matriz:" << std::endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cin >> m[i][j];
        }
    }
}

void imprimirMatriz (const Matriz& m, int n)
{
    std::cout << "Matriz:" << std::endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

double calcularComponentesZ (double xks, double yks)
{
    return (xks * xks + yks * yks) / 10.0;
}

void calcularMatrizZ (const Matriz& x, const Matriz& y, Matriz& z, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            z[i][j] = calcularComponentesZ(x[i][j], y[i][j]);
        }
    }
}
