#ifndef MATRIZ_H
#define MATRIZ_H

const int MAX = 100;

typedef double Matriz[MAX][MAX];

// Leitura da dimensão da matriz
int lerDimensao ();

// Leitura da matriz
void lerMatriz (Matriz& m, int n);

// Impressão da matriz
void imprimirMatriz (const Matriz& m, int n);

// Cálculo dos componentes da matriz z a partir das matrizes x e y
double calcularComponentesZ (double xks, double yks);

// Cálculo da matriz z a partir das matrizes x e y
void calcularMatrizZ (const Matriz& x, const Matriz& y, Matriz& z, int n); 

#endif // MATRIZ_H