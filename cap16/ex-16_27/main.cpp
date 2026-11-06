/*
Enunciado:
Uma matriz é triangular inferior quando sua banda superior é nula (todos os elementos da banda superior são zeros). Elabore uma função para verificar 
se uma matriz quadrada de ordem n e elementos inteiros é triangular inferior.
*/

#include "triangularInferior.h"
#include <iostream>

int main (int argc, char *argv[])
{
    Matriz mat;
    int n = leDimensao();
    leMatriz(mat, n);
    imprimeMatriz(mat, n);

    if (ehTriangularInferior(mat, n))
    {
        std::cout << "A matriz é triangular inferior." << std::endl;
    }
    else
    {
        std::cout << "A matriz não é triangular inferior." << std::endl;
    }

    return 0;
}