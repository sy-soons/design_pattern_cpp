#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
	cout << "===== main =====" << endl;
	//Point p1(1.0, 1.0);//error, static메서드로만 접근하도록하기 위해
	Point p2 = Point::NewCartesian(1.0, 1.0);
	Point p3 = Point::NewPolar(1.0, 90.0);
	return 0;
}
