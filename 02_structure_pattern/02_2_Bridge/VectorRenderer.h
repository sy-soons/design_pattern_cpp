#ifndef __VECTORRENDERER_H__
#define __VECTORRENDERER_H__

#include "Renderer.h"

class VectorRenderer : public Renderer
{
public:
    VectorRenderer();
    ~VectorRenderer();
    void render_circle(float x, float y, float radius) override;
};

#endif