#include "ProdutoMatricial.h"
#include <iostream>

void leDimensoes(int &l, int &c)
{
    std::cout << "Entre com a quantidade de linhas da matriz (máximo " << MAX_M << "): ";
    std::cin >> l;

    std::cout << "Entre com a quantidade de colunas da matriz (máximo " << MAX_N << "): ";
    std::cin >> c;

    if (l < 1 or l > MAX_M or c < 1 or c > MAX_N)
    {
        std::cerr << "Dimensões inválidas!" << std::endl;
        l = c = -1;
    }
}

void leComponentes(Matriz &mat, int n, int m)
{
    std::cout << "Entre com os componentes da matriz (" << n << " x " << m << "):" << std::endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            std::cin >> mat[i][j];
        }
    }
}

void imprimeMatriz(const Matriz &mat, int n, int m)
{
    std::cout << "Matriz (" << n << " x " << m << "):" << std::endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void ProdMat(const Matriz &x, const Matriz &y, Matriz &z, int m, int n, int p)
{
    double soma;
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            soma = 0;
            for (size_t k = 0; k < p; k++)
            {
                soma += x[i][k] * y[k][j];
            }
            z[i][j] = soma;
        }
    }
}
