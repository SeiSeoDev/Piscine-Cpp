#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <iostream>
# include <string>

class	Zombie
{
	private:

		std::string _name;
	
	public:

		Zombie();
		~Zombie();

		void		announce( void );
		std::string	getName( void );
		void		setName( std::string name );
};

Zombie* zombieHorde( int N, std::string name );
Zombie*	newZombie( std::string name );

#endif