#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(void)
{
	name = "default";
	ClapTrap::name = "clapname";
	hitpoints = 100;
	energypoints = 50;
	atkdamage = 30;
	std::cout << "DiamondTrap default created !" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpyCP)
{
	name = cpyCP.name;
	hitpoints = cpyCP.hitpoints;
	energypoints = cpyCP.energypoints;
	atkdamage = cpyCP.atkdamage;
	ClapTrap::name = cpyCP.ClapTrap::name;
	std::cout << "DiamondTrap copy !" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &cpyCP)
{
	if (this == &cpyCP)
		return (*this);
	name = cpyCP.name;
	hitpoints = cpyCP.hitpoints;
	energypoints = cpyCP.energypoints;
	atkdamage = cpyCP.atkdamage;
	ClapTrap::name = cpyCP.ClapTrap::name;
	std::cout << "DiamondTrap operator !" << std::endl;
	return (*this);
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 100;
	this->energypoints = 50;
	this->atkdamage = 30;
	ClapTrap::name = "clapname";
	std::cout << "DiamondTrap created !" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destroyed !" << std::endl;
}

void 	DiamondTrap::whoAmI(void) const
{
	std::cout << "I am a DiamondTrap " << "my name is " << this->name
	<< " my ClapTrap name is: " << this->ClapTrap::name << std::endl;
}
