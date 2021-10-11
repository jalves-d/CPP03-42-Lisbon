#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap first("First");
	ScavTrap second("Second");
	FragTrap third("Third");

	first.attack("Second");
	first.takeDamage(10);
	first.attack("Second");	
	first.beRepaired(10);
	first.attack("Second");
	second.attack("First");	
	second.guardGate(); 
	second.takeDamage(25);
	second.beRepaired(5);
	third.attack("First");	
	third.highFivesGuys(); 
	third.takeDamage(25);
	third.beRepaired(5);
}