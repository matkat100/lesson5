#pragma once
#include <vector>
#include <memory>
#include "Shape.h"
#include "Canvas.h"

class Menu
{
public:
    // Constructor
    Menu(Canvas& canvas);

    // Destructor
    ~Menu();

    // Methods
    void addShape(std::shared_ptr<Shape> shape);
    void removeShape(const std::string& name);
    void drawAll();
    void clearAll();
    void displayShapes() const;

private:
    Canvas& _canvas;
    std::vector<std::shared_ptr<Shape>> _shapes;
};
