/*
Enunciado:
Defina em uma unidade independente:
- um novo tipo, usando typedef, para representar uma matriz com as seguintes características:
    - tamanho máximo: 40 linhas (m) e 10 colunas (n);
    - componentes inteiros;
- três funções independentes para:
    - sortear os mxn (1 <= m <= 40, 1 <= n <= 10) componentes inteiros da matriz utilizando valores de 30 até 100;
    - calcular a média de componentes pares dentre os mxn componentes;
    - calcular a porcentagem de componentes ímpares dentre os mxn componentes.
Teste as funções criadas fazendo chamadas dentro da função main().
*/

#include <iostream>
#include "matriz.h"

int main (int argc, char *argv[])
{
    Matriz matriz;
    int m, n;

    std::cout << "Digite o número de linhas (1 a 40): ";
    std::cin >> m;

    std::cout << "Digite o número de colunas (1 a 10): ";
    std::cin >> n;

    if (m < 1 or m > MAX_LINHAS or n < 1 or n > MAX_COLUNAS)
    {
        std::cerr << "Erro: dimensões inválidas para a matriz." << std::endl;
        return 1;
    }

    sortearMatriz(matriz, m, n);
    
    std::cout << "Média dos componentes pares: " << mediaPares(matriz, m, n) << std::endl;
    std::cout << "Porcentagem de componentes ímpares: " << porcentagemImpares(matriz, m, n) << "%" << std::endl;

    return 0;
}