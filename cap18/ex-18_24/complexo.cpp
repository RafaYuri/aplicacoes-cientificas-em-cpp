#include "complexo.h"
#include <iostream>

void lerComplexo(Complexo &c)
{
    std::cout << "Parte real: ";
    std::cin >> c.real;

    std::cout << "Parte imaginária: ";
    std::cin >> c.imaginario;
}

void exibirComplexo(const Complexo &c)
{
    if (c.imaginario >= 0)
        std::cout << c.real << " + " << c.imaginario << "i" << std::endl;
    else
        std::cout << c.real << " - " << -c.imaginario << "i" << std::endl;
}

Complexo somarComplexos(const Complexo &c1, const Complexo &c2)
{
    Complexo resultado;
    resultado.real = c1.real + c2.real;
    resultado.imaginario = c1.imaginario + c2.imaginario;
    return resultado;
}