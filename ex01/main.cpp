#include "ScavTrap.h"
#include <iostream>

int main()
{

	{
		ScavTrap R1("Robot1");

		for (int i = 0; i < 50; i++)
			R1.attack("Sander");

		R1.attack("Sander"); // ScavTrap Robot1 can't attack (no HP/energy)
	}

	{
		ScavTrap R1("Robot1");

		R1.attack("Sander");
		R1.attack("Sander");

		R1.takeDamage(50);
		R1.takeDamage(50);

		R1.attack("Sander");

		// ClapTrap Robot1 takes 50 damage and dies
		// ScavTrap Robot1 can't attack (no HP/energy)

	}

	{
		ScavTrap R1("Robot1");

		R1.attack("Bos");

		for (int i = 0; i < 10; i++)
			R1.attack("bos");

		R1.takeDamage(50);

		R1.attack("BOB");

		R1.takeDamage(40);

		R1.beRepaired(100);


	}

	return 0;
}
