#pragma once
#include "Polygon.h"
#include <string>

namespace myShapes
{
    class Rectangle : public Polygon
    {
    public:
        // Constructor
        Rectangle(Point topLeft, double length, double width, std::string type, std::string name);

        // Destructor
        ~Rectangle();

        // Getters
        double getLength() const;
        double getWidth() const;

        // Methods
        double getArea();
        double getPerimeter() ;
        void draw(const Canvas& canvas) override;
        void clearDraw(const Canvas& canvas) override;

    private:
        double _length;
        double _width;
    };
}
