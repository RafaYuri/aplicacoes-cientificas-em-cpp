/*
Enunciado:
Dado um valor de x qualquer, elaborar um programa para calcular e exibir o valor da função y.

y= log_3(x^2)+e+e^(pi)+pi^e
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
    y = log(x * x) / log(3) + M_E + pow(M_E, M_PI) + pow(M_PI, M_E);

    // Saída do resultado
    std::cout << "y = " << y << std::endl;

    return 0;
}
