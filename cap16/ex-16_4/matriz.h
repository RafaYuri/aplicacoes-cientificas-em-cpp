#ifndef MATRIZ_H
#define MATRIZ_H

const int MAX_LINHAS = 40;
const int MAX_COLUNAS = 10;

typedef int Matriz[MAX_LINHAS][MAX_COLUNAS];

// Função para sortear os componentes da matriz
void sortearMatriz (Matriz &matriz, int m, int n);

// Função para calcular a média de componentes pares
double mediaPares (const Matriz &matriz, int m, int n);

// Função para calcular a porcentagem de componenntes ímpares
double porcentagemImpares (const Matriz &matriz, int m, int n);

#endif // MATRIZ_H