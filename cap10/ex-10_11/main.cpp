/*
Enunciado:
Dados os valores de x e n, elaborar uma função para exibir as n primeiras parcelas da sequência:
1/3x^0.2, 4/7x^0.4, 7/11x^0.6, ...

*/

#include <iostream>
#include <cmath>

void imprimirSequencia (double x, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << (3.0 * i + 1) / (4 * i + 3) * pow (x, 0.2 * (i + 1)) << "\t";
    }
    std::cout << std::endl;
}

int main (int argc, char *argv[])
{
    double x;
    int n;
    
    std::cout << "Digite o valor de x: ";
    std::cin >> x;
    std::cout << "Digite o valor de n: ";
    std::cin >> n;
    
    imprimirSequencia(x, n);
    
    return 0;
}