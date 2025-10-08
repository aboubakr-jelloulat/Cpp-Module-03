#include "FragTrap.h"
#include <iostream>



int main() 
{

	{
		FragTrap f1("Reboot1");

		f1.attack("BOB");
		f1.attack("BOB");

		f1.takeDamage(50);

		f1.beRepaired(20);

		f1.highFivesGuys();

		FragTrap f2(f1);        // Copy constructor
		FragTrap f3("Another");
		f3 = f1;                // Assignment
	}


	{
		FragTrap f1("Reboot2");

	}
 

    return 0;
}

