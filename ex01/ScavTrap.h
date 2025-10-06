#pragma once

#include "ClapTrap.h"
#include <iostream>

class ScavTrap : public ClapTrap 
{
public:


    ScavTrap();
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& src);
    ScavTrap& operator=(const ScavTrap& src);
    ~ScavTrap();

    // Override attack()
   void attack(const std::string& target);


    void guardGate();
};
