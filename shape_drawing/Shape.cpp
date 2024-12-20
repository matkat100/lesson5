#include "Shape.h"
#include <iostream>

// Constructor
Shape::Shape(std::string name, std::string type)
    : _name(name), _type(type) {
}

// Destructor
Shape::~Shape() {}

// Getters
std::string Shape::getType() {
    return _type;
}

std::string Shape::getName() {
    return _name;
}

// Methods
double Shape::getArea() {
    // Pure virtual function, not implemented in base class
    std::cerr << "getArea() is not implemented in base class.\n";
    return 0.0;
}

double Shape::getPerimeter() {
    // Pure virtual function, not implemented in base class
    std::cerr << "getPerimeter() is not implemented in base class.\n";
    return 0.0;
}

void Shape::move(Point other) {
    // Pure virtual function, not implemented in base class
    std::cerr << "move(Point) is not implemented in base class.\n";
}

void Shape::printDetails() {
    std::cout << "Shape Name: " << _name << "\n";
    std::cout << "Shape Type: " << _type << "\n";
}

// Virtual functions (abstract)
void Shape::draw(const Canvas& canvas) {
    // Abstract function, must be implemented in derived classes
    std::cerr << "draw(const Canvas&) is not implemented in base class.\n";
}

void Shape::clearDraw(const Canvas& canvas) {
    // Abstract function, must be implemented in derived classes
    std::cerr << "clearDraw(const Canvas&) is not implemented in base class.\n";
}
