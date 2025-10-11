#include "FragTrap.h"
#include <iostream>



int main() 
{

	{
		std::cout << "\033[31mCreate s1:\033[0m\n";
		FragTrap s1("BoB");

		std::cout << "\n\033[31mCopy construct s2 from s1:\033[0m\n";
		FragTrap s2 = s1; // Copy constructor

		std::cout << "\n\033[31mAssign s1 to s3:\033[0m\n";
		FragTrap s3("Foo");
		s3 = s1; // Assignment operator

		std::cout << "\n\033[31mdestractors :\033[0m\n";

	}


	{
		FragTrap f1("Reboot1");

		f1.attack("BOB");
		f1.attack("BOB");

		f1.takeDamage(50);

		f1.beRepaired(20);

		f1.highFivesGuys();

	}


 

    return 0;
}

