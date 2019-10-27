#include "Image.h"
#include <iostream>

RealImage::RealImage(std::string filename)
{
    this->filename = filename;
    loadImageFromDisk();
}

void RealImage::loadImageFromDisk()
{
    std::cout << "Loading       : " + filename << std::endl;
}

void RealImage::displayImage()
{
    std::cout << "Displaying    : " + filename << std::endl;
}