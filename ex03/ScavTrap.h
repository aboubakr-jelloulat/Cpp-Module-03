#pragma once

#include "ClapTrap.h"
#include <iostream>

class ScavTrap : virtual public ClapTrap 
{
public:


    ScavTrap();
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& src);
    ScavTrap& operator=(const ScavTrap& src);
    virtual ~ScavTrap();

    // Override attack()
   void attack(const std::string& target);


    void guardGate();
};
