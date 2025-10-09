#pragma once

#include "ScavTrap.h"
#include "FragTrap.h"

#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap 
{
private:
    std::string _name;

public:

    DiamondTrap(const std::string& name);
    DiamondTrap(const DiamondTrap& src);
    DiamondTrap& operator=(const DiamondTrap& src);
    ~DiamondTrap();


	using ScavTrap::attack;

    void whoAmI();
};
