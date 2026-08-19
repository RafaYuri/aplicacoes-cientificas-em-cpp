/*
Enunciado:
Elaborar uma função para calcular a soma das n primeiras parcelas da sequência:
S = 1! + 2! + 3! + 4! + ...
*/

#include <iostream>

double fatorial (int n)
{
    double fat = 1;
    for (size_t i = 1; i <= n; i++)
    {
        fat *= i;
    }
    return fat;
}

double soma_fatoriais (int n)
{
    double soma = 0.0;
    for (size_t i = 1; i <= n; i++)
    {
        soma += fatorial (i);
    }
    return soma;
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    int n;
    
    // Leitura da entrada
    std::cout << "Digite o número de parcelas: ";
    std::cin >> n;
    
    // Cálculo e exibição do resultado
    double resultado = soma_fatoriais (n);
    std::cout << "S = " << resultado << std::endl;
    
    return 0;
}