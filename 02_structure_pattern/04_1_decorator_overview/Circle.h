#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "Shape.h"
#include <string>

class Circle : public Shape
{
public:
    explicit Circle(const float radius): radius(radius){}
    void resize(float factor);
    std::string str() const override;

private:
    float radius;
};

#endif