#include "ScavTrap.h"
#include <iostream>

int main()
{

	ScavTrap s1("Gatey");
	s1.attack("Intruder");
	s1.takeDamage(50);
	s1.beRepaired(25);
	s1.guardGate();

	// // std::cout << "\n--- Construction/Destruction Chaining ---\n";
	// // {
	// // 	ScavTrap temp("Temp");
	// // } 

	// std::cout << "\n--- Canonical Form Tests ---\n";
	// ScavTrap s2("CopyMe");
	// ScavTrap s3 = s2; 
	// ScavTrap s4;
	// s4 = s2; 

	return 0;
}