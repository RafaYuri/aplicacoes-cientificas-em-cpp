/*
Enunciado:
Elaborar um programa para a conversão de temperaturas de uma escala para outra. O programa deve ter um menu com as seguintes opções:
* Celsius para Farenheit
* Celsius para Kelvin
* Farenheit para Celsius
* Farenheit para Kelvin
* Kelvin para Celsius
* Kelvin para Farenheit
*/

#include <iostream>

double celsiusToFahrenheit (double c)
{
    return c * 9.0 / 5.0 + 32.0;
}

double celsiusToKelvin (double c)
{
    return c + 273.15;
}

double farenheitToCelsius (double f)
{
    return (f - 32.0) * 5.0 / 9.0;
}

double farenheitToKelvin (double f)
{
    return farenheitToCelsius(f) + 273.15;
}

double kelvinToCelsius (double k)
{
    return k - 273.15;
}

double kelvinToFahrenheit (double k)
{
    return celsiusToFahrenheit(kelvinToCelsius(k));
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    int op;
    double temperatura;

    // Menu
    std::cout << "Escolha a conversão:\n";
    std::cout << "1. Celsius para Farenheit\n";
    std::cout << "2. Celsius para Kelvin\n";
    std::cout << "3. Farenheit para Celsius\n";
    std::cout << "4. Farenheit para Kelvin\n";
    std::cout << "5. Kelvin para Celsius\n";
    std::cout << "6. Kelvin para Farenheit\n";
    std::cout << "Opção: ";
    std::cin >> op;

    // Verificação
    if (op > 0 or op < 7)
    {
        std::cout << "Digite a temperatura: ";
        std::cin >> temperatura;
    }

    switch (op)
    {
        case 1:
            std::cout << "Temperatura em Farenheit: " << celsiusToFahrenheit(temperatura) << std::endl;
            break;
        case 2:
            std::cout << "Temperatura em Kelvin: " << celsiusToKelvin(temperatura) << std::endl;
            break;
        case 3:
            std::cout << "Temperatura em Celsius: " << farenheitToCelsius(temperatura) << std::endl;
            break;
        case 4:
            std::cout << "Temperatura em Kelvin: " << farenheitToKelvin(temperatura) << std::endl;
            break;
        case 5:
            std::cout << "Temperatura em Celsius: " << kelvinToCelsius(temperatura) << std::endl;
            break;
        case 6:
            std::cout << "Temperatura em Farenheit: " << kelvinToFahrenheit(temperatura) << std::endl;
            break;
        default:
            std::cout << "Opção inválida!" << std::endl;
    }

    return 0;
}