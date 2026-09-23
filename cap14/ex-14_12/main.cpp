/*
Enunciado:
Elaborar uma aplicação C++, utilizando o conceito de Unidades Independentes, com as seguintes funções:
* calcular a área de um círculo. Utilize o seguinte cabeçalho:
    double area_circulo (double raio);
* calcular o perímetro de um círculo. Utilize o seguinte cabeçalho:
    double perimetro_circulo (double raio);
* calcular a área e o perímetro de um círculo em uma única função. Utilize o seguinte cabeçalho:
    void circulo (double raio, double &area, double &perimetro);
* função "main" para testar as demais funções.

*/

#include <iostream>
#include "circulo.h"

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double raio, area, perimetro;

    // Leitura do raio
    std::cout << "Digite o raio do círculo: ";
    std::cin >> raio;

    // Chamada da função circulo
    circulo (raio, area, perimetro);

    // Exibição dos resultados utilizando as funções com retorno e a passagem por referência
    std::cout << "Valores por funções com retorno:\n";
    std::cout << "Área = " << area_circulo (raio) << std::endl;
    std::cout << "Perímetro = " << perimetro_circulo (raio) << std::endl;

    std::cout << "Valores por passagem como referência:\n";
    std::cout << "Área = " << area << std::endl;
    std::cout << "Perímetro = " << perimetro << std::endl;

    return 0;
}
