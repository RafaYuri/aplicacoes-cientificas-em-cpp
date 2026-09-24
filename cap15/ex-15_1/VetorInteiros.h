#ifndef VETORINTEIROS_H
#define VETORINTEIROS_H

// Tamanho máximo do vetor
const int MAX_COMPONENTES = 30;

// Definição do tipo VetorInteiros usando typedef
typedef int VetorInteiros [MAX_COMPONENTES];

// Sorteio de elementos entre -20 e +30
void sortearVetor (VetorInteiros &vetor, int n);

// Cálculo da soma dos n primeiros elementos
int somaComponentes (const VetorInteiros &vetor, int n);

// Cálculo da quantidade de componentes positivos entre os n primeiros elementos
int contaPositivos (const VetorInteiros &vetor, int n);

#endif // VETORINTEIROS_H