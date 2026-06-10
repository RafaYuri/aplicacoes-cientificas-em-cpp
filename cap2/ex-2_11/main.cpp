/*
Enunciado:
Dados os lados a e b de um retângulo, elaborar um programa para calcular e exibir a área e o perímetro do retângulo.
*/

#include <iostream>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double a, b, perimetro, area;

    // Entrada de parâmetros
    std::cout << "Digite o lado a: ";
    std::cin >> a;
    std::cout << "Digite o lado b: ";
    std::cin >> b;

    // Cálculo do perímetro e da área
    perimetro = 2 * (a + b);
    area = a * b;

    // Exibição dos resultados
    std::cout << "Área = " << area << std::endl;
    std::cout << "Perímetro = " << perimetro << std::endl;

    return 0;
}