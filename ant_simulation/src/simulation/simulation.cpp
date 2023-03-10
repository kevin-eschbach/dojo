#include "simulation/simulation.hpp"


Simulation::Simulation(sf::RenderWindow &window)
{
    std::cout << "Simulation created." << std::endl;
    this->window = &window;
    this->ant = Ant();
    // TODO: intialize colony
    // TODO: initialize food
    // TODO: initialize pheromones
}


Simulation::~Simulation()
{
    std::cout << "Simulation destroyed." << std::endl;
    // TODO: delete colony
    // TODO: delete food
    // TODO: delete pheromones
}

void Simulation::step()
{
    std::cout << "Simulation step." << std::endl;
    this->ant.update();
    // TODO: update all entities
    // TODO: check for collisions -> update entities

}

void Simulation::render()
{
    std::cout << "Simulation render." << std::endl;
    this->window->draw(this->ant.get_shape());
}