#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap& cpyCP);
		DiamondTrap(std::string const name);
		~DiamondTrap();
		DiamondTrap& operator=(const DiamondTrap& cpyCP);
		void whoAmI();
	private:
		std::string name;
};

#endif
