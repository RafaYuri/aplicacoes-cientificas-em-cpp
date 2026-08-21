/*
Enunciado:
Defina uma única função em C++ para calcular a área (A = b * h) e o perímetro (P = 2 * (b + h)) de um retângulo.
*/

#include <iostream>

void calculaPerimetroArea (double a, double b, double &area, double &perimetro)
{
    area = a * b;
    perimetro = 2 * (a + b);
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double a, b, area, perimetro;

    // Leitura de dados
    std::cout << "Digite o valor de a: ";
    std::cin >> a;
    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    // Chamada da função
    calculaPerimetroArea(a, b, area, perimetro);

    // Impressão dos resultados
    std::cout << "Área: " << area << std::endl;
    std::cout << "Perímetro: " << perimetro << std::endl;

    return 0;
}