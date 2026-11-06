/*
Enunciado:
Defina uma função de assinatura "void ProdMat (Matriz &x, Matriz &y, Matriz &z, int m, int n, int p)" que execute o 
produto matricial entre as matrizes x (m x p) e y (p x n), de componentes reais, retornando o resultado em z (m x n). 
Teste a função fazendo uma chamada dentro de uma função main.
*/

#include "ProdutoMatricial.h"
#include <iostream>

int main (int argc, char *argv[])
{
    int mx, nx, my, ny;
    Matriz x, y, z;

    std::cout << "Matriz x" << std::endl;
    leDimensoes(mx, nx);
    if (nx == -1 or mx == -1)
    {
        std::cerr << "Encerrando o programa devido a dimensões inválidas!" << std::endl;
        return 1;
    }

    leComponentes(x, mx, nx);

    std::cout << "Matriz y" << std::endl;
    leDimensoes(my, ny);
    if (ny == -1 or my == -1)
    {
        std::cerr << "Encerrando o programa devido a dimensões inválidas!" << std::endl;
        return 1;
    }

    if (nx != my)
    {
        std::cerr << "Dimensões incompatíveis para o produto matricial!" << std::endl;
        return 1;
    }

    leComponentes(y, my, ny);

    ProdMat(x, y, z, mx, nx, ny);

    std::cout << "Resultado do produto matricial:" << std::endl;
    imprimeMatriz(z, mx, ny);
    
    return 0;
}