#ifndef __DVECTOROBJECT_H__
#define __DVECTOROBJECT_H__

#include <vector>

struct Point
{
    int x, y;
};

struct Line
{
    Point start, end;
};

class DVectorObject
{
public:
    DVectorObject();
    virtual std::vector<Line>::iterator begin() = 0;
    virtual std::vector<Line>::iterator end() = 0;
};

#endif