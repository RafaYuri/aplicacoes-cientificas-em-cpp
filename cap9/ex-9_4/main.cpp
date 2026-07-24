/*
Enunciado:
Elaborar um programa para calcular e exibir as n primeiras parcelas da sequência:
1, 3, 5, 7, ...
*/

#include <iostream>

void sequencia (int n)
{
    for (size_t i = 0; i < n; i++)
    {
        std::cout << 1 + 2 * i << " ";
    }
    std::cout << std::endl;
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    int n;

    // Leitura de n
    std::cout << "Digite a quantidade de parcelas a serem exibidas: ";
    std::cin >> n;

    // Chamada da função
    sequencia (n);

    return 0;
}