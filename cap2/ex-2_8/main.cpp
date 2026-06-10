/*
Enunciado:
2.8. Elaborar um programa para calcular e exibir a média aritmética de dois valores quaisquer.

*/

#include <iostream>

int main ()
{
    double a, b, media ;
    std::cout << "Entre com dois números quaisquer: ";
    std::cin >> a >> b;
    media = 0.5 * (a + b);
    std::cout << "Média = " << media << std::endl;

    return 0;
}