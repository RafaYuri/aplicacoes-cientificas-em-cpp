/*
Enunciado:
Criar uma estrutura para armazenar um número complexo (parte real e parte imaginária). criar funções para 
ler e exibir um número complexo. Criar uma função para somar dois números complexos.
*/

#include <iostream>
#include "complexo.h"

int main (int argc, char *argv[])
{
    // Declaração de variáveis do tipo Complexo
    Complexo x, y, z;

    // Leitura dos números complexos
    std::cout << "Digite o primeiro número complexo:" << std::endl;
    lerComplexo(x);

    std::cout << "Digite o segundo número complexo:" << std::endl;
    lerComplexo(y);

    // Soma dos números complexos
    z = somarComplexos(x, y);

    // Exibição do resultado
    std::cout << "Resultado da soma: ";
    exibirComplexo(z);

    return 0;
}