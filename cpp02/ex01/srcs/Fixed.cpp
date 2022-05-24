

#include "Fixed.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->val = 0;
}

Fixed::Fixed(const Fixed&src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int val)
{
	std::cout << "Integer constructor called" << std::endl;
	this->val = val << this->mantis;
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->val = roundf(val * (1 << this->mantis));
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed	&Fixed::operator=(Fixed const &nb)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &nb)
		this->val = nb.getRawBits();
	return (*this);
	return *this;
}

std::ostream& operator<<(std::ostream &output,  Fixed const&data)
{
	std::ostream *test = &output;
	
	if (test)
		output << data.toFloat();
	return output;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->val);
}

void	Fixed::setRawBits(int const raw)
{
	this->val = raw;
}

int Fixed::toInt(void) const
{
	return ((int)(this->val >> this->mantis));
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->val) / (1 << this->mantis));
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
