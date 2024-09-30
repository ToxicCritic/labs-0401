#include "Image.h"

Image::Image(int w, int h, std::string f)
    : width(w), height(h), format(f) {}

void Image::Resize(int newWidth, int newHeight) {
    width = newWidth;
    height = newHeight;
    std::cout << "����������� �������� �� " << width << "x" << height << " ��������.\n";
}

void Image::ConvertFormat(std::string newFormat) {
    format = newFormat;
    std::cout << "������ ����������� ������� �� " << format << ".\n";
}

void Image::DisplayInfo() const {
    std::cout << "�����������: " << width << "x" << height
        << " ��������, ������: " << format << ".\n";
}
