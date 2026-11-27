/*
Enunciado:
Elaborar um programa, organizado em unidade independentes, para manipular uma estrutura que 
representa um ponto no plano cartesiano:
- criar a estrutura PONTO;
- criar uma função para ler as coordenadas de um PONTO;
- criar uma função para exibir as coordenadas de um PONTO;
- criar uma função para calcular a distância entre dois PONTOS;
- criar um vetor de PONTOS;
- ler a quantidade de PONTOS a serem armazenados no vetor;
- ler as coordenadas de cada PONTO e armazená-las no vetor;
- exibir as coordenadas do ponto mais próximo da origem (0,0);
- criar uma função "main" para testar as demais funções
*/

#include "ponto.h"
#include <iostream>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    int quantidade = lerQuantidadePontos();
    vPONTOS vetor;

    // Alocação de memória para o vetor de PONTOS
    alocarVetorPontos(vetor, quantidade);

    // Leitura das coordenadas de cada PONTO e armazenamento no vetor
    lerVetorPontos(vetor, quantidade);

    // Exibição das coordenadas do ponto mais próximo da origem (0,0)
    exibirPontoMaisProximoOrigem(vetor, quantidade);

    // Desalocação de memória do vetor de PONTOS
    desalocarVetorPontos(vetor);

    return 0;
}