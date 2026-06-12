/*
Enunciado:
Dado o raio (r) de uma esfera, elaborar um programa para calcular e exibir seu volume (v).

v = 4/3 * pi * r^3

*/

#include <iostream>
#include <cmath>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double r, v;

    // Entrada do raio
    std::cout << "Digite o raio da esfera: ";
    std::cin >> r;

    // Cálculo do volume
    v = 4.0 * M_PI * r * r * r / 3.0;

    // Impressão do resultado
    std::cout << "Volume = " << v << std::endl;

    return 0;
}