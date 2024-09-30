#include "Filter.h"

Filter::Filter(std::string fType, double inten, std::string bMode)
    : filterType(fType), intensity(inten), blendMode(bMode) {}

void Filter::ApplyFilter() {
    std::cout << "������ " << filterType << " �������� � �������������� "
        << intensity << " � ������� ��������� " << blendMode << ".\n";
}

void Filter::ChangeIntensity(double newIntensity) {
    intensity = newIntensity;
    std::cout << "������������� ������� �������� �� " << intensity << ".\n";
}

void Filter::DisplayInfo() const {
    std::cout << "������: " << filterType
        << ", �������������: " << intensity
        << ", ����� ���������: " << blendMode << ".\n";
}
