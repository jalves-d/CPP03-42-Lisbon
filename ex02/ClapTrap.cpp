
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	name = "default";
	hitpoints = 10;
	energypoints = 10;
	atkdamage = 0;
	std::cout << "ClapTrap default created !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpyCP)
{
	name = cpyCP.name;
	hitpoints = cpyCP.hitpoints;
	energypoints = cpyCP.energypoints;
	atkdamage = cpyCP.atkdamage;
	std::cout << "ClapTrap copy !" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cpyCP)
{
	if (this == &cpyCP)
		return (*this);
	name = cpyCP.name;
	hitpoints = cpyCP.hitpoints;
	energypoints = cpyCP.energypoints;
	atkdamage = cpyCP.atkdamage;
	std::cout << "ClapTrap operator !" << std::endl;
	return (*this);
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 10;
	this->energypoints = 10;
	this->atkdamage = 0;
	std::cout << "ClapTrap created !" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destroyed !" << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->energypoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attack " << target << " causing " << this->atkdamage << " points of damage!" << std::endl;
		this->energypoints--;
	}
	else
		std::cout << "ClapTrap have no energy points to attack !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	this->hitpoints -= amount;
	if (this->hitpoints <= 0)
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
}
	
void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " have been repaired in " << amount << " points!" << std::endl;
	this->energypoints += amount;
}
