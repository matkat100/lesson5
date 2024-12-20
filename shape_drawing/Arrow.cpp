#include "Arrow.h"
#include <cmath>

Arrow::Arrow(Point source, Point destination, std::string type, std::string name)
    : Shape(name, type), _source(source), _destination(destination)
{
}

Arrow::~Arrow() {}

Point Arrow::getSource() const
{
    return _source;
}

Point Arrow::getDestination() const
{
    return _destination;
}

double Arrow::getArea()
{
    return 0; // Arrow has no area
}

double Arrow::getPerimeter()
{
    return std::sqrt(
        std::pow(_destination.getX() - _source.getX(), 2) +
        std::pow(_destination.getY() - _source.getY(), 2));
}

void Arrow::draw(const Canvas& canvas)
{
    canvas.draw_arrow(_source, _destination);
}

void Arrow::clearDraw(const Canvas& canvas)
{
    canvas.clear_arrow(_source, _destination);
}
