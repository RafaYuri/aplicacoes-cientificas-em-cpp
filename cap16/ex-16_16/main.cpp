/*
Enunciado:
Dadas três matrizes de nomes x, y e z do tipo Matriz, cada uma com n^2 elementos do tipo double, defina uma função para, a partir da Matriz x e da 
Matriz y, calcular os componentes da Matriz z, usando a expressão z_ks = (x_ks^2 + y_ks^2)/10. Use uma função ordinária para o cálculo da expressão.
*/

#include "Matriz.h"
#include <iostream>

int main (int argc, char* argv[])
{
    int n = lerDimensao();
    if (n == -1) {
        return 1; // Sair do programa se a dimensão for inválida
    }

    Matriz x, y, z;

    lerMatriz(x, n);
    lerMatriz(y, n);

    calcularMatrizZ(x, y, z, n);

    imprimirMatriz(z, n);

    return 0;
}