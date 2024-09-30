#ifndef LENS_H
#define LENS_H

#include <string>
#include <iostream>

class Lens {
private:
    double focalLength;
    double aperture;
    std::string lensType;

public:
    Lens(double fLength, double ap, std::string lType);

    void ZoomIn(double newFocalLength);
    void ChangeAperture(double newAperture);
    void DisplayInfo() const;
};

#endif // LENS_H
