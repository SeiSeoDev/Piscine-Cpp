#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &w) : _name(name), _w(w)
{
}

HumanA::~HumanA(void)
{
  //  std::cout << "HumanA dead" << std::endl;
}

void	HumanA::attack( void )
{
    std::cout << this->_name << " attacks with their " << this->_w.getType() << std::endl;
}

void	HumanA::setWeapon( Weapon &w )
{
    this->_w = w;
}
