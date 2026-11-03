#include "somaMatricial.h"
#include <iostream>

void leDimensoes (int &m, int &n)
{
    std::cout << "Digite o número de linhas (max " << MAX << "): ";
    std::cin >> m;
    std::cout << "Digite o número de colunas (max " << MAX << "): ";
    std::cin >> n;

    if (m < 1 or m > MAX or n < 1 or n > MAX)
    {
        std::cerr << "Dimensões inválidas. As dimensões devem estar entre 1 e " << MAX << ".\n";
        m = n = -1; // Indica erro
    }
}

void leMatriz (Matriz &a, int m, int n)
{
    std::cout << "Digite os elementos da matriz: " << std::endl;
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cin >> a[i][j];
        }
    }
}

void imprimeMatriz (const Matriz &a, int m, int n)
{
    std::cout << "Matriz resultante: " << std::endl;
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void SomaMat (const Matriz &a, const Matriz &b, Matriz &c, int m, int n)
{
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}