#ifndef VETOR_H
#define VETOR_H

// Declaração do tipo VETOR
typedef int* VETOR;

// Alocação de memória para um VETOR
void alocarVetor (VETOR& v, int n);

// Desalocação de memória de um VETOR
void desalocarVetor (VETOR& v);

// Sorteio dos elementos do VETOR em um intervalo [a, b]
void sortearVetor (VETOR v, int n, int a, int b);

// Exibição dos elementos do VETOR
void exibirVetor (VETOR& v, int n);

// Cálculo da média dos elementos pares do VETOR
double mediaPares (VETOR& v, int n);

#endif // VETOR_H