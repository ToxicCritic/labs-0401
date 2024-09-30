#include "Image.h"

Image::Image(int w, int h, std::string f)
    : width(w), height(h), format(f) {}

void Image::Resize(int newWidth, int newHeight) {
    width = newWidth;
    height = newHeight;
    std::cout << "Изображение изменено до " << width << "x" << height << " пикселей.\n";
}

void Image::ConvertFormat(std::string newFormat) {
    format = newFormat;
    std::cout << "Формат изображения изменен на " << format << ".\n";
}

void Image::DisplayInfo() const {
    std::cout << "Изображение: " << width << "x" << height
        << " пикселей, формат: " << format << ".\n";
}
