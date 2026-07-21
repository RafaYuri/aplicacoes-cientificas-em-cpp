/*
Enunciado:
Dados os lados b e c de um triângulo retângulo, elaborar um programa para calcular o lado a do triângulo utilizando a fórmula alternativa de Pitágoras 
que proporciona uma mior precisão.

a = b * sqrt (1 + (c/b)^2), sendo b >= c

*/

#include <iostream>
#include <cmath>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double a, b, c;

    // Leitura dos lados do triângulo
    std::cout << "Digite o lado b: ";
    std::cin >> b;
    std::cout << "Digite o lado c: ";
    std::cin >> c;

    // Garantindo que b >= c
    if (b < c)
    {
        double temp = b;
        b = c;
        c = temp;
    }

    // Cálculo do lado a
    a = b * sqrt (1 + pow (c/b, 2));

    // Exibição do resultado
    std::cout << "Lado a = " << a << std::endl;
    
    return 0;
}