#include "PointFactory.h"
#include <math.h>
#include <stdio.h>
#define PI 3.14159265

Point PointFactory::NewCartesian(float x, float y)
{
    return Point(x, y);
}

Point PointFactory::NewPolar(float r, float theta)
{
    double rad = theta * PI / 180.0;
    // printf("theta: %3.3f, rad: %3.3f\n", theta, rad);
    return Point(r*cos(rad), r*sin(rad));
}