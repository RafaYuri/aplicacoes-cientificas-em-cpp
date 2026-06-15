/*
Enunciado:
Dados os lados a e b de um retângulo, calcular e exibir a sua área e indicar qual deveria ser o raio r de um círculo para que as áreas das 
duas figuras fossem iguais.

*/

#include <iostream>
#include <cmath>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double a, b, area_retangulo, raio_circulo;

    // Entrada dos lados do retângulo
    std::cout << "Digite o valor de a: ";
    std::cin >> a;
    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    // Cálculo da área do retângulo (e círculo)
    area_retangulo = a * b;

    // Cálculo do raio do círculo de área equivalente
    raio_circulo = sqrt (area_retangulo / M_PI);

    // Exibição dos resultados
    std::cout << "Área do retângulo = " << area_retangulo << std::endl;
    std::cout << "Raio do círculo = " << raio_circulo << std::endl;

    return 0;
}