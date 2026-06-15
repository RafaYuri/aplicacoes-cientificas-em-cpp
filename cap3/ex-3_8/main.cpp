/*
Enunciado:
Dadas as coordenadas (x,y) de 2 pontos no plano cartesiano, elaborar um programa para calcular e exibir a distância entre os dois pontos.
*/

#include <iostream>
#include <cmath>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double x1, y1, x2, y2, distancia;

    // Entrada das coordenadas dos pontos
    std::cout << "Digite as coordenadas do primeiro ponto (x y): ";
    std::cin >> x1 >> y1;
    std::cout << "Digite as coordenadas do segundo ponto (x y): ";
    std::cin >> x2 >> y2;

    // Cálculo da distância entre os pontos
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Exibição do resultado
    std::cout << "distância = " << distancia << std::endl;

    return 0;
}
