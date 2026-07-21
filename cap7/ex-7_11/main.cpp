/*
Enunciado:
Dadas as coordenadas (x, y) dos vértices de um triângulo, elaborar um programa para calcular e exibir os lados a, b e c do triângulo e classificá-lo 
em Retângulo, Acutângulo ou Obtusângulo. Utilize a técnica de swap para garantir que a seja o maior lado.
* Retângulo: a^2 = b^2 + c^2
* Acutângulo: a^2 < b^2 + c^2
* Obtusângulo: a^2 > b^2 + c^2
*/

#include <iostream>
#include <cmath>

// Cálculo dos lados do triângulo
double calculaLado (double x1, double y1, double x2, double y2)
{
    return sqrt (pow (x2 - x1, 2) + pow (y2 - y1, 2));
}

// Função main
int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double x1, y1, x2, y2, x3, y3;
    double a, b, c;

    // Leitura das coordenadas dos vértices
    std::cout << "Digite as coordenadas do primeiro ponto (x y): ";
    std::cin >> x1 >> y1;
    std::cout << "Digite as coordenadas do segundo ponto (x y): ";
    std::cin >> x2 >> y2;
    std::cout << "Digite as coordenadas do terceiro ponto (x y): ";
    std::cin >> x3 >> y3;

    // Cálculo dos lados
    a = calculaLado(x1, y1, x2, y2);
    b = calculaLado(x2, y2, x3, y3);
    c = calculaLado(x3, y3, x1, y1);

    // Garantindo a como maior lado
    if (a < b)
    {
        double temp = a;
        a = b;
        b = temp;
    }

    if (a < c)
    {
        double temp = a;
        a = c;
        c = temp;
    }

    // Impressão dos lados
    std::cout << "Lado a: " << a << std::endl;
    std::cout << "Lado b: " << b << std::endl;
    std::cout << "Lado c: " << c << std::endl;

    // Classificação do triângulo
    if (a * a == b * b + c * c)
    {
        std::cout << "Triângulo Retângulo" << std::endl;
    }
    else if (a * a < b * b + c * c)
    {
        std::cout << "Triângulo Acutângulo" << std::endl;
    }
    else
    {
        std::cout << "Triângulo Obtusângulo" << std::endl;
    }

    return 0;
}