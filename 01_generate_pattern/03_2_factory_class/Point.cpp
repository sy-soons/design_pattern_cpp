#include "Point.h"
#include <stdio.h>

using namespace std;

Point::Point(float x, float y)
    :x(x), y(y)
{
    printf("[point] (x, y): %2.3f, %2.3f\n", this->x, this->y);
}