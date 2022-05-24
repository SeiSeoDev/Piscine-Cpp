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
		Fixed &operator=(Fixed const &rhs);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;
		
	private:
		int val;
		const int static mantis = 8;
};

std::ostream& operator<<(std::ostream &output,  Fixed const &data);

#endif /* ************************************************************* FIXED_HPP */
