#ifndef ESTATISTICAS_H
#define ESTATISTICAS_H

// Número máximo de elementos do vetor
const int COMP = 100;

// Definição do tipo Valores como um vetor de double com tamanho COMP
typedef double Valores[COMP];

// Média amostral
double media (Valores &x, int n);

// Desvio padrão amostral
double desvioPadrao (Valores &x, int n);

#endif // ESTATISTICAS_H