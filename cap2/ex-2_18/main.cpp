/*
Enunciado:
2.18. Dado um ângulo em radianos, elaborar um programa para converter este valor para grados.
Lembrar que 400 grados equivalem a 2 * pi.
*/

#include <iostream>
#include <cmath>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double rad, grad;

    // Leitura do ângulo em radianos
    std::cout << "Digite o ângulo em radianos: ";
    std::cin >> rad;

    // Conversão para grados
    grad = rad * 400 / (2 * M_PI);

    // Impressão do resultado
    std::cout << "grad (grados) = " << grad << std::endl;

    return 0;
}