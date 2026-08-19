/*
Enunciado:
Elaborar uma função para calcular o valor do exponencial de x a partir da soma das n primeiras parcelas da série:
exp(x) = 1 + x/1! + x^2/2! + x^3/3! + ...
*/

#include <iostream>
#include <iomanip>
#include <cmath>

double fatorial (int n)
{
    double fat = 1;
    for (size_t i = 1; i <= n; i++)
    {
        fat *= i;
    }
    return fat;
}

double exp_serie (double x, int n)
{
    double soma = 0.0;
    for (size_t i = 0; i <= n; i++)
    {
        soma += pow (x, i) / fatorial (i);
    }
    return soma;
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double x;
    int n;
    
    // Leitura dos valores
    std::cout << "Digite o valor de x: ";
    std::cin >> x;
    std::cout << "Digite o número de termos: ";
    std::cin >> n;
    
    // Cálculo do exponencial
    double resultado = exp_serie(x, n);
    
    // Impressão do resultado
    std::cout << "exp(" << x << ") = " << std::fixed << std::setprecision(9) << resultado << std::endl;
    
    return 0;
}