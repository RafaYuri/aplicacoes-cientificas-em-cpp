/*
Enunciado:
2.17. Dado um ângulo em radianos, elaborar um programa para converter este valor para graus.

g = r * 180/pi
*/

#include <iostream>
#include <cmath>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double r, g;

    // Entrada do ângulo em radianos
    std::cout << "Digite o ângulo em radianos: ";
    std::cin >> r;

    // Conversão do ângulo para graus
    g = r * 180 / M_PI;

    // Impressão do resultado
    std::cout << "g (graus) = " << g << std::endl;

    return 0;
}