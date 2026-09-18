/*
Enunciado:
Elabore, em uma unidade independente (arquivos .h e .cpp), as funções C++ para:
a) verificar se um número inteiro dado é par ou ímpar (operador %);
b) transformar radianos em graus (g = r * 180 / pi);
c) calcular o cosseno de um ângulo em graus. A função deve receber como parâmetro o ângulo em graus e, internamente, convertê-lo para 
radianos antes de efetuar o cálculo do cosseno;
d) calcular a área de uma esfera (A = 4 * pi * r^2);
e) calcular o volume de uma esfera (V = 4/3 * pi * r^3);
f) calcular a área de um retângulo (A = b*h);
g) calcular o perímetro de um retângulo (P = 2 * (b+h)).
*/

#include <iostream>
#include "funcoes.h"


int main (int argc, char *argv[])
{
    // Declaração de variáveis
    int numero;
    double angulo_graus, angulo_radianos, cos_angulo;
    double raio, area_esfera, volume_esfera;
    double base, altura, area_retangulo, perimetro_retangulo;
    
    // Leitura de dados
    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    std::cout << "Digite o ângulo em radianos para conversão em graus: ";
    std::cin >> angulo_radianos;
    
    std::cout << "Digite o raio da esfera: ";
    std::cin >> raio;
    
    std::cout << "Digite a base do retângulo: ";
    std::cin >> base;
    
    std::cout << "Digite a altura do retângulo: ";
    std::cin >> altura;
    
    // Chamada das funções
    if (is_par (numero)) 
    {
        std::cout << "O número " << numero << " é par." << std::endl;
    } 
    else 
    {
        std::cout << "O número " << numero << " é ímpar." << std::endl;
    }
    
    angulo_graus = radParaGraus(angulo_radianos);
    cos_angulo = cosGraus (angulo_graus);
    std::cout << "O ângulo " << angulo_radianos << " radianos em graus é: " << angulo_graus << std::endl;
    std::cout << "O cosseno de " << angulo_graus << " graus é: " << cos_angulo << std::endl;
    
    area_esfera = areaEsfera (raio);
    std::cout << "A área da esfera de raio " << raio << " é: " << area_esfera << std::endl;
    
    volume_esfera = volumeEsfera (raio);
    std::cout << "O volume da esfera de raio " << raio << " é: " << volume_esfera << std::endl;
    
    area_retangulo = areaRetangulo (base, altura);
    std::cout << "A área do retângulo de base " << base << " e altura " << altura << " é: " << area_retangulo << std::endl;
    
    perimetro_retangulo = perimetroRetangulo (base, altura);
    std::cout << "O perímetro do retângulo de base " << base << " e altura " << altura << " é: " << perimetro_retangulo << std::endl;
    
    return 0;
}