#include <iostream>
#include "ClapTrap.hpp"

int main( void ) 
{
    ClapTrap DouDou("DouDou");
    ClapTrap DiDi("DiDi");
    DiDi.attack("DouDou");
    DouDou.takeDamage(5);
    DouDou.beRepaired(2);
}