/*
Enunciado:
2.21. Dada uma temperatura em graus Celsius (c), elaborar um programa para converter o valor dado para graus Fahrenheit (f). (f = 9c/5 + 32)
*/

#include <iostream>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double c, f;

    // Leitura da temperatura em Celsius
    std::cout << "Digite a temperatura em Celsius: ";
    std::cin >> c;

    // Conversão para Fahrenheit
    f = 9 * c / 5 + 32;

    // Impressão do resultado
    std::cout << "f (°F) = " << f << std::endl;

    return 0;
}