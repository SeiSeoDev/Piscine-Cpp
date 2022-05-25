

#include "ClapTrap.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
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
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	return *this;
}

std::ostream &operator<<(std::ostream &o, ClapTrap const &instance)
{
	//o << instance.value;
	//return (o);
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
	std::cout << "ClapTrap " << this->Name << " attack " << target << " and deal " << this->attackDamage << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint - amount <= 0)
	{
		std::cout << "ClapTrap " << this->Name << " took " << amount << " Damage and is now Dead" << std::endl;
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
	std::cout << "ClapTrap " << this->Name << " is Heal for " << amount << " and is now at " << this->hitPoint+amount << " HP" << std::endl;
	this->hitPoint += amount;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
