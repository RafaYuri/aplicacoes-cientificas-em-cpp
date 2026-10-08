#ifndef PRODESCALAR_H
#define PRODESCALAR_H

// Definição do tamanho máximo do vetor
const int MAX = 100;

// Definição do tipo Vetor como um array de doubles
typedef double Vetor[MAX];

// Função que calcula o produto escalar entre dois vetores
double ProdEsc (Vetor &x, Vetor &y, int tam);

#endif // PRODESCALAR_H