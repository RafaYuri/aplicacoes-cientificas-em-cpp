/*
Enunciado:
Elabore, em uma unidade independente, funções C++ para calcular:
a) a distância entre dois pontos no plano;
b) a distância entre dois pontos no espaço;
c) o módulo (valor absoluto) de um valor real, sem utilizar uma chamada à função fabs;
d) os lados de um triângulo. A função deve receber as coordenadas dos vértices do triângulo e retornar os lados utilizando passagem de parâmetros 
por referência. Utilize a função distância criada no item a;
e) a área de um triângulo. A função deve recebear as coordenadas dos vértices e retornar a sua área. Utilize a função para calcular os lados 
do triângulo criada no item d.
*/

#include <iostream>
#include "funcoes.h"

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    double x1, x2, x3, y1, y2, y3;
    double area;

    // Leitura de dados
    std::cout << "Digite as coordenadas dos vértices do triângulo: ";
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // Cálculo da área
    area = areaTriangulo (x1, y1, x2, y2, x3, y3);

    // Exibição do resultado
    std::cout << "A área do triângulo é: " << area << std::endl;

    return 0;
}