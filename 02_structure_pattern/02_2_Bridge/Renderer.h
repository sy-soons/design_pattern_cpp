#ifndef __RENDERER_H__
#define __RENDERER_H__

class Renderer
{
public:
    Renderer();
    virtual void render_circle(float x, float y, float radius) = 0;
};

#endif