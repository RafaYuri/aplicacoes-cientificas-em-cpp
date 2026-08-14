/*
Enunciado:
Elaborar uma função para calcular o valor de pi através da integral abaixo, utilizando o método de Simpson 3/8.

pi = integral de 0 a 1 de 4 / (1 + x^2) dx.

*/

#include <iostream>
#include <iomanip>

double fx (double x)
{
    return 4 / (1 + x * x);
}

double integralSimpson38 (double a, double b, int n)
{
    double h, soma;
    h = (b - a) / n;
    soma = fx(a) + fx(b);

    for (int i = 1; i < n; i++)
    {
        if (i % 3 == 0)
        {
            soma += 2 * fx(a + i * h);
        }

        else
        {
            soma += 3 * fx(a + i * h);
        }
    }
    
    return (3 * h / 8) * soma;
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    int n;

    // Leitura do número de intervalos
    std::cout << "Digite o número de intervalos (múltiplo de 3): ";
    std::cin >> n;

    // Verificação de n
    if (n % 3 != 0)
    {
        std::cerr << "O número de intervalos deve ser múltiplo de 3." << std::endl;
        return 1;
    }

    // Cálculo do valor de pi
    double pi = integralSimpson38(0.0, 1.0, n);

    // Impressão do resultado
    std::cout << "O valor de pi é: " << std::setprecision(10) <<pi << std::endl;

    return 0;
}