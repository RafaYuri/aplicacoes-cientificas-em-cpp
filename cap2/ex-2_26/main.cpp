/*
Enunciado:
2.26. Uma experiência foi realizada para determinar a aceleração da gravidade: uma bola caiu, a partir do repouso, do alto de um edifício e 
o tempo gasto para atingir o solo foi registrado. Dados a altura (a) e o tempo (t), determinar a aceleração da gravidade (g).

a = 1/2 * g * t^2
*/

#include <iostream>

int main (int argc, char* argv[])
{
    // Declaração de variáveis
    double a, g, t;

    // Leitura dos dados
    std::cout << "Digite a altura (a): ";
    std::cin >> a;
    std::cout << "Digite o tempo (t): ";
    std::cin >> t;

    // Cálculo da aceleração da gravidade
    g = 2 * a / (t * t);

    // Exibição do resultado
    std::cout << "Aceleração da gravidade (g) = " << g << std::endl;

    return 0;
}