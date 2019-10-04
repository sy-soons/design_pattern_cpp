#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "Shape.h"

class Circle : Shape
{
public:
    void draw() override;
    void resize(float factor) override;
    Circle(Renderer& renderer, float x, float y, float radius);
    
private:
    float x, y, radius;
};

#endif
