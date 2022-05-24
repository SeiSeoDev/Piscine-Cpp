#include "Weapon.hpp"

Weapon::Weapon()
{
//	std::cout << "Weapon init without name" << std::endl;
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
//	std::cout << type << ": weapon obtain" << std::endl;
}

Weapon::~Weapon()
{
//	std::cout << this->_type << ": weapon gone" << std::endl;
}

std::string	Weapon::getType( void )
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}