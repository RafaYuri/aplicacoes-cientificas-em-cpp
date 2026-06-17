/*
Enunciado:
Elabore um programa para calcular e exibir  o raio de giração (em centímetros) da seção em L dada em anexo. Os valores para b, b', h e h' 
(todos em centímetros) deverão ser fornecidos pelo usuário durante a execução do programa. O valor do raio de giração i_xx (em relação ao eixo 
xx) deverá ser informado ao usuário após seu cálculo.

Fórmulas:
A = (h'/h) / (b'/b)
B = 1 - b'/b
C = A - h'/h
D = 1/A - b'/b
H = 1 - h'/h
M = 1 - B * H

delta = (1 - B * H^3)/(3*M)-((1-B*H^2)/(2*M))^2
teta = (A^2 - C^3*D)/(3*M) -((A-C^2*D)/(2*M))^2
lambda = 1/4*((1-(B*H)^2)/(1/A - B*D) - (A-C^2*D)*(1-B*H^2)/(M^2))
beta = 1/sqrt((teta+delta)/2-sqrt(((teta-delta)/2)^2+lambda^2))

i_xx = h / beta
*/

#include <iostream>
#include <cmath>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double b, bp, h, hp;
    double A, B, C, D, H, M;
    double delta, teta, lambda, beta;
    double i_xx;

    // Leitura de dados
    std::cout << "Digite o valor de b: ";
    std::cin >> b;
    std::cout << "Digite o valor de b': ";
    std::cin >> bp;
    std::cout << "Digite o valor de h: ";
    std::cin >> h;
    std::cout << "Digite o valor de h': ";
    std::cin >> hp;

    // Cálculo das variáveis intermediárias
    A = (hp / h) / (bp / b);
    B = 1 - bp / b;
    C = A - hp / h;
    D = 1 / A - bp / b;
    H = 1 - hp / h;
    M = 1 - B * H;

    delta = (1 - B * pow(H, 3)) / (3 * M) - pow ((1 - B * H * H) / (2 * M), 2);
    teta = (A * A - pow (C, 3) * D) / (3 * M) - pow ((A - C * C * D) / (2 * M), 2);
    lambda = 0.25 * ((1 - pow (B * H, 2)) / (1 / A - B * D) - (A - C * C * D) * (1 - B * H * H) / ( M * M));
    beta = 1 / sqrt((teta + delta) / 2 - sqrt(pow ((teta - delta) / 2, 2) + lambda * lambda));

    // Cálculo do raio de giração
    i_xx = h / beta;

    // Exibição do resultado
    std::cout << "O raio de giração é: " << i_xx << " cm" << std::endl;

    return 0;
}