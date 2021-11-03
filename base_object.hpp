#pragma once

#include <SFML/Graphics.hpp>

class Base_object
{
public:
    Base_object();

    void Draw(sf::RenderWindow &window);

    sf::RectangleShape GetShape();

    void Reset();

protected:
    sf::RectangleShape shape;

    float OriginalX, OriginalY;
};
