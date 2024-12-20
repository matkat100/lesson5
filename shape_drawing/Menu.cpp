#include "Menu.h"
#include <iostream>

Menu::Menu(Canvas& canvas)
    : _canvas(canvas)
{
}

Menu::~Menu() {}

void Menu::addShape(std::shared_ptr<Shape> shape)
{
    _shapes.push_back(shape);
}

void Menu::removeShape(const std::string& name)
{
    auto it = std::remove_if(_shapes.begin(), _shapes.end(),
        [&name](const std::shared_ptr<Shape>& shape) {
            return shape->getName() == name;
        });
    if (it != _shapes.end())
    {
        _shapes.erase(it, _shapes.end());
        std::cout << "Shape \"" << name << "\" removed.\n";
    }
    else
    {
        std::cout << "Shape \"" << name << "\" not found.\n";
    }
}

void Menu::drawAll()
{
    for (const auto& shape : _shapes)
    {
        shape->draw(_canvas);
    }
}

void Menu::clearAll()
{
    for (const auto& shape : _shapes)
    {
        shape->clearDraw(_canvas);
    }
}

void Menu::displayShapes() const
{
    for (const auto& shape : _shapes)
    {
        std::cout << "Shape: " << shape->getName() << " | Type: " << shape->getType() << "\n";
    }
}
