/*
Enunciado:
Dados 4 valores quaisquer, elaborar um programa para exibir apenas o maior valor.
*/

#include <iostream>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double a, b, c, d;
    double menor;

    // Leitura dos valores
    std::cout << "Digite 4 valores quaisquer: ";
    std::cin >> a >> b >> c >> d;

    // Encontrando o menor valor
    menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    if (d < menor) menor = d;

    // Exibindo o menor valor
    std::cout << "O menor valor é: " << menor << std::endl;

    return 0;
}