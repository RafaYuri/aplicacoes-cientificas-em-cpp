/*
Enunciado:
Elaborar um programa para calcular o logaritmo de a em uma base b qualquer.

log_b(a) = log_c(a) / log_c(b)
*/

#include <iostream>
#include <cmath>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double a, b, resultado;

    // Leitura de a e b
    std::cout << "Digite o valor de a: ";
    std::cin >> a;
    std::cout << "Digite o valor da base b: ";
    std::cin >> b;

    // Cálculo do logaritmo
    resultado = log(a) / log(b);

    // Impressão do resultado
    std::cout << "log_b(a) = " << resultado << std::endl;

    return 0;
}