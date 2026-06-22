/*
Enunciado:
Dadas as coordenadas (x, y) de 2 pontos no Plano Cartesiano, elaborar um programa para verificar qual dos dois pontos está mais 
próximo da origem dos eixos (0, 0).
*/

#include <iostream>
#include <cmath>

double distancia_origem (double x, double y)
{
    return sqrt(x * x + y * y);
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double x1, x2, y1, y2;
    double d1, d2;

    // Leitura das coordenadas dos pontos
    std::cout << "Digite as coordenadas do primeiro ponto (x y): ";
    std::cin >> x1 >> y1;
    std::cout << "Digite as coordenadas do segundo ponto (x y): ";
    std::cin >> x2 >> y2;

    // Cálculo das distâncias
    d1 = distancia_origem(x1, y1);
    d2 = distancia_origem(x2, y2);

    // Verificação do ponto mais próximo
    if (d1 < d2)
    {
        std::cout << "O primeiro ponto (" << x1 << ", " << y1 << ") está mais próximo da origem." << std::endl;
    }
    else if (d2 < d1)
    {
        std::cout << "O segundo ponto (" << x2 << ", " << y2 << ") está mais próximo da origem." << std::endl;
    }
    else
    {
        std::cout << "Os dois pontos estão à mesma distância da origem." << std::endl;
    }

    return 0;
}