/*
Enunciado:
2.25. São conhecidas as notas de um determinado aluno em uma determinada disciplina durante um semestre letivo: p1, p2, t1 e t2 com
pesos 3, 5, 1 e 1. São conhecidos tambéme o total de aulas desta disciplina e a quantidade de aulas que o aluno assistiu. Elaborar um 
programa para calcular e exibir a média do aluno e a sua frequência.
*/

#include <iostream>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double p1, p2, t1, t2, media, frequencia;
    int pp1, pp2, pt1, pt2, total_aulas, aulas_assistidas;

    // Leitura das notas
    std::cout << "Digite a nota da p1: ";
    std::cin >> p1;
    std::cout << "Digite a nota da p2: ";
    std::cin >> p2;
    std::cout << "Digite a nota do t1: ";
    std::cin >> t1;
    std::cout << "Digite a nota do t2: ";
    std::cin >> t2;

    // Leitura da frequência
    std::cout << "Digite o total de aulas ministradas: ";
    std::cin >> total_aulas;
    std::cout << "Digite o número de aulas assistidas: ";
    std::cin >> aulas_assistidas;

    // Cálculo da média do aluno
    pp1 = 3 ; pp2 = 5; pt1 = 1; pt2 = 1;

    media = (pp1 * p1 + pp2 * p2 + pt1 * t1 + pt2 * t2) / (pp1 + pp2 + pt1 + pt2);

    // Cálculo da frequência
    frequencia = static_cast<double>(aulas_assistidas) / total_aulas;

    // Exibição do resultado
    std::cout << "Média do aluno = " << media << std::endl;
    std::cout << "Frequência do aluno = " << frequencia << std::endl;

    return 0;
}