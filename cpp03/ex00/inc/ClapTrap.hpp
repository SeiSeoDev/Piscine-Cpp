#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(ClapTrap const &src);
		~ClapTrap();
		ClapTrap &operator=(ClapTrap const &rhs);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		std::string Name;
		int hitPoint;
		int energyPoint;
		int attackDamage;
};

std::ostream &operator<<(std::ostream &o, ClapTrap const &instance);


#endif /* ************************************************************* CLAPTRAP_HPP */
