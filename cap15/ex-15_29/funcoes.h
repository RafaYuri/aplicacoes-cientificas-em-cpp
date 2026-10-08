#ifndef FUNCOES_H
#define FUNCOES_H

// Definição do número máximo de elementos do vetor
const int MAX_ELEMENTOS = 30;

// Leitura da dimensão do vetor
void LeDimensao (int &n);

// Leitura dos elementos do vetor
void LeValores (int v[], int n);

// Exibição dos elementos do vetor
void ExibeValores (int v[], int n);

// Retorna quantas vezes um número inteiro aparece no vetor
int Ocorrencias (int v[], int n, int numero);

// Retorna a média dos elementos do vetor
double Media (int v[], int n);

// Multiplica cada elemento do vetor por um escalar
void Multiplicar (int v[], int n, int escalar);

#endif // FUNCOES_H