/*
Enunciado:
Dada uma temperatura em graus Farenheit, elaborar um programa para covnerter a temperatura para graus Kelvin.
*/

#include <iostream>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double f, k;

    // Leitura da temperatura em Farenheit
    std::cout << "Digite a temperatura em Farenheit: ";
    std::cin >> f;

    // Conversão para Kelvin
    k = (f - 32) * 5 / 9 + 273.15;

    // Impressão do resultado
    std::cout << "k (K) = " << k << std::endl;

    return 0;
}