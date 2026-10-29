#ifndef MATRIZ_H
#define MATRIZ_H

const int MAX = 50;
typedef double SquareMatrix[MAX][MAX];

// Cálculo das componentes da matriz
void calculaComponentes (SquareMatrix& matriz, int n);

// Cálculo da média dos componentes da matriz
double calculaMedia (const SquareMatrix& matriz, int n);

// Cálculo da porcentagem de componentes negativos da matriz
double calculaPorcentagemNegativos (const SquareMatrix& matriz, int n);

#endif //MATRIZ_H