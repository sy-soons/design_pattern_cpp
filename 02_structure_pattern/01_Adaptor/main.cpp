#include <iostream>
#include <vector>
#include <memory>
#include "VectorRectangle.h"
#include "LineToPointAdapter.h"

using namespace std;

void DrawPoints(LineToPointAdapter& lpo)
{
    cout << "DrawPoints()" << endl;
    for(auto i = lpo.begin(); i != lpo.end(); ++i)
        cout << "DrawPoints(), (x, y): " << (*i).x << ", " << (*i).y << endl;
}

int main()
{
    std::cout << "===== main =====" << std::endl;
    vector<shared_ptr<DVectorObject>> vectorObjects;
    // shared_ptr<VectorRectangle> p_rect1 = make_shared<VectorRectangle>(10, 10, 100, 100);
    // shared_ptr<VectorRectangle> p_rect2 = make_shared<VectorRectangle>(30, 30, 60, 60);
    // vectorObjects.emplace_back(std::move(p_rect1));
    // vectorObjects.emplace_back(std::move(p_rect2));

    vectorObjects.push_back(shared_ptr<DVectorObject>(new VectorRectangle(10, 10, 100, 100)));
    vectorObjects.push_back(shared_ptr<DVectorObject>(new VectorRectangle(30, 30, 60, 60)));

    // vectorObjects.push_back(make_shared<VectorRectangle>(10, 10, 100, 100));
    // vectorObjects.push_back(make_shared<VectorRectangle>(30, 30, 60, 60));

    std::vector<shared_ptr<DVectorObject>>::iterator vIt;
    for(vIt = vectorObjects.begin(); vIt != vectorObjects.end(); ++vIt)
    {
        //Rectangle은 line들의 집합이고
        //line을 point interator로 변환하는 어댑터가 있으면 편하다.
        std::vector<Line>::iterator lIt;

        for(lIt = (*vIt)->begin(); lIt != (*vIt)->end(); ++lIt)
        {
            LineToPointAdapter lpo(*lIt);
            DrawPoints(lpo);
        }
    }

    return 0;
}