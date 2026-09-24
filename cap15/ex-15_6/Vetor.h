#ifndef VETOR_H
#define VETOR_H

// Quantidade máxima de elementos do vetor
const int MAX = 50;

// Definição do tipo Vetor como um array de doubles com tamanho MAX
typedef double Vetor[MAX];

// Converte graus para radianos
double grausParaRadianos (double graus);

// Sorteia n elementos do vetor x entre 0 e 360 graus
void sortearVetor (Vetor &x, int n);

// Calcula o seno de todos os elementos de x e armazena em y
void calcularSeno (const Vetor &x, Vetor &y, int n);

#endif // VETOR_H