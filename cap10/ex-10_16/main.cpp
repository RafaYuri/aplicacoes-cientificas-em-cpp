/*
Enunciado:
Elaborar uma função para calcular a soma das n primeiras parcelas da sequência:
S = 1 + 3 + 5 + 7 +...
*/

#include <iostream>

int somaImpares (int n)
{
    int soma = 0;
    for (int i = 0; i < n; i ++)
    {
        soma += 2 * i + 1;
    }
    return soma;
}

int main (int argc, char *argv[])
{
    int n;
    std::cout << "Digite o número de parcelas: ";
    std::cin >> n;
    std::cout << "Soma: " << somaImpares(n) << std::endl;
    return 0;
}