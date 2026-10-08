/*
Enunciado:
Criar uma unidade independente para manipular vetores de, no máximo, 30 elementos inteiros, com repetição. Nesta unidade 
devem existir funções para:

a) ler a dimensão do vetor (1 <= n <= 30): void LeDimensao (int &n);
b) ler os elementos do vetor (permitir repetição): void LeValores (int v[], int n);
c) exibir os elementos do vetor: void ExibeValores (int v[], int n);
d) retornar quantas vezes um número inteiro aparece no vetor: 
    int Ocorrencias (int v[], int n, int numero);
e) retornar a média dos elementos do vetor: double Media (int v[], int n);
f) multiplicar cada elemento do vetor por um escalar:
    void Multiplicar (int v[], int n, int escalar);
*/

#include <iostream>
#include "funcoes.h"

int main (int argc, char *argv[])
{
    int n, v[MAX_ELEMENTOS], numero, escalar;

    LeDimensao(n);
    LeValores(v, n);
    ExibeValores(v, n);

    std::cout << "Digite um número para contar suas ocorrências: ";
    std::cin >> numero;
    std::cout << "O número " << numero << " aparece " << Ocorrencias(v, n, numero) << " vezes no vetor." << std::endl;

    std::cout << "A média dos elementos do vetor é: " << Media(v, n) << std::endl;

    std::cout << "Digite um escalar para multiplicar os elementos do vetor: ";
    std::cin >> escalar;
    Multiplicar(v, n, escalar);
    ExibeValores(v, n);

    return 0;
}