/*
Enunciado:
Elaborar um programa para calcular e exibir o montante Mn de um capital inicial C investido durante n meses a taxa de juros i.

Mn = C * (1 + i)^n
*/

#include <iostream>
#include <cmath>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double C, i, n, Mn;

    // Leitura de dados
    std::cout << "Digite o capital inicial: ";
    std::cin >> C;
    std::cout << "Digite a taxa de juros mensal (em decimal, ex: 0.01 para 1%): ";
    std::cin >> i;
    std::cout << "Digite o número de meses: ";
    std::cin >> n;

    // Cálculo do montante
    Mn = C * std::pow(1 + i, n);

    // Exibição do resultado
    std::cout << "O montante final é: " << Mn << std::endl;

    return 0;
}