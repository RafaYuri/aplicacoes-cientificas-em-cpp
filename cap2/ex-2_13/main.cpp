/*
Enunciado:
2.13. Dados a base e a altura de um triângulo, elaborar um programa para calcular e exibibir a área do triângulo.
*/

#include <iostream>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double base, altura, area;

    // Entrada de dados
    std::cout << "Digite a base do triângulo: ";
    std::cin >> base;
    std::cout << "Digite a altura do triângulo: ";
    std::cin >> altura;

    // Cálculo da área
    area = 0.5 * base * altura;

    // Exibição da área
    std::cout << "Área = " << area << std::endl;

    return 0;
}