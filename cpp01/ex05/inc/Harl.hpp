#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
	public:
		Harl();
		Harl(Harl const &src);
		~Harl();
		void complain(std::string level);
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

};
std::ostream &operator<<(std::ostream &o, Harl const &instance);


#endif /* ************************************************************* HARL_HPP */