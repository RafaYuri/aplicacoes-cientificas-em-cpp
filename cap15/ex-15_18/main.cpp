/*
Enunciado:
Defina uma função de cabeçalho "double ProdEsc (Vetor &x, Vetor &y, int tam)" que execute o produto escalar entre os vetores x e y, ambos de tamanho tam 
e elementos reais. Teste a função fazendo uma chamada dentro da função main.

x . y = sum (x_i * y_i)
*/

#include <iostream>
#include "prodescalar.h"

int main (int argc, char *argv[])
{
    Vetor x, y;
    int tam;

    std::cout << "Digite o tamanho dos vetores (max " << MAX << "): ";
    std::cin >> tam;

    if (tam > MAX || tam <= 0)
    {
        std::cerr << "Tamanho inválido. O tamanho deve ser entre 1 e " << MAX << "." << std::endl;
        return 1;
    }

    std::cout << "Digite os elementos do vetor x:" << std::endl;
    for (size_t i = 0; i < tam; i++)
    {
        std::cout << "x[" << i << "]: ";
        std::cin >> x[i];
    }

    std::cout << "Digite os elementos do vetor y:" << std::endl;
    for (size_t i = 0; i < tam; i++)
    {
        std::cout << "y[" << i << "]: ";
        std::cin >> y[i];
    }

    double resultado = ProdEsc(x, y, tam);
    std::cout << "O produto escalar dos vetores x e y é: "<< resultado << std::endl;

    return 0;
}