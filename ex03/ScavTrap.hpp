#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap(std::string name);
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap(const ScavTrap &cpyCP);
		ScavTrap &operator=(const ScavTrap &cpyCP);
        void    guardGate(void);
};

#endif