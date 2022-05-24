#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

# include <iostream>
# include <string>

class	Weapon
{
	private:

		std::string _type;
	
	public:

		Weapon();
		Weapon(std::string type);
		~Weapon();

		std::string	getType( void );
		void		setType( std::string name );
};

#endif