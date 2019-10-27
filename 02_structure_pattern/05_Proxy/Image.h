#ifndef __IMAGE_H__
#define __IMAGE_H__

#include <string>

class Image
{
public:
    virtual void displayImage() = 0;
};

class RealImage : public Image
{
public:
    RealImage(std::string filename);
    void loadImageFromDisk();
    void displayImage() override;
private:
    std::string filename;
};

#endif