/*
Enunciado:
Dados os lados a, b e c de um triângulo, elaborar um programa para calcular e exibir os ângulos internos deste triângulo.

A_hat = acos((b^2 + c^2 - a^2) / (2bc)) * 180 / M_PI
B_hat = acos((a^2 + c^2 - b^2) / (2ac)) * 180 / M_PI
C_hat = acos((a^2 + b^2 - c^2) / (2ab)) * 180 / M_PI
*/

#include <iostream>
#include <cmath>

double a_hat (double a, double b, double c)
{
    return acos((b*b + c*c - a*a) / (2*b*c)) * 180 / M_PI;
}

double b_hat (double a, double b, double c)
{
    return acos((a*a + c*c - b*b) / (2*a*c)) * 180 / M_PI;
}

double c_hat (double a, double b, double c)
{
    return acos((a*a + b*b - c*c) / (2*a*b)) * 180 / M_PI;
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double a, b, c; // lados do triângulo
    double A_hat, B_hat, C_hat; // ângulos internos do triângulo 

    // Leitura dos lados
    std::cout << "Digite o lado a: ";
    std::cin >> a;
    std::cout << "Digite o lado b: ";
    std::cin >> b;
    std::cout << "Digite o lado c: ";
    std::cin >> c;

    // Cálculo dos ângulos
    A_hat = a_hat(a, b, c);
    B_hat = b_hat(a, b, c);
    C_hat = c_hat(a, b, c);

    // Exibição dos ângulos
    std::cout << "Ângulo A: " << A_hat << " graus" << std::endl;
    std::cout << "Ângulo B: " << B_hat << " graus" << std::endl;
    std::cout << "Ângulo C: " << C_hat << " graus" << std::endl;

    return 0;
}