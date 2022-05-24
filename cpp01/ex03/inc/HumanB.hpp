#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanB
{
	private:

		std::string _name;
		Weapon		*_w;
	
	public:

		HumanB(std::string name);
		~HumanB();

		void	attack( void );
		void	setWeapon( Weapon &w );
};

#endif