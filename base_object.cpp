#include "base_object.hpp"

Base_object::Base_object(){}

void Base_object::Draw(sf::RenderWindow &window)
{
    window.draw(shape);
}

sf::RectangleShape Base_object::GetShape()
{
    return shape;
}

void Base_object::Reset()
{
    shape.setPosition(sf::Vector2f(OriginalX, OriginalY));
}
