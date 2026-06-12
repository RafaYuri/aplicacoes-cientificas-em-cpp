/*
Enunciado:
2.20. Dada uma medida em milímetros, elaborar um programa para converter o valor dado para polegadas. (1"=25,4mm)
*/

#include <iostream>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double mm, in;

    // Leitura da medida em milímetros
    std::cout << "Digite a medida em milímetros: ";
    std::cin >> mm;

    // Conversão para polegadas
    in = mm / 25.4;

    // Impressão do resultado
    std::cout << "in = " << in << std::endl;

    return 0;
}
