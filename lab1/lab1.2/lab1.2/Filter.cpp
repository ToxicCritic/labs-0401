#include "Filter.h"

Filter::Filter(std::string fType, double inten, std::string bMode)
    : filterType(fType), intensity(inten), blendMode(bMode) {}

void Filter::ApplyFilter() {
    std::cout << "Фильтр " << filterType << " применен с интенсивностью "
        << intensity << " и режимом наложения " << blendMode << ".\n";
}

void Filter::ChangeIntensity(double newIntensity) {
    intensity = newIntensity;
    std::cout << "Интенсивность фильтра изменена на " << intensity << ".\n";
}

void Filter::DisplayInfo() const {
    std::cout << "Фильтр: " << filterType
        << ", Интенсивность: " << intensity
        << ", Режим наложения: " << blendMode << ".\n";
}
