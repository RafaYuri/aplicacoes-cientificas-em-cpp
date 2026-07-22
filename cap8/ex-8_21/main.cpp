/*
Enunciado:
Elaborar uma função para retornar o predecessor de um número inteiro.
*/

#include <iostream>

int predecessor (int n)
{
    return --n;
}

int main (int argc, char *argv[])
{
    int n;
    std::cout << "Digite um número inteiro: ";
    std::cin >> n;
    std::cout << "Predecessor = " << predecessor(n) << std::endl;
    return 0;
}
