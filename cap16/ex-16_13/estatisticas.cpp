#include "estatisticas.h"
#include <iostream>
#include <cmath>

void leDimensoes(int &m, int &n)
{
    int l, c;
    do {
        std::cout << "Digite o número de linhas (entre 1 e " << MAX_M << "): ";
        std::cin >> l;

        std::cout << "Digite o número de colunas (entre 1 e " << MAX_N << "): ";
        std::cin >> c;
    }while (l < 1 or l > MAX_M or c < 1 or c > MAX_N);

    m = l;
    n = c;
}

void leValores(Valores &matriz, int m, int n)
{
    for (size_t i = 0; i < m; i++)
        for (size_t j = 0; j < n; j++)
        {
            std::cout << "Digite o elemento [" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
}

void escreveValores(const Valores &matriz, int m, int n)
{
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cout << "Elemento [" << i << "][" << j << "] = " << matriz[i][j] << std::endl;
        }
    }
}

double media(const Valores &matriz, int m, int n)
{
    double soma = 0.0;
    for (size_t i = 0; i < m; i++)
        for (size_t j = 0; j < n; j++)
            soma += matriz[i][j];

    return soma / (m * n);
}

double desvioPadrao(const Valores &matriz, int m, int n)
{
    double media_valores = media(matriz, m, n);
    double soma_quadrados = 0.0;

    for (size_t i = 0; i < m; i++)
        for (size_t j = 0; j < n; j++)
            soma_quadrados += pow(matriz[i][j] - media_valores, 2);

    return sqrt(soma_quadrados / (m * n - 1));
}