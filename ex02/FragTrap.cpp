#include "FragTrap.h"


FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
    std::cout << "FragTrap " << _name << " copy constructed" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
    ClapTrap::operator=(src);
    std::cout << "FragTrap " << _name << " assigned" << std::endl;
    return *this;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destroyed " << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (_hitPoints == 0 || _energyPoints == 0)
    {
        std::cout << "FragTrap " << _name << " can't attack (no HP/energy)" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "FragTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests high fives" << std::endl;
}