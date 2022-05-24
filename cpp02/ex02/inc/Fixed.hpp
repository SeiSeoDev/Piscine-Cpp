#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
#include <cmath>
class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &src);
		Fixed(const int val);
		Fixed(const float val);
		~Fixed();
		Fixed 	&operator=(Fixed const &rhs);
		int 	getRawBits(void) const;
		void 	setRawBits(int const raw);
		int 	toInt(void) const;
		float	toFloat(void) const;
		bool	operator<( const Fixed &nb ) const;
		bool	operator>( const Fixed &nb ) const;
		bool	operator<=( const Fixed &nb ) const;
		bool	operator>=( const Fixed &nb ) const;
		bool	operator==( const Fixed &nb ) const;
		bool	operator!=( const Fixed &nb ) const;
	// operation
		Fixed	operator+( const Fixed &nb ) const;
		Fixed	operator-( const Fixed &nb ) const;
		Fixed	operator*( const Fixed &nb ) const;
		Fixed	operator/( const Fixed &nb ) const;
	// acces values
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
	// increment and decrement
		Fixed 	&operator++(void);
		Fixed 	&operator--(void);
		Fixed 	operator++(int);
		Fixed operator--(int);
	// compare values
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
	private:
		int val;
		const int static mantis = 8;
};

std::ostream& operator<<(std::ostream &output,  Fixed const &data);

#endif /* ************************************************************* FIXED_HPP */
