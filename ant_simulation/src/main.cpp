#include <iostream>
#include <SFML/Graphics.hpp>

#include "simulation/simulation.hpp"

int main(int argc, char* argv[])
{
    std::cout << "Initializing simulation..." << std::endl;

    // Create the main window
    sf::RenderWindow window(sf::VideoMode(1080, 720), "Simulation", sf::Style::Default);
    window.setFramerateLimit(60);

    // Create simulation
    Simulation simulation(window);

    // Main loop
    std::cout << "Starting simulation loop..." << std::endl;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        simulation.step();

        window.clear();
        window.display();
    }

    std::cout << "Simulation ended." << std::endl;

    return 0;
}