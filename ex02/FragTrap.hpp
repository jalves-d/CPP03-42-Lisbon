#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap(std::string name);
		FragTrap(void);
		~FragTrap(void);
		FragTrap(const FragTrap &cpyCP);
		FragTrap &operator=(const FragTrap &cpyCP);
        void    highFivesGuys(void);
};

#endif