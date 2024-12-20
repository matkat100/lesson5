#include "Point.h"
#include <cmath>

// Default constructor
Point::Point() : _x(0), _y(0) {}

// Parameterized constructor
Point::Point(double x, double y) : _x(x), _y(y) {}

// Getters
double Point::getX() const
{
    return _x;
}

double Point::getY() const
{
    return _y;
}

// Setters
void Point::setX(double x)
{
    _x = x;
}

void Point::setY(double y)
{
    _y = y;
}

// Move point by delta values
void Point::move(double deltaX, double deltaY)
{
    _x += deltaX;
    _y += deltaY;
}

// Calculate distance to another point
double Point::distanceTo(const Point& other) const
{
    double dx = _x - other._x;
    double dy = _y - other._y;
    return std::sqrt(dx * dx + dy * dy);
}

// Equality operator
bool Point::operator==(const Point& other) const
{
    return _x == other._x && _y == other._y;
}

// Inequality operator
bool Point::operator!=(const Point& other) const
{
    return !(*this == other);
}
