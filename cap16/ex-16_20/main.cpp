/*
Enunciado:
Defina umma função de assinatura "void SomaMat (Matriz &a, Matriz &b, Matriz &c, int m, int n)" que execute a soma das matrizes a e b, ambas de tamanho
mxn e componentes reais, retornando o resultado em c. Teste a função fazendo uma chamada dentro de uma função main.
*/

#include "somaMatricial.h"
#include <iostream>

int main (int argc, char *argv[])
{
    int m, n;
    Matriz a, b, c;

    leDimensoes (m, n);
    if (m == -1 or n == -1)
    {
        std::cerr << "Programa encerrado devido a dimensões inválidas.\n";
        return 1; // Sai do programa devido a dimensões inválidas
    }

    leMatriz (a, m, n);
    leMatriz (b, m, n);
    SomaMat (a, b, c, m, n);
    imprimeMatriz (c, m, n);

    return 0;
}