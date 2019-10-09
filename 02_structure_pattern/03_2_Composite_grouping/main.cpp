#include "Group.h"
#include "Circle.h"
#include <iostream>

int main()
{
    Group root("root");
    Circle c1, c2;
    root.push_back(&c1);

    Group subgroup("sub");
    subgroup.push_back(&c2);

    root.push_back(&subgroup);

    root.draw();
    return 0;
}