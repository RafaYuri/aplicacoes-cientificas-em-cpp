#ifndef TRIANGULARINFERIOR_H
#define TRIANGULARINFERIOR_H

// Tamanho máximo da matriz
const int MAX = 100;

// Tipo de dado para a matriz
typedef int Matriz[MAX][MAX];

// Leitura da dimensão da matriz
int leDimensao();

// Leitura da matriz
void leMatriz (Matriz &mat, int n);

// Impressão da matriz
void imprimeMatriz (const Matriz &mat, int n);

// Verifica se a matriz é triangular inferior
bool ehTriangularInferior (const Matriz &mat, int n);

#endif // TRIANGULARINFERIOR_H