/*
Enunciado:
2.27. Elaborar um programa que permita a entrada de uma data no formato dd/mm/aaaa e consiga armazenar os valores referentes ao dia, mês e ano
em 3 variáveis distintas do tipo int. Dica:

int d, m, a; char b;
cin >> d >> b >> m >> b >> a;
*/

#include <iostream>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    int d, m, a; 
    char b;

    // Leitura da data
    std::cout << "Digite a data no formato dd/mm/aaaa: ";
    std::cin >> d >> b >> m >> b >> a;

    // Exibição dos valores
    std::cout << "Dia: " << d << std::endl;
    std::cout << "Mês: " << m << std::endl;
    std::cout << "Ano: " << a << std::endl;

    return 0;
}