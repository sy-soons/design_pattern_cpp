#ifndef __PROXYIMAGE_H__
#define __PROXYIMAGE_H__

#include "Image.h"
#include <string>

class ProxyImage : public Image
{
public:
    ProxyImage(std::string filename);
    void displayImage() override;

private:
    std::string filename;
    Image *image;
};

#endif