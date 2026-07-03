/*
Enunciado:
Dado um número inteiro entre 0 e 99, elaborar um programa para calcular e exibir a quantidade de dezenas e unidades que compõem o número. 
Por exemplo, se o número fornecido for 54, o programa deve exibir "5 dezena(s) e 4 unidade(s)". Se o número estiver fora da faixa especificada 
(0 a 99) o progrrama deve exibir uma mensagem de erro.
*/

#include <iostream>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    int n, dezenas, unidades;

    // Leitura do número
    std::cout << "Digite um número entre 0 e 99: ";
    std::cin >> n;

    // Verificação se o número está na faixa especificada
    if (n < 0 or n > 99)
    {
        std::cout << "Número está fora da faixa especificada [0, 99]" << std::endl;
        return 1;
    }

    // Cálculo da quantidade de unidades e dezenas
    dezenas = n / 10;
    unidades = n % 10;

    // Exibição do resultado
    std::cout << dezenas << " dezena(s) e " << unidades << " unidade(s)" << std::endl;

    return 0;
}