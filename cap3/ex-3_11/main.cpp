/*
Enunciado:
Dadas as coordenadas (x,y) dos 3 vértices de um triângulo qualquer, elaborar um programa para calcular e exibir o tamanho dos 
lados a, b e c do triângulo, área do triângulo e o perímetro do triângulo.

Sugestão: utilize as fórmulas da distância e da área (Heron).
*/

#include <iostream>
#include <cmath>

double lado (double x1, double y1, double x2, double y2)
{
    return (sqrt(pow (x2 - x1, 2) + pow (y2 - y1, 2)));
}

double perimetro (double a, double b, double c)
{
    return a + b + c;
}

double area (double a, double b, double c)
{
    double sp = 0.5 * perimetro (a, b, c);
    return sqrt(sp * (sp - a) * (sp - b) * (sp - c));
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double x1, y1, x2, y2, x3, y3;
    double a, b, c;
    double p_tri, a_tri;

    // Leitura das coordenadas dos vértices
    std::cout << "Digite as coordenadas do primeiro vértice (x y): ";
    std::cin >> x1 >> y1;
    std::cout << "Digite as coordenadas do segundo vértice (x y): ";
    std::cin >> x2 >> y2;
    std::cout << "Digite as coordenadas do terceiro vértice (x y): ";
    std::cin >> x3 >> y3;

    // Cálculo dos lados
    a = lado(x1, y1, x2, y2);
    b = lado(x2, y2, x3, y3);
    c = lado(x3, y3, x1, y1);

    // Cálculo do perímetro
    p_tri = perimetro(a, b, c);

    // Cálculo da área
    a_tri = area(a, b, c);

    // Exibição dos resultados
    std::cout << "Lado a = " << a << std::endl;
    std::cout << "Lado b = " << b << std::endl;
    std::cout << "Lado c = " << c << std::endl;
    std::cout << "Perímetro = " << p_tri << std::endl;
    std::cout << "Área = " << a_tri << std::endl;

    return 0;
}
