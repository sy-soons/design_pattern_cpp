#include "Point.h"
#include <stdio.h>
#include <math.h>
#define PI 3.14159265

using namespace std;

Point::Point(float x, float y)
    :x(x), y(y)
{
    printf("[point] (x, y): %2.3f, %2.3f\n", this->x, this->y);
}

Point Point::NewCartesian(float x, float y)
{
    return Point(x, y);
}

Point Point::NewPolar(float r, float theta)
{
    double rad = theta * PI / 180.0;
    // printf("theta: %3.3f, rad: %3.3f\n", theta, rad);
    return Point(r*cos(rad), r*sin(rad));
}
