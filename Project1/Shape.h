#pragma once
#include<string>

namespace Figures 
{
	class Shape
	{
	protected:
		float area;
		float perimeter;
	public:
		Shape();
		virtual float GetArea() = 0;
		virtual float GetPerimeter() = 0;
		virtual std::string GetInfo() const = 0;
	};
}