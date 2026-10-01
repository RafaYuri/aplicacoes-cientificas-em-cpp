/*
Enunciado:
Defina duas funções, uma que calcula a média e outra que calcula o desvio padrão de uma amostra representada por um vetor 
do tipo Valores que possui componenetes do tipo double. Utilize as fórmulas e as declarações fornecidas. Observe que a função 
que calcula o desvio padrão amostral deverá fazer uma chamada à função que calcula a média amostral.

média = sum x_k / n

desvio padrão = sqrt(sum (x_k - média)^2 / (n - 1))

const int COMP = 100;
typedef double Valores[COMP];
double media (Valores &x, int n);
double desvioPadrao (Valores &x, int n);
*/

#include <iostream>
#include "estatisticas.h"

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    Valores x;
    int n;

    // Leitura do número de elementos
    std::cout << "Digite o número de elementos (até " << COMP << "): ";
    std::cin >> n;

    // Verificação do número de elementos
    if (n < 1 or n > COMP)
    {
        std::cerr << "Número de elementos inválido!" << std::endl;
        return 1;
    }

    // Leitura dos elementos do vetor
    std::cout << "Digite os elementos do vetor:" << std::endl;
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> x[i];
    }

    // Cálculo da média e do desvio padrão
    double m = media(x, n);
    double dp = desvioPadrao(x, n);

    // Exibição dos resultados
    std::cout << "Média: " << m << std::endl;
    std::cout << "Desvio padrão: " << dp << std::endl;

    return 0;
}