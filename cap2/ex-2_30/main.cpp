/*
Enunciado:
2.30. Dado um número inteiro de 5 dígitos, elaborar um programa para exibir cada um de seus dígitos em uma linha do vídeo. Utilizar os 
operadores % (resto) e / (divisão inteira) para a solução deste problema.
*/

#include <iostream>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    int numero, d_m, m, c, d, u;

    // Leitura do número
    std::cout << "Digite um número de 5 dígitos: ";
    std::cin >> numero;

    // Calculo dos dígitos
    d_m = numero / 10000;
    numero = numero % 10000;
    m = numero / 1000;
    numero = numero % 1000;
    c = numero / 100;
    numero = numero % 100;
    d = numero / 10;
    numero = numero % 10;
    u = numero;

    // Exibição dos dígitos
    std::cout << d_m << std::endl;
    std::cout << m << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << u << std::endl;

    return 0;
}