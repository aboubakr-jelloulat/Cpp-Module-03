#include "ScavTrap.h"
#include "ClapTrap.h"

#include <iostream>

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) 
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << name << " constructed" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
    std::cout << "ScavTrap " << name << " copy-constructed" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) 
{
    ClapTrap::operator=(src);
    std::cout << "ScavTrap " << name << " assigned" << std::endl;
    return *this;
}


ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap " << name << " destroyed" << std::endl;
}

// Override attack()
void ScavTrap::attack(const std::string& target) 
{
    if (_hitPoints == 0 || _energyPoints == 0) 
	{
        std::cout << "ScavTrap " << name << " can't attack (no HP/energy)" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ScavTrap " << name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() 
{
    std::cout << "ScavTrap " << name << " has entered Gate keeper mode\n";
}
