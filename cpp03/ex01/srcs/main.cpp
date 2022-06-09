#include <iostream>
#include "ScavTrap.hpp"

int main( void ) 
{
    ClapTrap DouDou("DouDou");
    ScavTrap scav("scavio");
    scav.attack("DouDou");
    scav.takeDamage(5);
    DouDou.takeDamage(5);
    DouDou.beRepaired(2);
}