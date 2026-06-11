/*
Enunciado:
Dados a base maior, a base menor e a altura de um trapézio, elaborar um programa para calcular e exibir a área do 
trapézio.
*/

#include <iostream>

int main(int argc, char* argv[])
{
    // Declaração de variáveis
    double base_maior, base_menor, altura, area;

    // Entrada de dados
    std::cout << "Digite a base maior do trapézio: ";
    std::cin >> base_maior;
    std::cout << "Digite a base menor do trapézio: ";
    std::cin >> base_menor;
    std::cout << "Digite a altura do trapézio: ";
    std::cin >> altura;

    // Cálculo da área
    area = 0.5 * (base_maior + base_menor) * altura;

    // Exibição do resultado
    std::cout << "Área = " << area << std::endl;

    return 0;
}