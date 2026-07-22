/*
Enunciado:
Elaborar uma função para retornar o sucessor de um número inteiro.
*/

#include <iostream>

int sucessor (int n)
{
    return ++n;
}

int main (int argc, char *argv[])
{
    int n;
    std::cout << "Digite um número inteiro: ";
    std::cin >> n;
    std::cout << "Sucessor = " << sucessor(n) << std::endl;
    return 0;
}