#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
	cout << "===== main =====" << endl;
	Point p1(1.0, 1.0);
	Point p2(1.0, 1.0, Point::PointType::cartesian);
	Point p3(1.0, 90.0, Point::PointType::polar);
	return 0;
}
