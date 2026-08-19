/*
Enunciado:
Nas séries de potência, quanto maior a quantidade de parcelas utilizadas no calculo, maior é a precisão do resultado. Calcular o valor da série 
do seno de x (em radianos) para todos os valores de n (quantidade de parcelas) de 1 a 20 para observarmos esta convergência.

sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
*/

#include <iostream>
#include <cmath>
#include <iomanip>

double fatorial (int n)
{
    double fat = 1;
    for (int i = 1; i <= n; i++)
    {
        fat *= i;
    }
    return fat;
}

double seno_serie (double x, int n)
{
    double soma = 0;
    for (size_t i = 1; i <= n; i++)
    {
        soma += pow (-1, i + 1) * pow (x, 2 * i - 1) / fatorial (2 * i - 1);
    }
    return soma;
}

int main (int argc, char *argv[])
{
    double x;
    std::cout << "Digite o valor de x em radianos: ";
    std::cin >> x;
    for ( size_t i = 1; i <= 20; i++)
    {
        std::cout << "n = " << i << " => sin(x) = " << std::fixed << std::setprecision(10) << seno_serie(x, i) << std::endl;
    }
    
    return 0;
}