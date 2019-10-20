#include "TextField.h"
#include <iostream>

TextField::TextField(int w, int h)
    :width(w),
    height(h)
{
}

void TextField::draw()
{
    std::cout << "TextField: " << width << ", " << height << std::endl;
}