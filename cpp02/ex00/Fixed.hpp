#ifndef Fixed_HPP
#define Fixed_HPP

#include <iostream>

class   Fixed{
	private:
		int					raw;
		const int			fract_point;
	public:
	Fixed();
	~Fixed();
	Fixed(const Fixed  &FIXED);
	Fixed& operator=(const Fixed & FIXED);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif