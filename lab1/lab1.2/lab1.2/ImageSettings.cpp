#include "ImageSettings.h"

ImageSettings::ImageSettings(int b, int c, int s)
    : brightness(b), contrast(c), saturation(s) {}

void ImageSettings::AdjustBrightness(int newBrightness) {
    brightness = newBrightness;
    std::cout << "������� �������� �� " << brightness << ".\n";
}

void ImageSettings::AdjustContrast(int newContrast) {
    contrast = newContrast;
    std::cout << "�������� ������� �� " << contrast << ".\n";
}

void ImageSettings::AdjustSaturation(int newSaturation) {
    saturation = newSaturation;
    std::cout << "������������ �������� �� " << saturation << ".\n";
}

void ImageSettings::DisplayInfo() const {
    std::cout << "��������� ����������� � �������: " << brightness
        << ", ��������: " << contrast
        << ", ������������: " << saturation << ".\n";
}
