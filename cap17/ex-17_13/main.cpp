/*
Enunciado:
Considerando as declarações fornecidas, defina uma função para transformar uma matriz quadrada x de ordem n em 
sua transposta.

typedef double **Matriz;
void transformaEmTransposta(Matriz &x, int n);
*/

#include "transposta.h"
#include <iostream>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    int n = leDimensao();
    Matriz x;

    // Alocação de memória para a matriz
    alocaMatriz(x, n);

    // Leitura da matriz
    leMatriz(x, n);

    // Impressão da matriz original
    std::cout << "Matriz original:" << std::endl;
    imprimeMatriz(x, n);

    // Transformação da matriz em sua transposta
    transformaEmTransposta(x, n);

    // Impressão da matriz transposta
    std::cout << "Matriz transposta:" << std::endl;
    imprimeMatriz(x, n);

    // Desalocação de memória da matriz
    desalocaMatriz(x, n);

    return 0;
}