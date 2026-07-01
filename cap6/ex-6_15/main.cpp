/*
Enunciado:
Dadas as coordenadas (x,y) de um ponto no plano cartesiano, elaborar um programa para verificar em que quadrante o ponto está 
localizado. Verificar também a possibilidade do ponto estar sobre um dos eixos ou na origem dos eixos (0,0).
*/

#include <iostream>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double x, y;

    // Leitura das coordenadas
    std::cout << "Digite as coordenadas (x, y): ";
    std::cin >> x >> y;

    // Verificação do quadrante
    if (x > 0 )
    {
        if (y > 0)
        {
            std::cout << "O ponto está no primeiro quadrante." << std::endl;
        }
        else if (y < 0)
        {
            std::cout << "O ponto está no quarto quadrante." << std::endl;
        }
        else 
        {
            std::cout << "O ponto está sobre o eixo x." << std::endl;
        }
    }
    else if (x < 0)
    {
        if (y > 0)
        {
            std::cout << "O ponto está no segundo quadrante." << std::endl;
        }
        else if (y < 0)
        {
            std::cout << "O ponto está no terceiro quadrante." << std::endl;
        }
        else
        {
            std::cout << "O ponto está sobre o eixo x." << std::endl;
        }
    }
    else
    {
        if (y > 0)
        {
            std::cout << "O ponto está sobre o eixo y." << std::endl;
        }
        else if (y < 0)
        {
            std::cout << "O ponto está sobre o eixo y." << std::endl;
        }
        else
        {
            std::cout << "O ponto está na origem." << std::endl;
        }
    }
    
    return 0;
}