#include "truck.hpp"

Truck::Truck(float X, float Y, float new_speed)
{
    shape.setSize(sf::Vector2f(120, 60));
    shape.setFillColor(sf::Color::Red);
    shape.setPosition(sf::Vector2f(X, Y));

    OriginalX = X;
    OriginalY = Y;
    speed = new_speed;
}

void Truck::Move(sf::Vector2u size)
{
    shape.move(speed, 0.0);
    if(shape.getPosition().x > size.x)
        shape.setPosition(sf::Vector2f(-shape.getSize().x, OriginalY));
}


