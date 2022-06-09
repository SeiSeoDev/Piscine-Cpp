#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &data);
		~ScavTrap();

	ScavTrap	&operator=(const ScavTrap &data);

	void	guardGate(void) const;
	void	attack(const std::string &target);
};
#endif