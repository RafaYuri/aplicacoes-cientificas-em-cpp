/*
Enunciado:
Elaborar um programa para exibir um triângulo formado por asteriscos conforme a figura abaixo. O tamanho (n) do lado do triângulo deve ser fornecido pelo 
usuário.

Exemplo:
n = 5
    *
   **
  ***
 ****
*****

*/

#include <iostream>

void desenho_triangulo (int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n - i - 1; j++)
        {
            std::cout << " ";
        }

        for (size_t j = 0; j < i + 1; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    int n;

    // Leitura do tamanho do lado do triângulo
    std::cout << "Digite o tamanho do lado do triângulo: ";
    std::cin >> n;

    // Chamada da função para desenhar o triângulo
    desenho_triangulo(n);

    return 0;
}
