/*
Enunciado:
Dados 3 valores quaisquer, elaborar um programa para exibi-los em ordem decrescente.
*/

#include <iostream>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double a, b, c, aux;

    // Leitura dos três valores
    std::cout << "Digite três valores quaisquer: ";
    std::cin >> a >> b >> c;

    // Ordenação decrescente
    if (b > a)
    {
        aux = a;
        a = b;
        b = aux;

        if (c > a)
        {
            aux = a;
            a = c;
            c = aux;
        }

        if (c > b)
        {
            aux = b;
            b = c;
            c = aux;
        }
    }

    else if (c > a)
    {
        aux = a;
        a = c;
        c = aux;

        aux = b;
        b = c;
        c = aux;
    }

    // Exibição do resultado
    std::cout << "Valores em ordem decrescente: " << a << " " << b << " " << c << std::endl;

    return 0;
}