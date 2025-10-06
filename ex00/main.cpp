#include "ClapTrap.h"

int main()
{

	std::cout << "\n\n";

	// attack
	{
		ClapTrap clap1("Robot1");

		for (int i = 0; i < 10; i++)
			clap1.attack("bob");

		clap1.attack("bob");	// has no energy to attack
	}
	
	{
		ClapTrap clap1("Robot1");

		clap1.takeDamage(10);
		clap1.attack("sander"); // is dead and cannot attack"
	}
	

	// takeDamage

	{
		ClapTrap clap1("Robot1");

		clap1.takeDamage(5);
		clap1.takeDamage(5);
		clap1.attack("bos"); // is dead and cannot attack"

		ClapTrap clap2("Robot2");
		clap2.takeDamage(42); // takes 42 damage and dies

		ClapTrap clap3("Robot3");
		clap3.takeDamage(7); // takes 7 damage (3 HP left)
	}


	// beRepaired

	{
		ClapTrap clap1("Robot1");
	
		for (int i = 0; i < 10; i++)
			clap1.attack("lazyyy");

		clap1.beRepaired(10); //  Robot1 has no energy to repair


		ClapTrap clap2("Robot2");
		clap2.beRepaired(10); // Robot2 repairs itself for 10 HP! (20 HP total)
		clap2.takeDamage(5); // takes 5 damage (15 HP left)
	}

	// normal 

	{
		ClapTrap clap1("Borz");

		for (int i = 0; i < 3; i++)
			clap1.attack("aybouatr");
		
		clap1.takeDamage(5);

		clap1.attack("aybouatr");

		clap1.takeDamage(3);

		clap1.attack("aybouatr");

		clap1.takeDamage(1);

		clap1.beRepaired(10);

		clap1.attack("maddou");
		clap1.attack("maddou");
		clap1.attack("maddou");
		clap1.attack("maddou");
		clap1.attack("maddou"); // has no energy to attack
	}


	return 0;
}
