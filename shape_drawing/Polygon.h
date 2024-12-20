#pragma once
#include "Shape.h"
#include <vector>

class Polygon : public Shape
{
public:
    // Constructor
    Polygon(std::string type, std::string name);

    // Destructor
    ~Polygon();

    // Getters
    std::vector<Point> getPoints() const;

protected:
    std::vector<Point> _points;
};
