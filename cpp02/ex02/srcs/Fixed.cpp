

#include "Fixed.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	this->val = 0;
}

Fixed::Fixed(const Fixed&src)
{
	*this = src;
}

Fixed::Fixed(const int val)
{
	this->val = val << this->mantis;
}

Fixed::Fixed(const float val)
{
	this->val = roundf(val * (1 << this->mantis));
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed	&Fixed::operator=(Fixed const &nb)
{
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

bool	Fixed::operator<( const Fixed &nb ) const
{
	return (this->getRawBits() < nb.getRawBits());
}

bool	Fixed::operator>( const Fixed &nb ) const
{
	return (this->getRawBits() > nb.getRawBits());
}

bool	Fixed::operator<=( const Fixed &nb ) const
{
	return (this->getRawBits() <= nb.getRawBits());
}

bool	Fixed::operator>=( const Fixed &nb ) const
{
	return (this->getRawBits() >= nb.getRawBits());
}

bool	Fixed::operator==( const Fixed &nb ) const
{
	return (this->getRawBits() == nb.getRawBits());
}

bool	Fixed::operator!=( const Fixed &nb ) const
{
	return (this->getRawBits() != nb.getRawBits());
}

// OPERATOR (+ - * /)

Fixed	Fixed::operator+( const Fixed &nb ) const
{
	Fixed	obj;

	obj.setRawBits(this->val + nb.getRawBits());
	return (obj);
}

Fixed	Fixed::operator-( const Fixed &nb ) const
{
	Fixed	obj;

	obj.setRawBits(this->val - nb.getRawBits());
	return (obj);
}

Fixed	Fixed::operator*( const Fixed &nb ) const
{
	Fixed	obj;

	obj.setRawBits((this->val * nb.getRawBits()) >> this->mantis);
	return (obj);
}

Fixed	Fixed::operator/( const Fixed &nb ) const
{
	Fixed	obj;

	obj.setRawBits((this->val << this->mantis) / nb.getRawBits());
	return (obj);
}

// OPERATOR (iterator)

Fixed &Fixed::operator++(void)
{
    this->val++;
    return (*this);
}

Fixed &Fixed::operator--(void)
{
    this->val--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    operator++();
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    operator--();
    return (tmp);
}

// OPERATOR (a < > b)

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return a > b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return a < b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return a > b ? a : b;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
