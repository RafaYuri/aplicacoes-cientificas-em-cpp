#ifndef PONTO_H
#define PONTO_H

// Definição da estrutura PONTO
struct PONTO
{
    double x, y;
};

// Leitura das coordenadas de um PONTO
void lerPonto (PONTO &p);

// Exibição das coordenadas de um PONTO
void exibirPonto (const PONTO &p);

// Cálculo da distância entre dois PONTOS
double distanciaPontos (const PONTO &p1, const PONTO &p2);

// Definição de um vetor de PONTOS
using vPONTOS = PONTO*;

// Leitura da quantidade de PONTOS a serem armazenados no vetor
int lerQuantidadePontos();

// Alocação de memória para o vetor de PONTOS
void alocarVetorPontos(vPONTOS &vetor, int quantidade);

// Desalocação de memória do vetor de PONTOS
void desalocarVetorPontos(vPONTOS &vetor);

// Leitura das coordenadas de cada PONTO e armazenamento no vetor
void lerVetorPontos(vPONTOS &vetor, int quantidade);

// Exibição das coordenadas do ponto mais próximo da origem (0,0)
void exibirPontoMaisProximoOrigem(const vPONTOS &vetor, int quantidade);

#endif // PONTO_H