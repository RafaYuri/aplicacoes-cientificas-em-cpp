/*
Enunciado:
2.19. Dada uma medida em polegadas, elaborar um programa para converter o valor dado para milímetros. (1"=25,4mm)
*/

#include <iostream>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double in, mm;

    // Leitura da medida em polegadas
    std::cout << "Digite a medida em polegadas: ";
    std::cin >> in;

    // Conversão para milímetros
    mm = in * 25.4;

    // Impressão do resultado
    std::cout << "mm = " << mm << std::endl;

    return 0;
}