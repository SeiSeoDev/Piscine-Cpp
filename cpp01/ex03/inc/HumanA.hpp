#ifndef _HUMANA_HPP_
# define _HUMANA_HPP_

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanA
{
	private:

		std::string _name;
		Weapon		&_w;
	
	public:

		HumanA(std::string name, Weapon &w);
		~HumanA();

		void	attack( void );
		void	setWeapon( Weapon &w );
};

#endif