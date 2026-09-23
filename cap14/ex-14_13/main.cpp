/*
Enunciado:
Elabore, em uma unidade independente, uma função em C++ para retornar a parte
inteira de um valor qualquer dado e outra para retornar a parte pracionária de
um valor qualquer dado.
*/

#include "InteiraFracionaria.h"
#include <iostream>

int main(int argc, char *argv[]) 
{
  // Declaração de variáveis
  double x;

  // Leitura do número
  std::cout << "Digite o número: ";
  std::cin >> x;

  std::cout << "Parte inteira: " << inteira(x) << std::endl;
  std::cout << "Parte fracionária: " << fracionaria(x) << std::endl;

  return 0;
}