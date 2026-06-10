/*
Enunciado:
2.10. Dadas as notas a, b e c de um aluno e seus respectivos pesos p1, p2 e p3, elaborar um programa para calcular e 
exibir a média do aluno.
*/

#include <iostream>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double a, b, c;
    double p1, p2, p3;
    double media;

    // Entrada das notas
    std::cout << "Digite a primeira nota: ";
    std::cin >> a;
    std::cout << "Digite a segunda nota: ";
    std::cin >> b;
    std::cout << "Digite a terceira nota: ";
    std::cin >> c;

    // Entrada dos pesos
    std::cout << "Digite o peso da primeira nota: ";
    std::cin >> p1;
    std::cout << "Digite o peso da segunda nota: ";
    std::cin >> p2;
    std::cout << "Digite o peso da terceira nota: ";
    std::cin >> p3;

    // Cálculo da média do aluno
    media = p1 * a + p2 * b + p3 * c;
    media /= p1 + p2 + p3;

    std::cout << "Média do aluno = " << media << std::endl;

    return 0;
}