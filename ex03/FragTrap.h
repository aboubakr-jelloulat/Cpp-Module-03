#pragma once

#include "ClapTrap.h"
#include <iostream>

class FragTrap : public ClapTrap
{
public:
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& src);
    FragTrap& operator=(const FragTrap& src);
    virtual ~FragTrap();

    void highFivesGuys(void);

    // override 
    void attack(const std::string& target) ;
};