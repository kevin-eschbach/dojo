#include "simulation/simulation.hpp"


Simulation::Simulation(sf::Window &window)
{
    std::cout << "Simulation created." << std::endl;
}

Simulation::~Simulation()
{
    std::cout << "Simulation destroyed." << std::endl;
}

void Simulation::step()
{
    std::cout << "Simulation step." << std::endl;
}