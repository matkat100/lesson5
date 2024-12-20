#pragma once
#include "Shape.h"
#include <string>

#define PI 3.14159

class Circle : public Shape
{
public:
    // Constructor
    Circle(Point center, double radius, std::string type, std::string name);

    // Destructor
    ~Circle();

    // Getters
    Point getCenter() const;
    double getRadius() const;

    // Methods
    double getArea() ;
    double getPerimeter() ;
    void draw(const Canvas& canvas) override;
    void clearDraw(const Canvas& canvas) override;

private:
    Point _center;
    double _radius;
};
