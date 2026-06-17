/*
Enunciado:
Elaborar um programa para calcular a perda de carga em uma tubulação utilizando a fórmula de Hanzen-Willians

J = Q^1,85 * 10,643 * D^4,87 * C^-1,85

onde:
J = perda de carga (m/km)
C = coeficiente de rugosidade
Q = vazão (m³/s)
D = diâmetro da tubulação (m)
*/

#include <iostream>
#include <cmath>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double J, Q, D, C;

    // Leitura de valores:
    std::cout << "Digite a vazão (m^3/s): ";
    std::cin >> Q;
    std::cout << "Digite o diâmetro (m): ";
    std::cin >> D;
    std::cout << "Digite o coeficiente de rugosidade: ";
    std::cin >> C;

    // Cálculo da perda de carga:
    J = pow (Q, 1.85) * 10.643 * pow (D, 4.87) * pow (C, -1.85);

    // Exibição do resultado
    std::cout << "J = " << J << " m/km" << std::endl;

    return 0;
}