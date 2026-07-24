/*
Enunciado:
Dado um valor n, elaborar uma função para exibir a tabuada do n.
*/

#include <iostream>

void tabuada (int n)
{
    std::cout << "==== Tabuada de " << n << " ====" << std::endl;
    for (size_t i = 0; i <= 10; i++)
    {
        std::cout << n << " x " << i << " = " << n * i << std::endl; 
    }
    std::cout << std::endl;
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    int n;

    // Leitura de n
    std::cout << "Digite n: ";
    std::cin >> n;

    // Chamada da função
    tabuada (n);

    return 0;
}