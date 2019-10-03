#include "LineToPointAdapter.h"
#include <algorithm>
#include <iostream>

// #define GEN_ADAPTER
LineToPointAdapter::LineToPointAdapter(Line& line)
    :line(line)
{
    std::cout << "LineToPointAdapter() start" << std::endl;
#ifdef GEN_ADAPTER
    //성급한 접근법... 
    //line을 로컬에 저장하고 변환을 begin()이 불릴때마다 하도록 하면 느긋한 버전의 어댑터도 가능하다.
    int left = std::min(line.start.x, line.end.x);
    int right = std::max(line.start.x, line.end.x);
    int top = std::min(line.start.y, line.end.y);
    int bottom = std::max(line.start.y, line.end.y);
    int dx = right = left;
    int dy = bottom - top;//line.end.y - line.start.y;

    //수직, 수평 선분만 그린다.
    if(dx == 0)
    {//세로
        for(int y = top; y <= bottom; ++y)
        {
            points.emplace_back(Point{left, y});
        }
    }
    else if(dy == 0)
    {
        for(int x = left; x <= right; ++x)
        {
            points.emplace_back(Point{x, top});
        }
    }
    std::cout << "LineToPointAdapter() end" << std::endl;
#endif
}

std::vector<Point>::iterator LineToPointAdapter::begin()
{
#ifndef GEN_ADAPTER
    int left = std::min(line.start.x, line.end.x);
    int right = std::max(line.start.x, line.end.x);
    int top = std::min(line.start.y, line.end.y);
    int bottom = std::max(line.start.y, line.end.y);
    int dx = right = left;
    int dy = line.end.y - line.start.y;//bottom - top;

    std::cout << "LineToPointAdapter::begin(): "
                                    << left <<", "
                                    << right <<", "
                                    << top <<", "
                                    << bottom <<", "
                                    << dx <<", "
                                    << dy <<", "
                                    << std::endl;

    //수직, 수평 선분만 그린다.
    if(dx == 0)
    {//세로
        for(int y = top; y <= bottom; ++y)
        {
            points.emplace_back(Point{left, y});
        }
    }
    else if(dy == 0)
    {
        for(int x = left; x <= right; ++x)
        {
            points.emplace_back(Point{x, top});
        }
    }
#endif
    std::cout << "LineToPointAdapter::begin()" << std::endl;
    return points.begin();
}

std::vector<Point>::iterator LineToPointAdapter::end()
{
    std::cout << "LineToPointAdapter::end()" << std::endl;
    return points.end();
}
