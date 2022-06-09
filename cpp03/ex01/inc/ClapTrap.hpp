#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap();
		ClapTrap &operator=(ClapTrap const &rhs);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		std::string Name;
		int hitPoint;
		int energyPoint;
		int attackDamage;
};


#endif /* ************************************************************* CLAPTRAP_HPP */
