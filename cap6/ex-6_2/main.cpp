/*
Enunciado:
Dado um valor de x, elaborar um programa para calcular e exibir o valor da função y, de acordo com os intervalos a seguir.
* x < 2 -> y = sqrt(abs(x))
* x = 2 -> y = 0
* x > 2 -> y = log10(x)
*/

#include <iostream>
#include <cmath>

double func_y (double x)
{
    double y;
    if (x < 2)
    {
        y = sqrt (fabs(x));
    }

    else if (x == 2)
    {
        y = 0;
    }

    else
    {
        y = log10 (x);
    }

    return y;    
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double x;

    // Leitura do valor de x
    std::cout << "Digite o valor de x: ";
    std::cin >> x;

    // Exibição do resultado
    std::cout << "y = " << func_y (x) << std::endl;

    return 0;
}