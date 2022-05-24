#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie spawn" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << ": is dead" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

std::string	Zombie::getName( void )
{
	return (this->_name);
}

void    Zombie::setName(std::string name)
{
	this->_name = name;
}
