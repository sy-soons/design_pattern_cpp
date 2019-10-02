#ifndef __VECTORRECTANGLE_H__
#define __VECTORRECTANGLE_H__

#include "DVectorObject.h"

class VectorRectangle : public DVectorObject
{
public:
    VectorRectangle(int x, int y, int width, int height);
    std::vector<Line>::iterator begin() override;
    std::vector<Line>::iterator end() override;

private:
    std::vector<Line> lines;
};

#endif