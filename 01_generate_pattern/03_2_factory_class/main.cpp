#include<stdio.h>
#include "PointFactory.h"

using namespace std;

int main()
{
	printf("===== main =====\n");
	auto my_point1 = PointFactory::NewCartesian(3.0, 3.0);
	auto my_point2 = PointFactory::NewPolar(3.0, 90.0);
	return 0;
}
