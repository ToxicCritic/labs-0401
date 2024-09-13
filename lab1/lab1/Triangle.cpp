#include "Triangle.h"
#include <Cmath>
#include <iostream>

Triangle::Triangle(float base, float side)
{
	this->base = base;
	this->side = side;
}

float Triangle::calculateMedian(bool isBase) {
	if (isBase) {
		return sqrt(pow(side, 2) - pow(base / 2, 2));
	}
	else {
		return sqrt(2 * pow(side, 2) + 2 * pow(base, 2) - pow(side, 2)) / 2;
	}
}

float Triangle::calculatePerimeter() {
	return side * 2 + base;
}

float Triangle::calculateArea() {
	return base * calculateMedian(true) / 2;
}

void Triangle::calculateAngles() {
	float side2 = pow(side, 2);
	float base2 = pow(base, 2);

	float angleSide = acos((side2 * 2 - base2) / (2 * side2)); // угол между боковыми сторонами
	float angleBase = acos(base2 / (2 * side * base));

	std::cout << "”глы при основании: " << angleBase << std::endl;
	std::cout << "”гол между боковыми сторонами: " << angleSide << std::endl;
}