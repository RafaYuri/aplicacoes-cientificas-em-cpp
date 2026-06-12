/*
Enunciado:
2.22. Dada uma temperatura em graus Farenheit (f), elaborar um programa para converter o valor dado para graus Celsius (c). (c = 5(f-32)/9)
*/

#include <iostream>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double f, c;

    // Leitura da temperatura em Fahrenheit
    std::cout << "Digite a temperatura em Fahrenheit: ";
    std::cin >> f;

    // Conversão para Celsius
    c = 5 * (f - 32) / 9;

    // Impressão do resultado
    std::cout << "c (°C) = " << c << std::endl;

    return 0;
}
