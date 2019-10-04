#include <iostream>
#include "RasterRenderer.h"
#include "VectorRenderer.h"
#include "Circle.h"


using namespace std;

int main()
{
    cout << "===== main =====" << endl;

    RasterRenderer rr;
    Circle raster_circle(rr, 5, 5, 5);
    raster_circle.draw();
    raster_circle.resize(2);
    raster_circle.draw();


    VectorRenderer vr;
    Circle vector_circle(vr, 6, 6, 6);
    vector_circle.draw();
    vector_circle.resize(5);
    vector_circle.draw();

    return 0;
}