#include "Zombie.hpp"

int	main()
{
	std::string	str;
	Zombie		*z;
	int			i = 0;

	str = "Kiwi";
	z = zombieHorde(20, "Gogolito");
	while (i < 20)
		z[i++].announce();
	delete[] z;
	i = 0;
	z = zombieHorde(30, str);
	while (i < 30)
		z[i++].announce();
	delete[] z;
	return (0);
}