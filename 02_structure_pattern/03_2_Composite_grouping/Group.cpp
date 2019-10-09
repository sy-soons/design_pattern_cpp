#include "Group.h"
#include <iostream>

Group::Group(const std::string& name)
    :name(name)
{
}

void Group::push_back(GraphicObject* obj)
{
    objects.push_back(obj);
}

void Group::draw()
{
    std::cout << "Group " << name.c_str() << " contains: " << std::endl;
    for(GraphicObject* o : objects)
        o->draw();   
}