#include "ClapTrap.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
	std::cout << "Ha ha ha! I LIVE! Hahaha" << std::endl;
	this->Name = "Clap";
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "Ha ha ha! I LIVE! Hahaha" << std::endl;
	this->Name = Name;
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap&src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD! " << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	if (rhs.Name == this->Name)
		return *this;
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack(const std::string& target)
{
	if (this->hitPoint <= 0)
	{
		std::cout << "ClapTrap " << this->Name << " has " << this->hitPoint << " HP ... and dead people can't attack..." << std::endl;
		return;
	}
	if (this->energyPoint <= 0)
	{
		std::cout << "ClapTrap " << this->Name << " has 0 energy Point ... he need to sleep before attack" << std::endl;
		return;
	}
	this->energyPoint -= 1;
	std::cout << "ClapTrap " << this->Name << " attack " << target << " and deal " << this->attackDamage << " Damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint - amount <= 0)
	{
		std::cout << "ClapTrap " << this->Name << " took " << amount << " Damage and is now Dead" << std::endl;
		this->hitPoint = 0;
		return;
	}
	this->hitPoint -= amount;
	std::cout << "ClapTrap " << this->Name << " took " << amount << " Damage and now got " << this->hitPoint << " HP" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoint <= 0)
	{
		std::cout << "ClapTrap " << this->Name << " has " << this->hitPoint << " HP ... and dead people can't be heal..." << std::endl;
		return;
	}
	if (this->energyPoint <= 0)
	{
		std::cout << "ClapTrap " << this->Name << " has 0 energy Point ... he need to sleep before healing himself" << std::endl;
		return;
	}
	this->energyPoint -= 1;
	std::cout << "ClapTrap " << this->Name << " is Heal for " << amount << " and is now at " << this->hitPoint+amount << " HP" << std::endl;
	this->hitPoint += amount;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
