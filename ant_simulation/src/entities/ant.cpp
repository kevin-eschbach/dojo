#include "entities/ant.hpp"

Ant::Ant()
{
    this->shape = sf::CircleShape(10.f);
    this->shape.setFillColor(sf::Color::Red);
    this->shape.setOrigin(10.f, 10.f);
    this->position = sf::Vector2f(0.f, 0.f);
    this->orientation = sf::Vector2f(0.f, 1.f);
    this->linear_velocity = 1.0f;
    this->angular_velocity = 0;

}

Ant::~Ant()
{
    std::cout << "Ant destroyed." << std::endl;
}

void Ant::update()
{
    sf::Vector2f offset = sf::Vector2f(.1f, .1f);
    this->shape.move(offset);
}

sf::CircleShape Ant::get_shape()
{
    return this->shape;
}