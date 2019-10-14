#include "Circle.h"
#include <sstream>

void Circle::resize(float factor)
{
    radious *= factor;
}

std::string Circle::str() const
{
    ostringstream oss;
    oss << "A circle of radius " << radius;
    return oss.str();
}