#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << "You need 1 or more Zombie to make a horde...\n";
		return (NULL);
	}
	
	int		i = 0;
	Zombie	*horde;

	horde = new Zombie[N];
	while (i < N)
		horde[i++].setName(name);
	return (horde);
}
