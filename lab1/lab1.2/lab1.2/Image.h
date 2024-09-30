#ifndef IMAGE_H
#define IMAGE_H

#include <string>
#include <iostream>

class Image {
private:
    int width;
    int height;
    std::string format;

public:
    Image(int w, int h, std::string f);

    void Resize(int newWidth, int newHeight);
    void ConvertFormat(std::string newFormat);
    void DisplayInfo() const;
};

#endif // IMAGE_H
