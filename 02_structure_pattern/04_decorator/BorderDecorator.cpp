#include "BorderDecorator.h"
#include <iostream>

// BorderDecorator::BorderDecorator(Widget* w)
//     : Decorator(w)
// {
// }

void BorderDecorator::draw()
{
    Decorator::draw();
    std::cout << "BorderDecorator" << std::endl;
}