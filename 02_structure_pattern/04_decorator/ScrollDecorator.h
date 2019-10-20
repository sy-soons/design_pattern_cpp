#ifndef __SCROLLDECORATOR_H__
#define __SCROLLDECORATOR_H__

#include "Decorator.h"

class ScrollDecorator : public Decorator
{
public:
    ScrollDecorator(Widget* w): Decorator(w){}
    void draw();
};
#endif
