#ifndef SOMAMATRIZ_H
#define SOMAMATRIZ_H

typedef double** TMat;

int leDimensao();

void alocaMatriz(TMat &mat, int n);

void liberaMatriz(TMat &mat, int n);

void leMatriz(TMat &mat, int n);

void imprimeMatriz(TMat &mat, int n);

void SomaMat(TMat &a, TMat &b, TMat &c, int n);

#endif // SOMAMATRIZ_H