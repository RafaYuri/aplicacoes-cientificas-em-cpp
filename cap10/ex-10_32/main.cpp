/*
Enunciado:
Elaborar uma função para calcular a integral numérica da função f(x)=sen(x)+1 em um intervalo [a,b] qualquer, utilizando o método 
dos trapézios. O usuário deve ter liberdade de escolher o intervalo e o número de divisões.

x0 = a
xn = b
h = (b-a)/n
xi = x0 + i*h
yi = f(xi) = sen(xi) + 1
área = h/2 * (y0 + 2*y1 + 2*y2 + ... + 2*y(n-1) + yn)

*/

#include <iostream>
#include <cmath>

double fx (double x)
{
    return sin(x) + 1;
}

double integralTrapezio (double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = 0.5 * (fx(a) + fx(b));
    for (int i = 1; i < n; i++)
    {
        sum += fx(a + i * h);
    }
    return h * sum;
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double a, b;
    int n;

    // Leitura dos valores
    std::cout << "Digite o valor de a: ";
    std::cin >> a;
    std::cout << "Digite o valor de b: ";
    std::cin >> b;
    std::cout << "Digite o número de divisões: ";
    std::cin >> n;

    // Cálculo da integral
    double integral = integralTrapezio(a, b, n);

    // Impressão do resultado
    std::cout << "Integral = " << integral << std::endl;

    return 0;
}