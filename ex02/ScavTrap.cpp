#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	name = "default";
	hitpoints = 100;
	energypoints = 50;
	atkdamage = 20;
	std::cout << "ScavTrap default created !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpyCP)
{
	name = cpyCP.name;
	hitpoints = cpyCP.hitpoints;
	energypoints = cpyCP.energypoints;
	atkdamage = cpyCP.atkdamage;
	std::cout << "ScavTrap copy !" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &cpyCP)
{
	if (this == &cpyCP)
		return (*this);
	name = cpyCP.name;
	hitpoints = cpyCP.hitpoints;
	energypoints = cpyCP.energypoints;
	atkdamage = cpyCP.atkdamage;
	std::cout << "ScavTrap operator !" << std::endl;
	return (*this);
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 100;
	this->energypoints = 50;
	this->atkdamage = 20;
	std::cout << "ScavTrap created !" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destroyed !" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << this->name << " enterred in Gate keeper mode" << std::endl;
}