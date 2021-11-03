#pragma once

#include <SFML/Graphics.hpp>
#include "base_object.hpp"

class Truck : public Base_object
{
public:
    Truck(float X, float Y, float new_speed);

    void Move(sf::Vector2u size);

private:
    float speed;
};
