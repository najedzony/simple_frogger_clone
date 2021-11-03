#pragma once

#include <SFML/Graphics.hpp>
#include "Frog.hpp"
#include "Truck.hpp"
#include "Coin.hpp"
#include "Destination.hpp"
#include <bits/stdc++.h>


class Game
{
public:
    Game();

    void Loop();

private:
    sf::RenderWindow *window;
    Frog *frog;
    Truck *truck;
    Truck *truck2;
    Truck *truck3;
    Truck *truck4;
    Coin  *coin;
    Destination *dest;
};
