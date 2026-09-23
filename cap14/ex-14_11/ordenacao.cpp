#include "ordenacao.h"

void troca (int &a, int &b)
{
    int aux = a;
    a = b;
    b = aux;
}

void crescente (int &a, int &b, int &c)
{
    if (a > b) troca (a, b);
    if (b > c) troca (b, c);
    if (a > b) troca (a, b);    
}

void decrescente (int &a, int &b, int &c)
{
    if (c > b) troca (c, b);
    if (b > a) troca (b, a);
    if (c > b) troca (c, b);
}