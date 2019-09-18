#include "Point.h"
#include <stdio.h>
#include <math.h>
#define PI 3.14159265

using namespace std;

Point::Point(float x, float y)
    :x(x), y(y)
{
    printf("[point(cartesian)] (x, y): (%3.3f, %3.3f)\n", this->x, this->y);
}

//인자 타입, 수가 같기 때문에 빌드에러 발생함
// Point::Point(float r, float theta)
//     :x(r*cos(theta)), y(r*sin(theta))
// {
//     cout << "[point(polar)] (x, y):" << this->x <<", " << this->y << endl;
// }

Point::Point(float x, float y, PointType type)
{
    if(type == PointType::cartesian)//직교좌표
    {
        this->x = x;
        this->y = y;
    }
    else//극좌표
    {
        double rad = y * PI / 180.0;
        // printf("theta: %3.3f, rad: %3.3f\n", y, rad);
        this->x = x*cos(rad);
        this->y = x*sin(rad);
    }
    printf("[point] type: %d, (x, y): (%3.3f, %3.3f)\n", static_cast<int>(type), this->x, this->y);
}