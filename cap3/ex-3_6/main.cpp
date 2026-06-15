/*
Enunciado:
Dados os valor de a, b e c, coeficientes de uma equação de segundo grau, com a!=0, calcular e exibir o valor das raízes x_1 e x_2, 
utilizando a fórmula de Bhaskara.

x = (-b +- sqrt(b^2 - 4ac))/2a
*/

#include <iostream>
#include <cmath>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double a, b, c, x1, x2, delta;

    // Entrada dos coeficientes
    std::cout << "Digite o valor de a: ";
    std::cin >> a;
    std::cout << "Digite o valor de b: ";
    std::cin >> b;
    std::cout << "Digite o valor de c: ";
    std::cin >> c;

    // Cálculo do delta
    delta = b * b - 4 * a * c;

    // Cálculo das raízes
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    // Saída dos resultados
    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "x2 = " << x2 << std::endl;

    return 0;
}
