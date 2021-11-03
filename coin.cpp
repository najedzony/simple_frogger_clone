#include "coin.hpp"

Coin::Coin(sf::Vector2u size)
{
    shape.setSize(sf::Vector2f(60, 60));
    shape.setFillColor(sf::Color::Yellow);
    shape.setPosition(sf::Vector2f(0, 0));
}
