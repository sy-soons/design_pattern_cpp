#ifndef __RASTERRENDERER_H__
#define __RASTERRENDERER_H__

#include "Renderer.h"

class RasterRenderer : public Renderer
{
public:
    RasterRenderer();
    ~RasterRenderer();
    void render_circle(float x, float y, float radius) override;
};

#endif