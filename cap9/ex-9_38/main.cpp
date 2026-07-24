/*
Enunciado:
Criar uma função para calcular o valor da função y=f(x):
y = x^2 + 2*x + 1
Elaborar um programa para exibir uma tabela com os valores de x entre 0 e 100 com intervalor 0.5 e os respectivos valores de y=f(x).
*/

#include <iostream>
#include <iomanip>

double func_x (double x)
{
    return x * x + 2 * x + 1;
}

int main (int argc, char *argv[])
{
    // Exibição da tabela
    for (double x = 0; x <= 100; x += 0.5)
    {
        std::cout << "x = " << std::setw(4) << std::left << x << " y = " << func_x (x) << std::endl;
    }

    return 0;
}