#include <stdio.h>
#include <math.h>
#define PI 3.14159265

class Point
{
    public:
    class PointFactory
    {
        private:
            PointFactory(){}
        public:
            static Point NewCartesian(float x, float y);
            static Point NewPolar(float r, float theta);
    };
    //Point::PointFactory,, Point가 중복해서 두번 등장하는 것이 거슬린다면.. typedef로 선언한다.
    typedef PointFactory Factory;

    private:
        float x;
        float y;
        Point(const float x, const float y);
};
