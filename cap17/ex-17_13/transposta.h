#ifndef TRANSPOSTA_H
#define TRANSPOSTA_H

// Definição do tipo Matriz
typedef double** Matriz;

// Leitura da dimensão da matriz
int leDimensao();

// Alocação de memória para a matriz
void alocaMatriz(Matriz &x, int n);

// Desalocação de memória da matriz
void desalocaMatriz(Matriz &x, int n);

// Leitura da Matriz
void leMatriz(Matriz &x, int n);

// Impressão da matriz
void imprimeMatriz(Matriz x, int n);

// Transformação da matriz em sua transposta
void transformaEmTransposta(Matriz &x, int n);

#endif // TRANSPOSTA_H