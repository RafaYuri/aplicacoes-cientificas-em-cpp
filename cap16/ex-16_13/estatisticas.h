#ifndef ESTATISTICAS_H
#define ESTATISTICAS_H

const int MAX_M = 50;
const int MAX_N = 50;

typedef double Valores[MAX_M][MAX_N];

// Leitura das dimensões da matriz
void leDimensoes (int &m, int &n);

// Leitura dos elementos da matriz
void leValores (Valores &matriz, int m, int n);

// Impressão dos elementos da matriz
void escreveValores (const Valores &matriz, int m, int n);

// Cálculo da média dos elementos da matriz
double media (const Valores &matriz, int m, int n);

// Cálculo do desvio padrão dos elementos da matriz
double desvioPadrao (const Valores &matriz, int m, int n);

#endif // ESTATISTICAS_H