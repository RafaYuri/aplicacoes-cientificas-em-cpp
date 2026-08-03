/*
Enunciado:
Elaborar uma função para exibir as n primeiras parcelas da série de Fibonacci.
0, 1, 1, 2, 3, 5, 8, ...
*/

#include <iostream>

void imprimirFibonacci (int n)
{
    int a, b, c;

    a = 0;
    b = 1;

    for (int i = 0; i < n; i++)
    {
        if (i == 0) std::cout << a << " ";
        else if (i == 1) std::cout << b << " ";
        else
        {
            c = a + b;
            a = b;
            b = c;
            std::cout << c << " ";
        }
    }
    std::cout << std::endl;
}

int main (int argc, char *argv[])
{
    int n;
    std::cout << "Digite o número de parcelas da série de Fibonacci: ";
    std::cin >> n;
    imprimirFibonacci(n);
    return 0;
}