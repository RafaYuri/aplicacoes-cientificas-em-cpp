/*
Enunciado: 
Uma elipse poder definida pela equação x^2/a^2 + y^2/b^2 = 1. Considerando-se a=2 e b=3, elaborar um programa que verifique se um ponto (x,y) dado 
está dentro da elipse, fora da elipse ou na linha da elipse.
*/

#include <iostream>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double x, y, eq;
    const double a = 2.0;
    const double b = 3.0;

    // Leitura dos valores de x e y
    std::cout << "Digite o valor de x: ";
    std::cin >> x;
    std::cout << "Digite o valor de y: ";
    std::cin >> y;

    // Avaliação da equação da elipse
    eq = (x * x) / (a * a) + (y * y) / (b * b);

    // Verificação do resultado
    if (eq < 1.0)
    {
        std::cout << "O ponto está dentro da elipse." << std::endl;
    }

    else if (eq > 1.0)
    {
        std::cout << "O ponto está fora da elipse." << std::endl;
    }

    else
    {
        std::cout << "O ponto está na linha da elipse." << std::endl;
    }

    return 0;
}