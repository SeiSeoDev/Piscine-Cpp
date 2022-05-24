#include "Harl.hpp"

typedef  void	(Harl::*fptr[4])(void);
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Harl::Harl()
{
}

Harl::Harl(const Harl&src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	fptr ptr = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
		if (str[i] == level)
			(this->*(ptr[i]))();
}