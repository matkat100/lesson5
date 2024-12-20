#include "Menu.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Arrow.h"

int main()
{
    Canvas canvas;
    Menu menu(canvas);

    // Create shapes
    auto rect = std::make_shared<myShapes::Rectangle>(
        Point(0, 0), 10, 5, "Rectangle", "MyRectangle");
    auto circle = std::make_shared<Circle>(
        Point(5, 5), 3, "Circle", "MyCircle");
    auto arrow = std::make_shared<Arrow>(
        Point(2, 2), Point(8, 8), "Arrow", "MyArrow");

    // Add shapes to menu
    menu.addShape(rect);
    menu.addShape(circle);
    menu.addShape(arrow);

    // Display shapes
    menu.displayShapes();

    // Draw all shapes
    menu.drawAll();

    // Clear all shapes
    menu.clearAll();

    // Remove a shape
    menu.removeShape("MyRectangle");

    // Display shapes again
    menu.displayShapes();

    return 0;
}
