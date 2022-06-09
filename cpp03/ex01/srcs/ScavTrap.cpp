#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->Name = "Scav";
    this->hitPoint = 100;
    this->attackDamage = 20;
	this->energyPoint = 50;
	std::cout << "ScavTrap " << this->Name << " is built." << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
{
    this->Name = name;
    this->hitPoint = 100;
    this->attackDamage = 20;
	this->energyPoint = 50;
	std::cout << "ScavTrap " << this->Name << " is built." << std::endl;

}

ScavTrap::~ScavTrap()
{
	std::cout << "I'M Scaaaaaaaaaaaaaaav ... ohhhh ... ahhhh ... sorry" << std::endl;
}

void	ScavTrap::guardGate(void) const
{
    std::cout << "GuardGate" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
    (void)target;
    std::cout << "attack" << std::endl;
}