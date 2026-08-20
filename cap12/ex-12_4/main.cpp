/*
Enunciado:
Dados a, b e n, defina uma função C++ para listar os n primeiros múltiplos de a não superiores a b. Use obrigatoriamente o 
cabeçalho fornecido:

void listar (double a, double b, int n);
*/

#include <iostream>

void listar (double a, double b, int n)
{
    double m = a;
    while (m <= b && n > 0)
    {
        std::cout << m << " ";
        m += a;
        n--;
    }
    std::cout << std::endl;
}

int main (int argc, char *argv[])
{
    double a, b;
    int n;
    std::cout << "Digite a, b e n: ";
    std::cin >> a >> b >> n;
    listar(a, b, n);
    return 0;
}