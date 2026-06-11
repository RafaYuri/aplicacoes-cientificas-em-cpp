/*
Enunciado:
Dado o raio (r) de um círculo, elaborar um programa para calcular e exibir a área (a) do círculo e o comprimento (c) de sua
circunferência. Utilize a constante M_PI da biblioteca cmath para representar o valor de pi.

a = pi * r^2            c = 2 * pi * r
*/

#include <iostream>
#include <cmath>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double r, a, c;

    // Entrada de parâmetros
    std::cout << "Digite o raio: ";
    std::cin >> r;

    // Cálculo da área e perímetro
    a = M_PI * r * r;
    c = 2 * M_PI * r;

    // Exibição dos resultados
    std::cout << "Área = " << a << std::endl;
    std::cout << "Comprimento = " << c << std::endl;

    return 0;
}