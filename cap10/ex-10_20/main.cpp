/*
Enunciado:
Elaborar uma função para calcular a soma das n primeiras parcelas da sequência:
S = x^2/3 + x^4/7 + x^6/11 + ...

*/

#include <iostream>
#include <cmath>

double somaParcelas (double x, int n)
{
    int pot, den;
    double soma = 0;
    for (int i = 0; i < n; i++)
    {
        pot = 2 * (i + 1);
        den = 4 * i + 3;
        soma += pow(x, pot) / den;
    }
    return soma;
}

int main (int argc, char *argv[])
{
    double x;
    int n;
    std::cout << "Digite o valor de x: ";
    std::cin >> x;
    std::cout << "Digite o número de parcelas: ";
    std::cin >> n;
    std::cout << "Soma das parcelas: " << somaParcelas(x, n) << std::endl;
    return 0;
}