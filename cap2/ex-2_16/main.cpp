/*
Enunciado:
2.16. Dado um ângulo (g) em graus, elaborar um programa para converter este valor para radianos.

r = g * pi / 180
*/

#include <iostream>
#include <cmath>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double g, r;

    // Leitura do ângulo em graus
    std::cout << "Digite o ângulo em graus: ";
    std::cin >> g;

    // Conversão para radianos
    r = g * M_PI / 180;

    // Impressão do resultado
    std::cout << "r (radianos) = " << r << std::endl;

    return 0;
}