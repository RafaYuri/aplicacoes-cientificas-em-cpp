/*
Enunciado:
Elaborar uma função para calcular a soma das n primeiras parcelas da sequência:
S = 1 - 2/3 + 3/5 - 4/7 + ...
*/

#include <iostream>
#include <cmath>

double soma_parcelas (int n)
{
    double soma = 0.0;
    for (size_t i = 1; i <= n; i++)
    {
        soma += pow (-1, i + 1) * i / (2 * i - 1);
    }
    return soma;
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    int n;
    
    // Leitura do número de parcelas
    std::cout << "Digite o número de parcelas: ";
    std::cin >> n;
    
    // Cálculo da soma
    double soma = soma_parcelas(n);
    
    // Exibição do resultado
    std::cout << "S = " << soma << std::endl;
    
    return 0;
}