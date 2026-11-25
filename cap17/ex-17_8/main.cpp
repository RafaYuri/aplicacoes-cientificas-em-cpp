/*
Enunciado:
Defina uma função de assinatura "void SomaMat (TMat &a, TMat &b, TMat &c, int n)" que execute a soma entre as matrizes a e b, de elementos reais 
e ordem n, retornando o resultado em c. Teste a função fazendo uma chamada dentro de uma função "main".
*/

#include "somaMatriz.h"
#include <iostream>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    int n = leDimensao();

    TMat a, b, c;

    // Alocação de memória para as matrizes
    alocaMatriz(a, n);
    alocaMatriz(b, n);
    alocaMatriz(c, n);

    // Leitura das matrizes A e B
    std::cout << "Digite os elementos da matriz A: " << std::endl;
    leMatriz(a, n);

    std::cout << "Digite os elementos da matriz B: " << std::endl;
    leMatriz(b, n);

    // Soma das matrizes e impressão do resultado
    SomaMat(a, b, c, n);

    std::cout << "Resultado da soma das matrizes A e B: " << std::endl;
    imprimeMatriz(c, n);

    // Liberação de memória alocada para as matrizes
    liberaMatriz(a, n);
    liberaMatriz(b, n);
    liberaMatriz(c, n);

    return 0;
}