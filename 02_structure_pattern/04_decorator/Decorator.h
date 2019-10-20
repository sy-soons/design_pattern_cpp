#ifndef __DECORATOR_H__
#define __DECORATOR_H__

#include "Widget.h"

class Decorator
{
public:
    Decorator(Widget* w);
    virtual void draw() = 0;
    virtual ~Decorator();
private:
    Widget *wid;    //reference to Widget
};

#endif