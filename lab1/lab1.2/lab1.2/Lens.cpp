#include "Lens.h"

Lens::Lens(double fLength, double ap, std::string lType)
    : focalLength(fLength), aperture(ap), lensType(lType) {}

void Lens::ZoomIn(double newFocalLength) {
    if (lensType == "Zoom") {
        focalLength = newFocalLength;
        std::cout << "Фокусное расстояние изменено на " << focalLength << " мм.\n";
    }
    else {
        std::cout << "Невозможно зумировать, так как объектив фиксированный.\n";
    }
}

void Lens::ChangeAperture(double newAperture) {
    aperture = newAperture;
    std::cout << "Диафрагма изменена на f/" << aperture << ".\n";
}

void Lens::DisplayInfo() const {
    std::cout << "Объектив: " << lensType
        << ", Фокусное расстояние: " << focalLength
        << " мм, Диафрагма: f/" << aperture << ".\n";
}
