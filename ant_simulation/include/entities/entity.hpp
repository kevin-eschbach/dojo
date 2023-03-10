#pragma once

/////////////////////////////////////////////////////////////////////////
/// @brief Abstract entity class.
/////////////////////////////////////////////////////////////////////////
class Entity
{
public:
    /////////////////////////////////////////////////////////////////////////
    /// @brief Update the entity.
    /////////////////////////////////////////////////////////////////////////
    virtual void update() = 0;
};