#pragma once
#include "Shape.h"

namespace Figures
{
    class Square :
        public Shape
    {
    protected:
        float side;
    public:
        Square(float);
        Square();

        float GetArea() override;
        float GetPerimeter() override;
        std::string GetInfo() const override;
    };
}

