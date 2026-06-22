/*
Enunciado:
A resolução de um sistema de equações lineares algébricas (SELA) 2x2 é ilustrada abaixo.

a * x + b * y = c
d * x + e * y = f

x = delta_x / delta
y = delta_y / delta

delta = a * e - b * d
delta_x = c * e - b * f
delta_y = a * f - c * d

Elabore um programa para ler o conjunto de coeficientes (a, b, c, d, e, f) e escrever a solução do sistema (x e y). Observe que:
- se delta = 0, delta_x = 0 e delta_y = 0 então existem infinitas soluções;
- se delta = 0, delta_x != 0 ou delta_y != 0 então não existe solução;
- se delta != 0 então existe solução única (vista acima).
*/

#include <iostream>

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double a, b, c, d, e, f;
    double delta, delta_x, delta_y;
    
    // Leitura dos coeficientes
    std::cout << "Digite os coeficientes a, b, c, d, e, f: ";
    std::cin >> a >> b >> c >> d >> e >> f;

    // Cálculo dos determinantes
    delta = a * e - b * d;
    delta_x = c * e - b * f;
    delta_y = a * f - c * d;

    // Verificação do tipo de solução
    if (delta == 0)
    {
        if (delta_x == 0 and delta_y == 0)
        {
            std::cout << "Existem infinitas soluções." << std::endl;
        }
        else
        {
            std::cout << "Não existe solução para o sistema." << std::endl;
        }
    }
    else
    {
        double x, y;
        x = delta_x / delta;
        y = delta_y / delta;
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
    }
    
    return 0;
}