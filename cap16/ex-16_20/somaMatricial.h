#ifndef SOMAMATRICIAL_H
#define SOMAMATRICIAL_H

const int MAX = 100;

typedef double Matriz[MAX][MAX];

// Leitura das dimensões da matriz
void leDimensoes (int &m, int &n);

// Leitura dos elementos da matriz
void leMatriz (Matriz &a, int m, int n);

// Impressão dos elementos da matriz
void imprimeMatriz (const Matriz &a, int m, int n);

// Função que realiza a soma das matrizes a e b, retornando o resultado em c
void SomaMat (const Matriz &a, const Matriz &b, Matriz &c, int m, int n);

#endif // SOMAMATRICIAL_H