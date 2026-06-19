/*
Enunciado:
Elaborar um programa para calcular e exibir a média de um aluno que possui as notas descritas abaixo. Verificar também se o aluno foi aprovado 
(média igual ou superior a 5) ou reprovado.
- prova 1, com peso 3
- prova 2, com peso 5
- trabalho de teoria, com peso 1
- trabalho de laboratório, com peso 1
*/

#include <iostream>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double prova1, prova2, trab_teoria, trab_laboratorio, media;
    double peso_prova1 = 3.0;
    double peso_prova2 = 5.0;
    double peso_trab_teoria = 1.0;
    double peso_trab_laboratorio = 1.0;

    // Leitura das notas
    std::cout << "Digite a nota da prova 1: ";
    std::cin >> prova1;
    std::cout << "Digite a nota da prova 2: ";
    std::cin >> prova2;
    std::cout << "Digite a nota do trabalho de teoria: ";
    std::cin >> trab_teoria;
    std::cout << "Digite a nota do trabalho de laboratório: ";
    std::cin >> trab_laboratorio;

    // Cálculo da média do aluno
    media = peso_prova1 * prova1 + peso_prova2 * prova2 + peso_trab_teoria * trab_teoria + peso_trab_laboratorio * trab_laboratorio;
    media /= peso_prova1 + peso_prova2 + peso_trab_teoria + peso_trab_laboratorio;

    // Impressão do resultado
    std::cout << "Média do aluno = " << media << std::endl;
    std::cout << "Situação: " << (media >= 5 ? "Aprovado" : "Reprovado") << std::endl;
}