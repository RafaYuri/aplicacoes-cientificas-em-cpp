/*
Elaborar uma função para calcular a integral numérica da função f(x)=sen(x)+1 em um intervalo [a,b] qualquer, utilizando o método de 
Simpson 1/3. O usuário deve ter liberdade de escolher o intervalo e o número de divisões (que deve ser par).

I = y1 + y3 + y5 + ... + y(n-1)
P = y2 + y4 + y6 + ... + y(n-2)
área = h/3 * (y0 + 4*I + 2*P + yn)
*/

#include <iostream>
#include <cmath>

double fx (double x)
{
    return sin(x) + 1;
}

double integralSimpson1_3 (double a, double b, int n)
{
    double h = (b - a) / n;
    double soma_par = 0;
    double soma_impar = 0;

    for (int i = 1; i < n; i += 2)
    {
        soma_impar += fx(a + i * h);
    }

    for (int i = 2; i < n - 1; i += 2)
    {
        soma_par += fx(a + i * h);
    }

    return h / 3 * (fx(a) + 4 * soma_impar + 2 * soma_par + fx(b));
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

    if (n % 2 != 0)
    {
        std::cerr << "O número de divisões deve ser par." << std::endl;
        return 1;
    }

    // Cálculo da integral
    double integral = integralSimpson1_3(a, b, n);

    // Impressão do resultado
    std::cout << "O valor da integral é: " << integral << std::endl;

    return 0;
}
