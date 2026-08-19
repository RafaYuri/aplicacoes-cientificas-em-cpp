/*
Enunciado:
Elaborar uma função para calcular o valor do pi através da soma das n primeiras parcelas da sequência:
pi = 4 - 4/3 + 4/5 - 4/7 + ...
*/

#include <iostream>
#include <cmath>
#include <iomanip>

double serie_pi (int n)
{
    double soma = 0.0;
    for (size_t i = 1; i <= n; i++)
    {
        soma += pow (-1, i + 1) * 4 / (2 * i - 1);
    }
    return soma;
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    int n;

    // Leitura do número de termos
    std::cout << "Digite o número de termos: ";
    std::cin >> n;

    // Cálculo do valor de pi
    double pi = serie_pi(n);

    // Exibição do resultado
    std::cout << "Pi = " << std::fixed << std::setprecision(10) << pi << std::endl;

    return 0;
}