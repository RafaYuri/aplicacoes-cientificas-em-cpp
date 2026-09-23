/*
Enunciado:
Elaborar uma aplicação C++, utilizando o conceito de unidades independentes, com as seguintes funções:
* trocar o conteúdo de duas variáveis inteiras. Utilize o seguinte cabeçalho:
    void troca (int &a, int &b);
* colocar 3 valores inteiros em ordem crescente. Utilize a função troca e o seguinte cabeçalho:
    void crescente (int &a, int &b, int &c);
* colocar 3 valores inteiros em ordem decrescente. Utilize a função troca e o seguinte cabeçalho:
    void decrescente (int &a, int &b, int &c);
* função "main" para testar as demais funções.
*/

#include <iostream>
#include "ordenacao.h"

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    int a, b, c;

    // Leitura dos valores
    std::cout << "Digite três valores inteiros: ";
    std::cin >> a >> b >> c;

    crescente (a, b, c);
    std::cout << "Os valores digitados em ordem crescente são: " << a << " " << b << " " << c << std::endl;

    decrescente (a, b, c);
    std::cout << "Os valores digitados em ordem decrescente são: " << a << " " << b << " " << c << std::endl;

    return 0;
}