#ifndef FILTER_H
#define FILTER_H

#include <string>
#include <iostream>

class Filter {
private:
    std::string filterType;
    double intensity;
    std::string blendMode;

public:
    Filter(std::string fType, double inten, std::string bMode);

    void ApplyFilter();
    void ChangeIntensity(double newIntensity);
    void DisplayInfo() const;
};

#endif // FILTER_H
