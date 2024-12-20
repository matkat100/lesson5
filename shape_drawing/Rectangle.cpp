#include "Rectangle.h"

namespace myShapes
{
    Rectangle::Rectangle(Point topLeft, double length, double width, std::string type, std::string name)
        : Polygon(type, name), _length(length), _width(width)
    {
        _points.push_back(topLeft);
        _points.push_back(Point(topLeft.getX() + length, topLeft.getY()));
        _points.push_back(Point(topLeft.getX() + length, topLeft.getY() - width));
        _points.push_back(Point(topLeft.getX(), topLeft.getY() - width));
    }

    Rectangle::~Rectangle() {}

    double Rectangle::getLength() const
    {
        return _length;
    }

    double Rectangle::getWidth() const
    {
        return _width;
    }

    double Rectangle::getArea()
    {
        return _length * _width;
    }

    double Rectangle::getPerimeter()
    {
        return 2 * (_length + _width);
    }

    void Rectangle::draw(const Canvas& canvas)
    {
        canvas.draw_rectangle(_points[0], _points[2]);
    }

    void Rectangle::clearDraw(const Canvas& canvas)
    {
        canvas.clear_rectangle(_points[0], _points[2]);
    }
}
