/*
Enunciado:
Elaborar uma função para calcular o valor do pi utilizando a fórmula de François Viète:

pi = 2 / (sqrt(2)/2 * sqrt(2 + sqrt(2))/2 * sqrt(2 + sqrt(2 + sqrt(2)))/2 * ...)

*/
#include<iostream>
#include<cmath>

double pi_Viete (int n)
{
    double pi = 2.0;
    double denominador, termo_n;
    termo_n = sqrt(2);
    denominador = termo_n;

    for (int i = 2; i <= n; i++)
    {
        termo_n = sqrt(2 + termo_n);
        denominador *= termo_n;
    }

    denominador = denominador / pow (2, n);
    pi /= denominador;

    return pi;
}

int main (int argc, char *argv[])
{
    int n;
    std::cout << "Digite o número de fatores do denominador da fórmula de Viète (n >= 1): ";
    std::cin >> n;

    std::cout << "pi = " << pi_Viete(n) << std::endl;
    return 0;
}
