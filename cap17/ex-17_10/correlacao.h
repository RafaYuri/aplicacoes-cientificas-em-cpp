#ifndef CORRELACAO_H
#define CORRELACAO_H

// Definição do tipo Valores como um ponteiro para double
typedef double* Valores;

// Declaração da função para calcular o Coeficiente de Correlação (r)
double coefCorrelacao(Valores &x, Valores &y, int n);

// Leitura da dimensão do vetor
int leDimensao();

// Alocação de memória para o vetor
void alocaVetor(Valores &v, int n);

// Desalocação de memória do vetor
void desalocaVetor(Valores &v);

// Leitura dos valores do vetor
void leValores(Valores &v, int n);

// Impressão dos valores do vetor
void imprimeValores(Valores &v, int n);

// Cálculo da média dos valores do vetor
double mediaValores(Valores &v, int n);

#endif // CORRELACAO_H