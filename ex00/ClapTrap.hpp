#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <iomanip>

class ClapTrap
{
	private:
		std::string name;
		int hitpoints;
		int energypoints;
		int atkdamage;
	public :
		ClapTrap(std::string name);
		ClapTrap(void);
		~ClapTrap(void);
		ClapTrap(const ClapTrap &cpyCP);
		ClapTrap &operator=(const ClapTrap &cpyCP);
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
