#pragma once

#include <SFML/Graphics.hpp>
#include "base_object.hpp"


class Frog : public Base_object
{
public:
    Frog(sf::Vector2u size);

    void Move(sf::Event event, sf::Vector2u size);
};
