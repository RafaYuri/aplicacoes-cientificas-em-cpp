/*
Enunciado:
Dado um valor qualquer, elaborar um programa para verificar se o mesmo é inteiro.
*/

#include <iostream>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double x;
    int x_int;

    // Leitura do valor de x
    std::cout << "Digite o valor de x: ";
    std::cin >> x;

    // Verificação se x é inteiro
    x_int = static_cast<int>(x);

    // Impressão do resultado
    if (x == x_int)
    {
        std::cout << "O valor de x é inteiro." << std::endl;
    }
    else
    {
        std::cout << "O valor de x não é inteiro." << std::endl;
    }
    
    return 0;
}