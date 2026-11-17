/*
Enunciado:
Elaborar um programa, organizado em unidades independentes, para manipular um vetor dinâmico. Usar typedef 
para definir um tipo VETOR como sendo um ponteiro para inteiros e criar as seguintes funções:
- alocar memória para um VETOR de n elementos;
- desalocar um VETOR;
- sortear os elementos do vetor em um intervalo pré-definido [a, b];
- exibir elementos de um VETOR;
- calcular a média dos elementos pares de um VETOR;
- função "main" para testar as demais funções.
*/

#include "vetor.h"
#include <iostream>

int main (int argc, char *argv[])
{
    VETOR v;
    int n, a, b;

    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> n;

    alocarVetor(v, n);

    std::cout << "Digite o intervalo [a, b] para sortear os elementos do vetor:" << std::endl;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;

    sortearVetor(v, n, a, b);
    exibirVetor(v, n);

    double media = mediaPares(v, n);
    if (media == 0)
    {
        std::cout << "Não há elementos pares no vetor." << std::endl;
    }
    else
    {
        std::cout << "A média dos elementos pares do vetor é: " << media << std::endl;
    }

    desalocarVetor(v);

    return 0;
}