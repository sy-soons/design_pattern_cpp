#include "Point.h"
class PointFactory
{
    public:
        static Point NewCartesian(float x, float y);
        static Point NewPolar(float r, float theta);
};