/*
Enunciado:
Dado um valor de x, elaborar um programa para calcular e exibir o valor da função y abaixo (se existir).

y = x/(x^2-4) + sqrt(abs((x^3-2)/5)) + 1/x^2
*/

#include <iostream>
#include <cmath>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double x, y;

    // Leitura do valor de x
    std::cout << "Digite o valor de x: ";
    std::cin >> x;

    // Cálculo do valor de y
    y = x / (x * x - 4) + sqrt(fabs((pow(x, 3) - 2) / 5)) + 1 / (x * x);

    // Exibição do valor de y

    // Verificação se y existe (diferente de NaN ou inf)
    if (std::isnan(y) or std::isinf(y))
    {
        std::cout << "O valor de y não existe para x = " << x << std::endl;
    }
    else
    {
        std::cout << "y = " << y << std::endl;
    }

    return 0;
}