/*
Enunciado:
2.23. Dada uma temperatura em graus Celsius (c), elaborar um programa para converter a temperatura para graus Kelvin (k). (k = c + 273.15)
*/

#include <iostream>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double c, k;

    // Leitura da temperatura em Celsius
    std::cout << "Digite a temperatura em Celsius: ";
    std::cin >> c;

    // Conversão para Kelvin
    k = c + 273.15;

    // Impressão do resultado
    std::cout << "k (K) = " << k << std::endl;

    return 0;
}