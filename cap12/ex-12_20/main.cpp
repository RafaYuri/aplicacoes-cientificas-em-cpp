/*
Enunciado:
Defina uma função em C++ para calcular o valor da série geométrica fornecida. Utilize como critério de cálculo, a soma de todas as n primeiras 
parcelas. O valor de n deverá ser um parâmetro da função, juntamente com q (razão da série). Caso o valor absoluto de q seja maior ou igual a um, 
retorne uma INFINITY.

geom(q) = 1 + q + q^2 + q^3 + ... para |q| < 1
*/

#include <iostream>
#include <cmath>

double serieGeometrica (double q, int n)
{
    if (fabs(q) >= 1.0)
    {
        return INFINITY;
    }

    double soma = 0.0;
    for (size_t i = 0; i < n; i++)
    {
        soma += pow (q, i);
    }

    return soma;
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double q;
    int n;
    
    // Leitura dos valores
    std::cout << "Digite o valor de q: ";
    std::cin >> q;
    std::cout << "Digite o valor de n: ";
    std::cin >> n;
    
    // Chamada da função
    double resultado = serieGeometrica(q, n);
    
    // Impressão do resultado
    std::cout << "O valor da série geométrica é: " << resultado << std::endl;
    
    return 0;
}