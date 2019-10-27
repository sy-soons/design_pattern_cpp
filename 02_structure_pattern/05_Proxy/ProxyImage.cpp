#include "ProxyImage.h"
#include <iostream>

ProxyImage::ProxyImage(std::string filename)
    : image(nullptr)
{
    this->filename = filename;
}

void ProxyImage::displayImage()
{
    if(image == nullptr)
        image = new RealImage(filename);
    
    image->displayImage();
}