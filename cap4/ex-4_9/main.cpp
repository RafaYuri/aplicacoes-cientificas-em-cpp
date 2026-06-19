/*
Enunciado:
Codificar uma linha de programa para que a variável c seja o dobro da variável a se ela for maior que a variável b, caso contrário a variável c deverá 
ser o triplo de b.

R:
c = (a > b) ? 2* a : 3 * b;
*/

#include <iostream>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double a, b, c;

    // Leitura de variáveis
    std::cout << "Digite o valor de a: ";
    std::cin >> a;
    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    // Avaliação
    c = (a > b) ? 2 * a : 3 * b;

    // Saída
    std::cout << "c = " << c << std::endl;

    return 0;
}