/*
Enunciado:
Em uma unidade independente implemente as seguintes funções:
- Leitura das dimensões de uma matriz mxn do tipo Valores que possui componentes do tipo double (max 50x50);
- Leitura dos elementos da matriz;
- Impressão dos elementos da matriz;
- Cálculo da média dos elementos da matriz;
- Desvio padrão dos elementos da matriz.

Faça a chamada das funções em um programa principal no arquivo main.cpp.
*/

#include <iostream>
#include "estatisticas.h"

int main (int argc, char *argv[])
{
    int m, n;
    Valores matriz;

    leDimensoes(m, n);
    leValores(matriz, m, n);
    escreveValores(matriz, m, n);

    double media_valores = media(matriz, m, n);
    double desvio_padrao = desvioPadrao(matriz, m, n);

    std::cout << "Média: " << media_valores << std::endl;
    std::cout << "Desvio Padrão: " << desvio_padrao << std::endl;

    return 0;
}