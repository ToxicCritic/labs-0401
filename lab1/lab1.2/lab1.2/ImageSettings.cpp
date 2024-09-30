#include "ImageSettings.h"

ImageSettings::ImageSettings(int b, int c, int s)
    : brightness(b), contrast(c), saturation(s) {}

void ImageSettings::AdjustBrightness(int newBrightness) {
    brightness = newBrightness;
    std::cout << "Яркость изменена на " << brightness << ".\n";
}

void ImageSettings::AdjustContrast(int newContrast) {
    contrast = newContrast;
    std::cout << "Контраст изменен на " << contrast << ".\n";
}

void ImageSettings::AdjustSaturation(int newSaturation) {
    saturation = newSaturation;
    std::cout << "Насыщенность изменена на " << saturation << ".\n";
}

void ImageSettings::DisplayInfo() const {
    std::cout << "Настройки изображения — Яркость: " << brightness
        << ", Контраст: " << contrast
        << ", Насыщенность: " << saturation << ".\n";
}
