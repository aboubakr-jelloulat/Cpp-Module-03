#include "ScavTrap.h"
#include <iostream>

int main()
{

	{
		std::cout << "\033[31mCreate s1:\033[0m\n";
		ScavTrap s1("BoB");

		std::cout << "\n\033[31mCopy construct s2 from s1:\033[0m\n";
		ScavTrap s2 = s1; // Copy constructor

		std::cout << "\n\033[31mAssign s1 to s3:\033[0m\n";
		ScavTrap s3("Foo");
		s3 = s1; // Assignment operator

		std::cout << "\n\033[31mdestractors :\033[0m\n";

	}


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
