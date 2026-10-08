#include "prodescalar.h"
#include <cmath>

double ProdEsc (Vetor &x, Vetor &y, int tam)
{
    double prodesc = 0.0;

    for (size_t i = 0; i < tam; i++)
    {
        prodesc += x[i] * y[i];
    }

    return prodesc;
}