#pragma once
#define _USE_MATH_DEFINES
#include "Shape.h"
#include<cmath>

namespace Figures 
{
    class Circle :
        public Shape
    {
    protected:
        float radius;
    public:
        Circle(float);
        Circle();

        float GetArea() override;
        float GetPerimeter() override;
        std::string GetInfo() const override;
    };
}