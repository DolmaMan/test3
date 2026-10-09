#include "Circle.h"
using Figures::Circle;

Circle::Circle(float r) : radius{ r } {}

Circle::Circle() : Circle(0) { }

float Circle::GetArea()
{
	if (area == 0)
		area = M_PI * radius * radius;
	return area;
}

float Circle::GetPerimeter()
{
	if (perimeter == 0)
		perimeter = M_PI * 2 * radius;
	return perimeter;
}

std::string Circle::GetInfo() const
{
	return "Круг с радиусом = " + std::to_string(radius) +
		+"\nПериметр = " + std::to_string(perimeter) +
		+"\nПлощадь = " + std::to_string(area) + "\n";
}
