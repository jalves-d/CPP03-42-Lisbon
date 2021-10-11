#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	name = "default";
	hitpoints = 100;
	energypoints = 100;
	atkdamage = 30;
	std::cout << "FragTrap default created !" << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpyCP)
{
	name = cpyCP.name;
	hitpoints = cpyCP.hitpoints;
	energypoints = cpyCP.energypoints;
	atkdamage = cpyCP.atkdamage;
	std::cout << "FragTrap copy !" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &cpyCP)
{
	if (this == &cpyCP)
		return (*this);
	name = cpyCP.name;
	hitpoints = cpyCP.hitpoints;
	energypoints = cpyCP.energypoints;
	atkdamage = cpyCP.atkdamage;
	std::cout << "FragTrap operator !" << std::endl;
	return (*this);
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 100;
	this->energypoints = 100;
	this->atkdamage = 30;
	std::cout << "FragTrap created !" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destroyed !" << std::endl;
}

void FragTrap:: highFivesGuys(void)
{
	std::cout << this->name << " request high fives !" << std::endl;
}