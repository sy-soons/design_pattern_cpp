#ifndef __TEXTFIELD_H__
#define __TEXTFIELD_H__

#include "Widget.h"

class TextField : public Widget
{
public:
    TextField(int w, int h);
    void draw();

private:
    int width, height;
};

#endif