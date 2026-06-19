/*
Enunciado:
Dadas as notas a e b de um aluno, elaborar um programa para calcular e exibir a média aritmética do aluno e a sua situação:
- média >= 5 o aluno está aprovado
- 3 <= média < 5 o aluno deverá fazer um exame
- média < 3 o aluno está reprovado
*/

#include <iostream>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double a, b, media;

    // Leitura das notas
    std::cout << "Digite a primeira nota: ";
    std::cin >> a;
    std::cout << "Digite a segunda nota: ";
    std::cin >> b;

    // Cálculo da média
    media = 0.5 * (a + b);

    // Exibição da situação do aluno
    std::cout << "Média do aluno = " << media << std::endl;
    std::cout << "Situação do aluno: ";
    if (media >= 5)
    {
        std::cout << "Aprovado" << std::endl;
    }
    else if (media >= 3)
    {
        std::cout << "Exame" << std::endl;
    }
    else
    {
        std::cout << "Reprovado" << std::endl;
    }
    
    return 0;
}