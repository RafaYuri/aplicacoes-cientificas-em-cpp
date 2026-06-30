/*
Enunciado:
Dado um valor de x, elaborar um programa para calcular e exibir o valor da função y, de acordo com os intervalos a seguir. Utilizar apenas 3 comando if
* x < -2 -> y = sqrt(abs(x+1))
* x = -2 -> não existe função definida
* -2 < x < 2 -> y = 0
* x = 2 -> não existe função definida
* x > 2 -> y = sqrt(abs(1-x))
*/

#include <iostream>
#include <cmath>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double x, y;

    // Leitura do valor de x
    std::cout << "Digite o valor de x: ";
    std::cin >> x;

    // Cálculo do valor de y e exibição do resultado
    if (fabs(x) == 2)
    {
        std::cout << "Não existe função definida para x = " << x << std::endl;
    }

    else
    {
        y = 0;
        if (x < -2)
        {
            y = sqrt(fabs(x + 1));
        }

        else if(x > 2)
        {
            y = sqrt(fabs(1 - x));
        }

        std::cout << "y = " << y << std::endl;
    }

    return 0;
}