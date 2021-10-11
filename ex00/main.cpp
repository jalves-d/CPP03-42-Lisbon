#include "ClapTrap.hpp"

int main( void ) 
{
	ClapTrap first("First");
	ClapTrap second("Second");
	ClapTrap firstcpy(first);
	
	first.attack("Second");
	second.takeDamage(0);
	second.takeDamage(2);
	second.beRepaired(2);
	second.takeDamage(10);
	firstcpy.attack("Second");
}