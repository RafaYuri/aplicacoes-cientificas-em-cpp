/*
Enunciado:
Defina em uma unidade independente:
* umo novo tipo, usando typedef, para representar um vetor com as seguintes características:
    - quantidade máxima de componentes: 30;
    - componenetes inteiros;
* três funções independentes para:
    - sortear os n (1 <= n <= 30) componentes inteiros do vetor de -20 até +30;
    - calcular a soma de todos n primeiros componentes do vetor;
    - calcular a quantidade de componentes positivos dentre os n primeiros componentes.
*/

#include <iostream>
#include "VetorInteiros.h"

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    VetorInteiros vetor;
    int n;

    // Leitura do número de componentes do vetor
    std::cout << "Digite o número de componentes do vetor (1 a 30): ";
    std::cin >> n;

    // Validação do número de componentes
    if (n < 1 or n > MAX_COMPONENTES)
    {
        std::cerr << "Número de componentes inválido. Deve ser entre 1 e " << MAX_COMPONENTES << ".\n";
        return 1;
    }

    // Sorteio dos componentes do vetor
    sortearVetor(vetor, n);

    // Cálculo da soma dos n primeiros componentes
    int soma = somaComponentes(vetor, n);

    // Cálculo da quantidade de componentes positivos entre os n primeiros
    int contPositivos = contaPositivos(vetor, n);

    // Exibição dos resultados
    std::cout << "Soma dos " << n << " primeiros componentes: " << soma << std::endl;
    std::cout << "Quantidade de componentes positivos entre os " << n << " primeiros: " << contPositivos << std::endl;

    return 0;
}