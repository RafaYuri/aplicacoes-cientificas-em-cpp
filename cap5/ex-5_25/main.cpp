/*
Enunciado:
Codificar em linguagem C++ o algoritmo abaixo que exibe o menor de três valores.

a, b, c, menor pertencente aos Reais;
ler (a, b, c);
se (a < b)
  se (a < c) menor = a;
  senão menor = c;
senão
  se (b < c) menor = b;
  senão menor = c;
escrever (menor);
*/

#include <iostream>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double a, b, c, menor;

    // Leitura de valores
    std::cout << "Digite três números: ";
    std::cin >> a >> b >> c;

    // Avaliação do menor valor
    if (a < b)
    {
        (a < c)? menor = a : menor = c;
    }
    else
    {
        (b < c)? menor = b : menor = c;
    }
    
    // Exibição do resultado
    std::cout << "O menor valor é: " << menor << std::endl;
    
    return 0;
}