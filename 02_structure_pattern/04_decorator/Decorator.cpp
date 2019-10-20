#include "Decorator.h"

Decorator::Decorator(Widget* w)
{
    wid = w;
}

// void Decorator::draw()
// {
//     wid->draw();
// }

Decorator::~Decorator()
{
    delete wid;
}