/*
상호 참조로 빌드 시에 무한루프에 빠진다.
Point클래스에서는 PointFactory의 이름만 필요하므로,
friend클래스로 전방선언을 한다.
*/
// #include "PointFactory.h"

class Point
{   
    public:
        friend class PointFactory;

    private:
        float x;
        float y;
        Point(const float x, const float y);
};