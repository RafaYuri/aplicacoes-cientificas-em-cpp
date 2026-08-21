/*
Enunciado:
Defina as funções f e g considerando as fórmulas de recorrência forncidas e também que n deve ser um número natural não nulo.

f(n) = 2, se n = 1; 1, se n = 2; 2 * f(n-1) + g(n-2), se n >= 3
g(n) = 1, se n = 1; 2, se n = 2; g(n-1) + 3 * f(n-2), se n >= 3
*/

#include <iostream>

int f(int n);
int g(int n);

int f(int n)
{
    if (n ==1) return 2;
    else if (n ==2) return 1;
    else return 2 * f (n-1) + g (n-2);
}

int g(int n)
{
    if (n == 1) return 1;
    else if (n == 2) return 2;
    else return g (n-1) + 3 * f (n-2);
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    int n;

    // Leitura de n
    std::cout << "Digite o valor de n (n > 0): ";
    std::cin >> n;

    // Verificação se n é válido
    if (n <= 0) {
        std::cerr << "Erro: n deve ser maior que 0." << std::endl;
        return 1;
    }

    // Cálculo e impressão dos resultados
    std::cout << "f(" << n << ") = " << f(n) << std::endl;
    std::cout << "g(" << n << ") = " << g(n) << std::endl;

    return 0;
}