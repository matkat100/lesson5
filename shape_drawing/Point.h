#pragma once

class Point
{
private:
    double _x;
    double _y;

public:
    // Constructors
    Point();
    Point(double x, double y);

    // Getters
    double getX() const;
    double getY() const;

    // Setters
    void setX(double x);
    void setY(double y);

    // Utility methods
    void move(double deltaX, double deltaY);
    double distanceTo(const Point& other) const;

    // Operator overloads
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;
};
    