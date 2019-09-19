#include <stdio.h>
#include "Coffee.h"

void Coffee::prepare(int volume)
{
    printf("Take coffee, boil water, pour %d ml, and some sugar\n", volume);
}

Coffee::Coffee()
{
    
}