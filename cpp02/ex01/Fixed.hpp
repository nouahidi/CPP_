#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class   Fixed{
	private:
		int					fixed_point;
		const int 			nb;
	public:
	Fixed();
	Fixed(const int      intiger_nb);
	Fixed(const float	float_nb);
	Fixed & operator=(const Fixed &obj);
	Fixed(Fixed const &obj);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt(void) const;
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
