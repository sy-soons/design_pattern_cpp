#ifndef __BORDERDECORATOR_H__
#define __BORDERDECORATOR_H__

#include "Widget.h"
#include "Decorator.h"

class BorderDecorator : public Decorator
{
public:
    BorderDecorator(Widget* w) : Decorator(w){}
    void draw();
};

#endif