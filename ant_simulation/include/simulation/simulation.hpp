#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

/////////////////////////////////////////////////////////////////////////
/// @brief Simulation class.
/////////////////////////////////////////////////////////////////////////
class Simulation
{
public:
    /////////////////////////////////////////////////////////////////////////
    /// @brief Constructor for Simulation class.
    /// @param window window to draw to
    /////////////////////////////////////////////////////////////////////////
    Simulation(sf::Window&);

    /////////////////////////////////////////////////////////////////////////
    /// @brief Destructor for Simulation class.
    /////////////////////////////////////////////////////////////////////////
    ~Simulation();

    /////////////////////////////////////////////////////////////////////////
    /// @brief One step of the simulation.
    /////////////////////////////////////////////////////////////////////////
    void step();
};