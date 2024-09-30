#ifndef IMAGESETTINGS_H
#define IMAGESETTINGS_H

#include <iostream>

class ImageSettings {
private:
    int brightness;
    int contrast;
    int saturation;

public:
    ImageSettings(int b, int c, int s);

    void AdjustBrightness(int newBrightness);
    void AdjustContrast(int newContrast);
    void AdjustSaturation(int newSaturation);
    void DisplayInfo() const;
};

#endif // IMAGESETTINGS_H
