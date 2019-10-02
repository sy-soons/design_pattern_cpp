#ifndef __LINETOPOINTADAPTER_H__
#define __LINETOPOINTADAPTER_H__

#include "DVectorObject.h"

class LineToPointAdapter
{
public:
    typedef std::vector<Point> Points;
    LineToPointAdapter(Line& line);
    virtual Points::iterator begin();
    virtual Points::iterator end();

private:
    Points points;
    Line& line;
};

#endif