#include "Lens.h"

Lens::Lens(double fLength, double ap, std::string lType)
    : focalLength(fLength), aperture(ap), lensType(lType) {}

void Lens::ZoomIn(double newFocalLength) {
    if (lensType == "Zoom") {
        focalLength = newFocalLength;
        std::cout << "�������� ���������� �������� �� " << focalLength << " ��.\n";
    }
    else {
        std::cout << "���������� ����������, ��� ��� �������� �������������.\n";
    }
}

void Lens::ChangeAperture(double newAperture) {
    aperture = newAperture;
    std::cout << "��������� �������� �� f/" << aperture << ".\n";
}

void Lens::DisplayInfo() const {
    std::cout << "��������: " << lensType
        << ", �������� ����������: " << focalLength
        << " ��, ���������: f/" << aperture << ".\n";
}
