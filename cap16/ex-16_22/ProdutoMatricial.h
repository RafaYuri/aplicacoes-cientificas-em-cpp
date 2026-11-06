#ifndef PRODUTOMATRICIAL_H
#define PRODUTOMATRICIAL_H

// Tamanho máximo das dimensões
const int MAX_M = 50;
const int MAX_N = 50;

typedef double Matriz[MAX_M][MAX_N];

// Leitura das dimensões das matrizes x e y
void leDimensoes (int &l, int &c);

// Leitura das componentes de uma matriz
void leComponentes (Matriz &mat, int n, int m);

// Impressão de uma matriz
void imprimeMatriz (const Matriz &mat, int n, int m);

// Produto entre duas matrizes
void ProdMat (const Matriz &x, const Matriz &y, Matriz &z, int m, int n, int p);

#endif // PRODUTOMATRICIAL_H