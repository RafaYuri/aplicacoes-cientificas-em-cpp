/*
Enunciado:
2.9. Elaborar um programa para calcular e exibir a média de um aluno que possui as seguintes notas:
- Prova 1, com peso 3
- Prova 2, com peso 5
- Trabalho de Teoria, com peso 1
- Trabalho de Laboratório, com peso 1
*/
#include <iostream>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double peso_p1, peso_p2, peso_tt, peso_tl;
    double nota_p1, nota_p2, nota_tt, nota_tl;
    double nota_final;

    // Atribuição dos pesos
    peso_p1 = 3.0;
    peso_p2 = 5.0;
    peso_tt = peso_tl = 1.0;

    // Inserção das notas
    std::cout << "Digite a nota da Prova 1: ";
    std::cin >> nota_p1;
    std::cout << "Digite a nota da Prova 2: ";
    std::cin >> nota_p2;
    std::cout << "Digite a nota do Trabalho de Teoria: ";
    std::cin >> nota_tt;
    std::cout << "Digite a nota do Trabalho de Laboratório: ";
    std::cin >> nota_tl;

    // Cálculo da nota final do aluno
    nota_final = peso_p1 * nota_p1 + peso_p2 * nota_p2 + peso_tt * nota_tt + peso_tl * nota_tl;
    nota_final /= (peso_p1 + peso_p2 + peso_tt + peso_tl);

    std::cout << "O aluno teve nota final = " << nota_final << std::endl;

    return 0;
}