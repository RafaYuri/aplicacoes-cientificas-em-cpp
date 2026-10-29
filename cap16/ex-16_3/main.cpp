/*
Enunciado:
Defina em uma unidade independente:
- um novo tipo, usando typedef, para representar uma matriz quadrada com as seguintes características:
    - ordem máxima: 50;
    - componentes reais;
- três funções independentes para:
    - calcular os n^2 (1 <= n <= 50) componentes reais da matriz através da expressão sen(i)/cos(j);
    - calcular a média dos n^2 componentes reais da matriz;
    - calcular a porcentagem de componentes negativos dentre os n^2 componentes.
*/

#include <iostream>
#include "matriz.h"

int main (int argc, char *argv[])
{
    SquareMatrix matriz;
    int n;

    std::cout << "Digite a ordem da matriz (1 a 50): ";
    std::cin >> n;

    if (n < 1 or n > 50)
    {
        std::cerr << "Ordem inválida. A ordem deve estar entre 1 e 50." << std::endl;
        return 1;
    }

    calculaComponentes(matriz, n);

    double media = calculaMedia(matriz, n);
    double porcentagemNegativos = calculaPorcentagemNegativos(matriz, n);

    std::cout << "Média dos componentes: " << media << std::endl;
    std::cout << "Porcentagem de componentes negativos: " << porcentagemNegativos << "%" << std::endl;

    return 0;
}