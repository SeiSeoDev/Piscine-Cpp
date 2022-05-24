#include "Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie	Zomb;
	
	Zomb.setName(name);
	Zomb.announce();
}
