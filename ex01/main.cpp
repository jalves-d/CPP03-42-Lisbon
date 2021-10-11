#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap first("First");
	ScavTrap second("Second");

	first.attack("Second");
	first.takeDamage(10);
	first.attack("Second");	
	first.beRepaired(10);
	first.attack("Second");
	second.attack("First");	
	second.guardGate(); 
	second.takeDamage(25);
	second.beRepaired(5);
}