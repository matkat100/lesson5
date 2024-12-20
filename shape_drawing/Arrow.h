#pragma once
#include "Shape.h"

class Arrow : public Shape
{
public:
    // Constructor
    Arrow(Point source, Point destination, std::string type, std::string name);

    // Destructor
    ~Arrow();

    // Getters
    Point getSource() const;
    Point getDestination() const;

    // Methods
    double getArea() ; // Not relevant; return 0
    double getPerimeter() ; // Length of the arrow
    void draw(const Canvas& canvas) override;
    void clearDraw(const Canvas& canvas) override;

private:
    Point _source;
    Point _destination;
};
