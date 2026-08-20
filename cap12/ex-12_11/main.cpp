/*
Enunciado:
Dado o valor de x (em graus), defina uma função em C++ para calcular e exibir o valor do seno de x, através da série fornecida. Adote como 
critério de cálculo a soma de todas as parcelas superiores a 1e-8. Lembrete que a série do seno é desenvolvida considerando-se o ângulo em 
radianos.

s = x - x^3/3! + x^5/5! - x^7/7! + ...
*/

#include <iostream>
#include <cmath>

double fatorial (int n)
{
    double fat = 1;
    for (int i = 1; i <= n; i++)
    {
        fat *= i;
    }
    return fat;
}

double converte_graus_radianos(double graus)
{
    return graus * M_PI / 180.0;
}

double serieSeno (double x)
{
    double soma = 0;
    double x_rad = converte_graus_radianos(x);
    double parcela;
    int i = 1;

    do {
        parcela = pow(-1, i + 1) * pow(x_rad, 2 * i - 1) / fatorial (2 * i - 1);
        soma += parcela;
        i++;
    }while (fabs(parcela) > 1e-8);

    return soma;
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double x;

    // Leitura do ângulo x
    std::cout << "Digite o ângulo x (em graus): ";
    std::cin >> x;

    // Cálculo do seno
    double seno = serieSeno(x);

    // Exibição do resultado
    std::cout << "O seno de " << x << " graus é: " << seno << std::endl;

    return 0;
}