#include "destination.hpp"

Destination::Destination(sf::Vector2u size)
{
    shape.setSize(sf::Vector2f(60, 60));
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(sf::Vector2f(size.x - shape.getSize().x, size.y - shape.getSize().y));
}
