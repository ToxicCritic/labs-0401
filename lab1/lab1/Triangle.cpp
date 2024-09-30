#include "Triangle.h"
#include <cmath>
#include <iostream>

const double PI = 3.14159265358979323846;

Triangle::Triangle(double b, double s) {
    if (!setProperties(b, s)) {
        std::cerr << "������������ ��������� ��� ������������." << std::endl;
    }
}

bool Triangle::setProperties(double b, double s) {
    if (b <= 0 || s <= 0 || b >= 2 * s) {  
        std::cerr << "������: ������������ �������� ��������� � ������� �������." << std::endl;
        return false;
    }
    base = b;
    side = s;
    return true;
}

void Triangle::scale(double percent) {
    if (percent <= -100) {
        std::cerr << "������: ������������ �������." << std::endl;
        return;
    }
    base += base * (percent / 100);
    side += side * (percent / 100);
}

double Triangle::median(bool toBase) const {
    if (toBase) {
        // ������� � ���������
        return std::sqrt(2 * std::pow(side, 2) - std::pow(base, 2)) / 2;
    }
    else {
        // ������� � ������� �������
        return std::sqrt(2 * std::pow(side, 2) + std::pow(base, 2)) / 2;
    }
}

double Triangle::perimeter() const {
    return 2 * side + base;
}

double Triangle::area() const {
    double height = std::sqrt(std::pow(side, 2) - std::pow(base / 2, 2));
    return (base * height) / 2;
}

double Triangle::angleAtBase() const {
    return std::acos(base / (2 * side)) * (180.0 / PI);  // ���� ��� ���������
}

double Triangle::angleAtVertex() const {
    return 180 - 2 * angleAtBase();  // ��������� ����
}

void Triangle::displayProperties() const {
    std::cout << "���������: " << base << ", ������� �������: " << side << std::endl;
    std::cout << "��������: " << perimeter() << ", �������: " << area() << std::endl;
    std::cout << "���� ��� ���������: " << angleAtBase() << " ��������" << std::endl;
    std::cout << "��������� ����: " << angleAtVertex() << " ��������" << std::endl;
    std::cout << "������� � ���������: " << median(true) << std::endl;
    std::cout << "������� � ������� �������: " << median(false) << std::endl;
}
