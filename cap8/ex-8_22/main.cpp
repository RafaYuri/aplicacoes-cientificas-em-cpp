/*
Enunciado:
Elaborar uma função para transformar um ângulo, medido em graus, minutos e segundos, para graus decimais. Por exemplo, 10°30' deve ser 
convertido para 10,5° e 10°59'60'' deve ser convertido para 11°.
*/

#include <iostream>

double graus_decimais (int graus, int minutos, int segundos)
{
    return graus + minutos / 60.0 + segundos / 3600.0;
}

int main(int argc, char *argv[])
{
    // Declaração de variáveis
    int graus, minutos, segundos;
    
    // Leitura de variáveis
    std::cout << "Digite a parte do ângulo em graus: ";
    std::cin >> graus;
    std::cout << "Digite a parte do ângulo em minutos: ";
    std::cin >> minutos;
    std::cout << "Digite a parte do ângulo em segundos: ";
    std::cin >> segundos;
    
    // Impressão do resultado
    std::cout << "Ângulo em graus decimais = " << graus_decimais(graus, minutos, segundos) << "°" << std::endl;
    
    return 0;
}