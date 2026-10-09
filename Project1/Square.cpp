#include "Square.h"
using Figures::Square;

Square::Square(float s) : side{ s } {}

Square::Square() : Square(0) {}

float Square::GetArea()
{
	if (area == 0)
		area = side * side;
	return area;
}

float Square::GetPerimeter()
{
	if (perimeter == 0)
		perimeter = side * 4;
	return perimeter;
}

std::string Square::GetInfo() const
{
	return "Квадрат со стороной = " + std::to_string(side) +
		+"\nПериметр = " + std::to_string(perimeter) +
		+"\nПлощадь = " + std::to_string(area) + "\n";
}
