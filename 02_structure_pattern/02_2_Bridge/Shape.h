#ifndef __SHAPE_H__
#define __SHAPE_H__

#include "Renderer.h"

class Shape
{
protected:
    Renderer& renderer;
    Shape(Renderer& renderer);

public:
    virtual void draw() = 0;
    virtual void resize(float factor) = 0;
};

#endif