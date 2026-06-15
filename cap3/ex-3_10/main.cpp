/*
Enunciado:
Dados os lados a, b e c de um triângulo, elaborar um programa para calcular e exibir o perímetro e a área do mesmo.

Fórmula de Heron: area = sqrt(sp*(sp-a)*(sp-b)*(sp-c))

onde sp = (a+b+c)/2 (semi-perímetro)
*/

#include <iostream>
#include <cmath>

int main ( int argc, char* argv[])
{
    // Declaração de variáveis
    double a, b, c;
    double perimetro, area, sp;

    // Leitura de dados
    std::cout << "Digite o valor dos lados do triângulo: ";
    std::cin >> a >> b >> c;

    // Cálculos
    perimetro = a + b + c;
    sp = perimetro / 2;
    area = sqrt(sp * (sp - a) * (sp - b) * (sp - c));

    // Exibição dos resultados
    std::cout << "Perímetro = " << perimetro << std::endl;
    std::cout << "Área = " << area << std::endl;

    return 0;
}