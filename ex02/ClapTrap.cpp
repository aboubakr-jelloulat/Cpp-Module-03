#include "ScavTrap.h"
#include "ClapTrap.h"

#include <iostream>

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
    std::cout << "ClapTrap " << _name << " constructed" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap& src)
    : _name(src._name),
      _hitPoints(src._hitPoints),
      _energyPoints(src._energyPoints),
      _attackDamage(src._attackDamage)
{
    std::cout << "ClapTrap " << _name << " copy-constructed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src) 
{
    if (this != &src) 
	{
        _name = src._name;
        _hitPoints = src._hitPoints;
        _energyPoints = src._energyPoints;
        _attackDamage = src._attackDamage;
    }
    std::cout << "ClapTrap " << _name << " assigned" << std::endl;
    return *this;
}


ClapTrap::~ClapTrap() 
{
    std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}

// Attack (virtual)
void ClapTrap::attack(const std::string& target) 
{
    if (_hitPoints == 0 || _energyPoints == 0) 
	{
        std::cout << "ClapTrap " << _name << " can't attack (no HP/energy)" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
    if (_hitPoints == 0) 
	{
        std::cout << "ClapTrap " << _name << " is already dead" << std::endl;
        return;
    }
    if (amount >= _hitPoints) 
	{
        _hitPoints = 0;
        std::cout << "ClapTrap " << _name << " takes " << amount << " damage and dies" << std::endl;
    } 
	else 
	{
        _hitPoints -= amount;
        std::cout << "ClapTrap " << _name << " takes " << amount << " damage (" << _hitPoints << " HP left)" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) 
{
    if (_hitPoints == 0 || _energyPoints == 0) 
	{
        std::cout << "ClapTrap " << _name << " can't repair (no HP/energy)" << std::endl;
        return;
    }
    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " HP! (" << _hitPoints << " HP total)" << std::endl;
}
