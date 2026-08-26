/*
Enunciado:
Defina uma função para calcular o volume de um paralelepípedo retangular. A função deve receber como parâmetros largura, altura e profundidade 
do mesmo. Se um desses valores for omitido, deverá ser adotado o valor 1 para o mesmo.
*/

#include <iostream>

double calculaVolume (double l = 1, double h = 1, double p = 1)
{
    return l * h * p;
}

int main (int argc, char *argv[])
{
    std::cout << "Volume: " << calculaVolume() << std::endl;
    std::cout << "Volume: " << calculaVolume(2) << std::endl;
    std::cout << "Volume: " << calculaVolume(2, 3) << std::endl;
    std::cout << "Volume: " << calculaVolume(2, 3, 4) << std::endl;
    return 0;
}