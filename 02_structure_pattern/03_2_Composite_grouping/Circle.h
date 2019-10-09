#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "GraphicObject.h"

class Circle : public GraphicObject
{
public:
    void draw() override;
};

#endif