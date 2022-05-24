#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie	*first = new Zombie();

	first->setName(name);
	return (first);
}
