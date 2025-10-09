#include "DiamondTrap.h"

#include <iostream>

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap("DiamondTrap_clap_name"), FragTrap("DiamondFragTrap_name"), ScavTrap("DiamondScavTrap_name"), name("DiamondTrap")
{
	_hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap constructor called for " << name << std::endl;

}


DiamondTrap::DiamondTrap(const DiamondTrap& src)
    : ClapTrap(src), FragTrap(src), ScavTrap(src), name(src.name)
{
    std::cout << "DiamondTrap copy constructor called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
    if (this != &src) 
	{
        ClapTrap::operator=(src);
        FragTrap::operator=(src);
        ScavTrap::operator=(src);
        name = src.name;
    }
    std::cout << "DiamondTrap assignment operator called\n";
    return *this;
}


DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called\n";
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}
