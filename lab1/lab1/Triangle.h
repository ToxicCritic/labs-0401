#pragma once
class Triangle {
private:
	float base;
	float side;

public:
	Triangle(float base, float side);
	float calculateMedian(bool isBase);
	float calculatePerimeter();
	float calculateArea();
	void calculateAngles();
};

