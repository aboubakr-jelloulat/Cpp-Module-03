#pragma once

#include <iostream>

#include "FragTrap.h"
#include "ScavTrap.h"


class DiamondTrap : public FragTrap, public ScavTrap
{
	std::string name;

public :
	DiamondTrap(const std::string& name);
    DiamondTrap(const DiamondTrap& src);
    DiamondTrap& operator=(const DiamondTrap& src);
    virtual ~DiamondTrap();


	void whoAmI();
};

