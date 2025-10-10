#include "ScavTrap.h"
#include "ClapTrap.h"

#include <iostream>

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) 
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " constructed" << std::endl;
}

/*
    Copy Constructor:
        Used when a new object is created from an existing one. 
        It initializes the new object's memory and copies all data from the source.
*/

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
    std::cout << "ScavTrap " << _name << " copy-constructed" << std::endl;
}

/*
    Assignment Operator:
        Used when an existing object is assigned the values of another existing object. 
        The existing object might already have resources allocated.
*/

ScavTrap& ScavTrap::operator=(const ScavTrap& src) 
{
    ClapTrap::operator=(src);
    std::cout << "ScavTrap " << _name << " assigned" << std::endl;
    return *this;
}


ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}

// Override attack()
void ScavTrap::attack(const std::string& target) 
{
    if (_hitPoints == 0 || _energyPoints == 0) 
	{
        std::cout << "ScavTrap " << _name << " can't attack (no HP/energy)" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ScavTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() 
{
    std::cout << "ScavTrap " << _name << " has entered Gate keeper mode\n";
}
