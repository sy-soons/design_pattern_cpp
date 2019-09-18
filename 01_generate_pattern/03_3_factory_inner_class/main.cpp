#include<stdio.h>
#include "Point.h"

using namespace std;

int main()
{
	printf("===== main =====\n");
	auto my_point1 = Point::PointFactory::NewCartesian(3.0, 3.0);
	auto my_point2 = Point::Factory::NewPolar(3.0, 90.0);
	return 0;
}
