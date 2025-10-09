#pragma once

#include <iostream>

class ClapTrap 
{
protected:
    std::string name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

public:
 

    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& src);
    ClapTrap& operator=(const ClapTrap& src);
    virtual ~ClapTrap();

    virtual void attack(const std::string& target);

    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
