#include "DiamondTrap.h"
#include <iostream>



int main() 
{

	{
		std::cout << "\033[1;34mCreating d1:\033[0m\n";
		DiamondTrap d1("Ruby");

		std::cout << "\n\033[1;34mCalling whoAmI():\033[0m\n";
		d1.whoAmI();

		std::cout << "\n\033[1;34mCopy constructing d2 from d1:\033[0m\n";
		DiamondTrap d2 = d1;

		std::cout << "\n\033[1;34mAssigning d1 to d3:\033[0m\n";
		DiamondTrap d3("Emerald");
		d3 = d1;

		std::cout << "\n\033[1;34mdestructors :\033[0m\n";

	}

	{
		std::cout << "\033[1;34mCreating foo:\n\033[0m\n";
		DiamondTrap foo("foo");

		std::cout << "\033[1;34mCreating zoo:\n\033[0m\n";
		DiamondTrap zoo("zoo");

		std::cout << "\033[1;34mCreating zoo_copy:\n\033[0m\n";
		DiamondTrap zoo_copy(zoo);

		std::cout << "\033[1;34mInstraction :\n\033[0m\n";

		foo.attack("Tom"); // ScavTrap => using ScavTrap::attack;

		zoo.takeDamage(50); // ClapTrap its base classes is called because it’s the only implementation in the hierarchy base ClapTrap no ovveride

		zoo.attack("Sander");

		zoo_copy.takeDamage(30); // leave the comment in take Damage in header

		zoo_copy.attack("Vini");

		std::cout << "\n\033[1;34mdestructors :\n\033[0m\n";

	}

    return 0;
}

