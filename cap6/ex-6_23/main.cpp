/*
Enunciado:
Elabore um programa, para calcular e exibir a(s) raiz(es) da equação de coeficientes reais ax^2 + bx + c = 0. Os coeficientes a, b e c deverão ser 
fornecidos pelo usuário durante a execução. Utilize a tabela abaixo para testar o programa e verificar sua validade.

a | b | c | Raiz(es)
0 | 0 | 0 | Qualquer x é solução
0 | 0 | 3 | Não existe solução
0 | 3 | -6 | Equação de primeiro grau: x = 2
4 | 5 | 1 | Raizes reais distintas: x1 = -0.25, x2 = -1
4 | 4 | 1 | Raiz real dupla: x = -0.5
4 | 3 | 1 | Raízes complexas conjugadas: x1 = -0.375 + 0.330719i, x2 = -0.375 - 0.330719i
*/

#include <iostream>
#include <cmath>


// Implementação da função delta
double delta(double a, double b, double c) 
{
    return b * b - 4 * a * c;
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double a, b, c;

    // Leitura dos coeficientes
    std::cout << "Digite os coeficientes a, b e c: ";
    std::cin >> a >> b >> c;

    // Verificação dos coeficientes
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                std::cout << "Qualquer x é solução.\n";
            }

            else 
            {
                std::cout << "Não existe solução.\n";
            }
        }
        else 
        {
            double x = -c / b;
            std::cout << "Equação de primeiro grau: x = " << x << std::endl;
        }
    }
    else 
    {
        double d = delta (a, b, c);

        if (d > 0)
        {
            double x1 = (-b + sqrt(d)) / (2 * a);
            double x2 = (-b - sqrt(d)) / (2 * a);
            std::cout << "Raízes reais distintas: x1 = " << x1 << ", x2 = " << x2 << std::endl;
        }
        else if (d == 0)
        {
            double x = -b / (2 * a);
            std::cout << "Raiz real dupla: x = " << x << std::endl;
        }
        else 
        {
            double real = -b / (2 * a);
            double imag = sqrt(-d) / (2 * a);
            std::cout << "Raízes complexas conjugadas: x1 = " << real << " + " << imag << "i, x2 = "
                      << real << " - " << imag << "i" << std::endl;
        }
    }

    return 0;
}

