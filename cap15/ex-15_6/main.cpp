/*
Enunciado:
Defina em uma unidade independente:
* um novo tipo, usando typedef, para representar um vetor com as seguintes características:
    - quantidade máxima de componentes: 50;
    - componentes reais;
* funções independentes para:
    - transformar graus para radianos;
    - sortear cada um dos n elementos de um vetor, como sendo um ângulo em graus entre 0 e 360;
    - calcular o seno de todos os elementos de um vetor, colocando o resultado em outro vetor. Lembre-se de 
    converter o ângulo para radianos antes de calcular o seno;
* elaborar a função main() para:
    - solicitar ao usuário a quantidade n de elementos do vetor x;
    - sortear os elementos do vetor x;
    - calcular os elementos do vetor y, onde y_i = sen(x_i);
    - exibir os elementos do vetor y.
*/

#include <iostream>
#include "Vetor.h"

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    Vetor x, y;
    int n;

    // Solicita ao usuário a quantidade de elementos do vetor
    std::cout << "Digite a quantidade de elementos do vetor (max " << MAX << "): ";
    std::cin >> n;

    // Verifica se a quantidade de elementos é válida
    if (n < 1 or n > MAX)
    {
        std::cerr << "Quantidade inválida de elementos. O valor deve estar entre 1 e " << MAX << std::endl;
        return 1; // Retorna com erro
    }

    // Sorteia os elementos do vetor x
    sortearVetor (x, n);

    // Calcula os elementos do vetor y, onde y_i = sen(x_i)
    calcularSeno (x, y, n);

    // Exibe os elementos do vetor y
    std::cout << "Elementos do vetor y (sen(x_i)):" << std::endl;
    for (size_t i = 0; i < n; i++)
    {
        std::cout << "y[" << i << "] = " << y[i] << std::endl;
    }

    return 0;
}