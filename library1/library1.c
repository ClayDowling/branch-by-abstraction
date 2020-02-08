#include "library1.h"
#include <math.h>

double library1_value = 3.14;

void library1_set_value(double c)
{
    library1_value = c;
}

double library1_do_calculation(double v)
{
    return pow(library1_value, v);
}