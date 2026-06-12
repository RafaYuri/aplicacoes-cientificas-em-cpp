/*
Enunciado:
2.28. Dado o preço de um produto (valor inteiro), elaborara um programa para verificar qual a menor quantidade de notas necessárias 
para efetuar o pagamento da compra. Considerar os valores das notas atuais (1, 2, 5, 10, 20, 50 e 100). Utilizar os operadores %(resto)
 e /(divisão inteira) para a solução deste problema.
*/

#include <iostream>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    int preco, notas100, notas50, notas20, notas10, notas5, notas2, notas1, notas_total;

    // Leitura do preço
    std::cout << "Digite o preço do produto: ";
    std::cin >> preco;

    // Calculo do número de notas
    notas100 = preco / 100;
    preco = preco % 100;
    notas50 = preco / 50;
    preco = preco % 50;
    notas20 = preco / 20;
    preco = preco % 20;
    notas10 = preco / 10;
    preco = preco % 10;
    notas5 = preco / 5;
    preco = preco % 5;
    notas2 = preco / 2;
    preco = preco % 2;
    notas1 = preco;

    // Calculo do total de notas
    notas_total = notas100 + notas50 + notas20 + notas10 + notas5 + notas2 + notas1;

    // Exibição do resultado
    std::cout << "O menor número de notas necessárias para efetuar o pagamento é: " << notas_total << ", sendo:\n";
    std::cout << "Notas de 100: " << notas100 << std::endl;
    std::cout << "Notas de 50: " << notas50 << std::endl;
    std::cout << "Notas de 20: " << notas20 << std::endl;
    std::cout << "Notas de 10: " << notas10 << std::endl;
    std::cout << "Notas de 5: " << notas5 << std::endl;
    std::cout << "Notas de 2: " << notas2 << std::endl;
    std::cout << "Notas de 1: " << notas1 << std::endl;
    
    return 0;
}
