#include "game.hpp"

using namespace std;
Game::Game()
{
    window = new sf::RenderWindow(sf::VideoMode(1200, 720), "Frogger");
    frog = new Frog(window->getSize());
    truck = new Truck(0, window->getSize().y / 2, (float)0.4);
    truck2 = new Truck(0, window->getSize().y / 4, (float)0.6);
    truck3 = new Truck(0, 60, (float)0.8);
    truck4 = new Truck(0, 3 * window->getSize().y / 4, (float)0.5);
    coin = new Coin(window->getSize());
    dest = new Destination(window->getSize());
}

void Game::Loop()
{
    sf::Font myFont;
    myFont.loadFromFile("Arial.ttf");
    int current_score = 0;
    int half = 0;
    string cs;
    sf::Text score;
    score.setFont(myFont);
    score.setFillColor(sf::Color::White);
    score.setStyle(sf::Text::Regular);
    score.setString("Score:");
    score.setCharacterSize(25);
    score.setPosition(0, window->getSize().y - 60);

    sf::Text currentScore;
    currentScore.setFont(myFont);
    currentScore.setFillColor(sf::Color::White);
    currentScore.setStyle(sf::Text::Regular);
    currentScore.setCharacterSize(25);
    currentScore.setPosition(80, window->getSize().y - 60);

    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window->close();
            if(event.type == sf::Event::KeyReleased)
                frog->Move(event, window->getSize());
        }

        truck->Move(window->getSize());
        truck2->Move(window->getSize());
        truck3->Move(window->getSize());
        truck4->Move(window->getSize());

        if(frog->GetShape().getGlobalBounds().intersects(truck->GetShape().getGlobalBounds()))
        {
            frog->Reset();
            truck->Reset();
            truck2->Reset();
            truck3->Reset();
            truck4->Reset();
            current_score = 0;
        }
        if(frog->GetShape().getGlobalBounds().intersects(truck2->GetShape().getGlobalBounds()))
        {
            frog->Reset();
            truck->Reset();
            truck2->Reset();
            truck3->Reset();
            truck4->Reset();
            current_score = 0;
        }
        if(frog->GetShape().getGlobalBounds().intersects(truck3->GetShape().getGlobalBounds()))
        {
            frog->Reset();
            truck->Reset();
            truck2->Reset();
            truck3->Reset();
            truck4->Reset();
            current_score = 0;
        }
        if(frog->GetShape().getGlobalBounds().intersects(truck4->GetShape().getGlobalBounds()))
        {
            frog->Reset();
            truck->Reset();
            truck2->Reset();
            truck3->Reset();
            truck4->Reset();
            current_score = 0;
        }
        if(frog->GetShape().getGlobalBounds().intersects(coin->GetShape().getGlobalBounds()))
        {
            half = 1;
        }
        if(frog->GetShape().getGlobalBounds().intersects(dest->GetShape().getGlobalBounds()))
        {
            half = 0;
            current_score++;
        }


        cs = to_string(current_score);
        currentScore.setString(cs);
        window->clear();
        truck->Draw(*window);
        truck2->Draw(*window);
        truck3->Draw(*window);
        truck4->Draw(*window);
        frog->Draw(*window);
        if(!half)coin->Draw(*window);
        if(half)dest->Draw(*window);
        window->draw(score);
        window->draw(currentScore);
        window->display();
    }
}
