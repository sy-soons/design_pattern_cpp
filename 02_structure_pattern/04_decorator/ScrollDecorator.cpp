#include "ScrollDecorator.h"
#include <iostream>

// ScrollDecorator::ScrollDecorator(Widget w)
//     : Decorator(w)
// {
// }

void ScrollDecorator::draw()
{
    Decorator::draw();
    std::cout << "ScrollDecorator" << std::endl;
}