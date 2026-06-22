/*
Enunciado:
Dado um valor x, elaborar um programa para verificar se x é positivo, negativo ou nulo.
*/

#include <iostream>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double x;

    // Leitura do valor de x
    std::cout << "Digite o valor de x: ";
    std::cin >> x;

    // Verificação do sinal de x e impressão da análise
    if (x > 0)
    {
        std::cout << "x é positivo." << std::endl;
    }
    else if (x < 0)
    {
        std::cout << "x é negativo." << std::endl;
    }
    else
    {
        std::cout << "x é nulo." << std::endl;
    }

    return 0;
}