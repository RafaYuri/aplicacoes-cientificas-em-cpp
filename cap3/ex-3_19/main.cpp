/*
Enunciado:
Elaborar um programa para calcular a adição, a subtração, a multiplicação e divisão de dois números complexos.
*/

#include <iostream>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double pr_1, pr_2, pi_1, pi_2;
    double soma_pr, soma_pi, sub_pr, sub_pi, mult_pr, mult_pi, div_pr, div_pi;

    // Leitura dos números complexos
    std::cout << "Digite a parte real do primeiro número: ";
    std::cin >> pr_1;
    std::cout << "Digite a parte imaginária do primeiro número: ";
    std::cin >> pi_1;
    std::cout << "Digite a parte real do segundo número: ";
    std::cin >> pr_2;
    std::cout << "Digite a parte imaginária do segundo número: ";
    std::cin >> pi_2;

    // Cálculos
    soma_pr = pr_1 + pr_2;
    soma_pi = pi_1 + pi_2;

    sub_pr = pr_1 - pr_2;
    sub_pi = pi_1 - pi_2;

    mult_pr = pr_1 * pr_2 - pi_1 * pi_2;
    mult_pi = pr_1 * pi_2 + pr_2 * pi_1;

    div_pr = (pr_1 * pr_2 + pi_1 * pi_2) / (pr_2 * pr_2 + pi_2 * pi_2);
    div_pi = (pi_1 * pr_2 - pr_1 * pi_2) / (pr_2 * pr_2 + pi_2 * pi_2);

    // Impressão dos resultados
    std::cout << "Soma = " << soma_pr ;
    if (soma_pi >= 0)
        std::cout << " + " << soma_pi << "i" << std::endl;
    else
        std::cout << " - " << -soma_pi << "i" << std::endl;
        
    std::cout << "Subtração = " << sub_pr ;
    if (sub_pi >= 0)
        std::cout << " + " << sub_pi << "i" << std::endl;
    else
        std::cout << " - " << -sub_pi << "i" << std::endl;
        
    std::cout << "Multiplicação = " << mult_pr ;
    if (mult_pi >= 0)
        std::cout << " + " << mult_pi << "i" << std::endl;
    else
        std::cout << " - " << -mult_pi << "i" << std::endl;
        
    std::cout << "Divisão = " << div_pr ;
    if (div_pi >= 0)
        std::cout << " + " << div_pi << "i" << std::endl;
    else
        std::cout << " - " << -div_pi << "i" << std::endl;

    return 0;
}