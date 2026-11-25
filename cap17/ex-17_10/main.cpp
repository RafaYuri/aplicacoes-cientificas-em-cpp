/*
Enunciado:
Considerando as declarações e fórmulas fornecidas, defina uma função para calcular o Coeficiente de Correlação (r). 
Tal coeficiente é a medida do grau de associação entre duas características a partir de uma série de observações, 
está contido no intervalo [-1, 1] e indica uma associação se estiver próximo de 1 (proporcional) ou próximo de -1
(inversamente proporcional).

typedef double *Valores;
double coefCorrelacao(Valores &x, Valores &y, int n);
*/

#include "correlacao.h"
#include <iostream>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    Valores x, y;
    int n = leDimensao();

    // Alocação de memória para os vetores
    alocaVetor(x, n);
    alocaVetor(y, n);

    // Leitura dos valores dos vetores
    leValores(x, n);
    leValores(y, n);

    // Cálculo do Coeficiente de Correlação
    double r = coefCorrelacao(x, y, n);

    // Impressão do resultado
    std::cout << "Coeficiente de Correlação (r): " << r << std::endl;

    // Desalocação de memória dos vetores
    desalocaVetor(x);
    desalocaVetor(y);

    return 0;
}