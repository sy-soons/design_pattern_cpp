#ifndef __SHAPE_H__
#define __SHAPE_H__
#include <string>

class Shape
{
public:
    Shape();
    virtual std::string str() const=0;
};

#endif