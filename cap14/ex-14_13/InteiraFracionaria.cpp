#include "InteiraFracionaria.h"
#include <cmath>

double inteira (double x)
{
    double in;
    x >= 0 ? in = floor (x) : in = ceil (x);
    return in;
}

double fracionaria (double x)
{
    return fabs (x) - fabs (inteira (x));
}
