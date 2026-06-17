/*
Enunciado:
Em algumas linguagens (como Pascal, por exemplo) não existe uma função ou operador pré-definido para efetuar o cálculo de potência. Neste caso, 
o cálculo da potência pode ser efetuado da seguinte forma:

x^y = e^(y * ln(x))

Elabore um programa para efetuar o cálculo o cálculo da potência utilizando a fórmula acima. O programa deve receber os valores de x e y e exibir 
o valor de x^y.
*/

#include <iostream>
#include <cmath>

int main (int argc, char *argv[])
{
    // Declaração de variaveis
    double x, y, resultado;

    // Leitura de x e y
    std::cout << "Digite o valor de x: ";
    std::cin >> x;
    std::cout << "Digite o valor de y: ";
    std::cin >> y;

    // Cálculo da potência
    resultado = exp (y * log (x));

    // Exibição do resultado
    std::cout << "x^y = " << resultado << std::endl;

    return 0;
}

