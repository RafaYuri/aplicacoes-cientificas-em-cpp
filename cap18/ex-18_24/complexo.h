#ifndef COMPLEXO_H
#define COMPLEXO_H

// Definição da estrutura Complexo
struct Complexo
{
    double real, imaginario;
};

// Leitura, exibição e soma de números complexos
void lerComplexo(Complexo &c);
void exibirComplexo(const Complexo &c);
Complexo somarComplexos(const Complexo &c1, const Complexo &c2);

#endif // COMPLEXO_H