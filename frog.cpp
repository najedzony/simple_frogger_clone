#include "frog.hpp"
#include <iostream>
Frog::Frog(sf::Vector2u size)
{
    shape.setSize(sf::Vector2f(60.0f, 60.0f));
    shape.setPosition(sf::Vector2f(size.x / 2, size.y - shape.getSize().y));
    OriginalX = shape.getPosition().x;
    OriginalY = size.y - shape.getSize().y;
}

void Frog::Move(sf::Event event, sf::Vector2u size)
{
    int prev_x = shape.getPosition().x;
    int prev_y = shape.getPosition().y;
    if(sf::Keyboard::Left == event.key.code)
        shape.move(-60, 0);
    else if(sf::Keyboard::Right == event.key.code)
        shape.move(60, 0);
    else if(sf::Keyboard::Up == event.key.code)
        shape.move(0, -60);
    else if(sf::Keyboard::Down == event.key.code)
        shape.move(0, 60);

    if(shape.getPosition().x >= size.x)
        shape.setPosition(sf::Vector2f(prev_x, prev_y));
    if(shape.getPosition().x < 0)
        shape.setPosition(sf::Vector2f(prev_x, prev_y));
    if(shape.getPosition().y < 0)
        shape.setPosition(sf::Vector2f(prev_x, prev_y));
    if(shape.getPosition().y >= size.y)
        shape.setPosition(sf::Vector2f(prev_x, prev_y));
}

