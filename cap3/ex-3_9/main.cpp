/*
Enunciado:
Dadas as coordenada (x, y) de um ponto no plano cartesiano, elaborar um programa para calcular e exibir a distância deste ponto até a origem 
dos eixos.
*/

#include <iostream>
#include <cmath>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double x, y, distancia;

    // Entrada do ponto cartesiano
    std::cout << "Digite as coordenadas do ponto (x y): ";
    std::cin >> x >> y;

    // Cálculo da distância
    distancia = sqrt(x * x + y * y);

    // Exibição do resultado
    std::cout << "distância = " << distancia << std::endl;

    return 0;
}