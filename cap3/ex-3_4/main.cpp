/*
Enunciado:
Dado um valor de x qualquer, elaborar um programa para calcular e exibir o valor da função y.

y = sqrt((x^2 + 3)/2)
*/

#include <iostream>
#include <cmath>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double x, y;

    // Entrada do parâmetro x
    std::cout << "Digite o valor de x: ";
    std::cin >> x;


    // Cálculo do valor de y
    y = sqrt ((x * x + 3) / 2);

    // Saída do resultado
    std::cout << "y = " << y << std::endl;

    return 0;
}