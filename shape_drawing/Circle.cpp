#include "Circle.h"

Circle::Circle(Point center, double radius, std::string type, std::string name)
    : Shape(name, type), _center(center), _radius(radius)
{
}

Circle::~Circle() {}

Point Circle::getCenter() const
{
    return _center;
}

double Circle::getRadius() const
{
    return _radius;
}

double Circle::getArea()
{
    return PI * _radius * _radius;
}

double Circle::getPerimeter()
{
    return 2 * PI * _radius;
}

void Circle::draw(const Canvas& canvas)
{
    canvas.draw_circle(_center, _radius);
}

void Circle::clearDraw(const Canvas& canvas)
{
    canvas.clear_circle(_center, _radius);
}
