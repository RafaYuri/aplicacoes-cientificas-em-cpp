/*
Enunciado:
Elaborar, para cada função abaixo, um programa para entrar com os dados necessários e depois, calcular e exibir o valor da função.

a) y = log_3(x^2)+e+e^(pi)+pi^(e)

b) x_1 = (-b + sqrt(b^2 - 4ac)) / 2a

c) d = sqrt((x_2 - x_1)^2 + (y_2 - y_1)^2)

d) y = (x^4)^(1/5)/(x-3) + pi^2/4 + (2/3 * x^5)/(sen(x)+cos(x)+1)

e) Â = acos((b^2 + c^2 - a^2)/(2bc))*180/pi

*/

#include <iostream>
#include <cmath>

// Criação das funções
double func_a (double x)
{
    double f;
    f = log(x * x)/log(3) + M_E + pow(M_E, M_PI) + pow(M_PI, M_E);
    return f;
}

double func_b (double a, double b, double c)
{
    double x1;
    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    return x1;
}

double func_c (double x1, double x2, double y1, double y2)
{
    double d;
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return d;
}

double func_d (double x)
{
    double y;
    y = pow(x, 4.0/5) / (x - 3) + pow(M_PI, 2.0)/4 + (2.0/3 * pow(x, 5)) / (sin(x) + cos(x) + 1);
    return y;
}

double func_e (double a, double b, double c)
{
    double a_hat;
    a_hat = acos((b * b + c * c - a * a) / (2 * b * c)) * 180.0 / M_PI;
    return a_hat;
}

// Função principal
int main (int argc, char* argv[])
{
    char choise;

    std::cout << "Escolha uma função (a, b, c, d ou e): ";
    std::cin >> choise;

    if (choise == 'a')
    {
        double x;
        std::cout << "Função (a) selecionada. Entre com o valor de x: ";
        std::cin >> x;

        // Calcula o valor da função
        double y = func_a (x);

        // Exibe o resultado
        std::cout << "y = " << y << std::endl;
    }

    else if (choise == 'b')
    {
        double a, b, c;
        std::cout << "Função (b) selecionada. Entre com os valores de a, b e c: ";
        std::cin >> a >> b >> c;

        // Calcula o valor da função
        double x1 = func_b (a, b, c);

        // Exibe o resultado
        std::cout << "x1 = " << x1 << std::endl;
    }

    else if (choise == 'c')
    {
        double x1, x2, y1, y2;
        std::cout << "Função (c) selecionada. Entre com os valores de x1, x2, y1 e y2: ";
        std::cin >> x1 >> x2 >> y1 >> y2;

        // Calcula o valor da função
        double d = func_c (x1, x2, y1, y2);

        // Exibe o resultado
        std::cout << "d = " << d << std::endl;
    }

    else if (choise == 'd')
    {
        double x;
        std::cout << "Função (d) selecionada. Entre com o valor de x: ";
        std::cin >> x;

        // Calcula o valor da função
        double y = func_d (x);

        // Exibe o resultado
        std::cout << "y = " << y << std::endl;
    }

    else if (choise == 'e')
    {
        double a, b, c;
        std::cout << "Função (e) selecionada. Entre com os valores de a, b e c: ";
        std::cin >> a >> b >> c;

        // Calcula o valor da função
        double a_hat = func_e (a, b, c);

        // Exibe o resultado
        std::cout << "Â = " << a_hat << std::endl;
    }

    else
    {
        std::cout << "Função não reconhecida." << std::endl;
    }
}
