#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					fixed_point;
		static const int 	nb;
	public:
	Fixed();
	Fixed(const int      intiger_nb);
	Fixed(const float	float_nb);
	Fixed(const Fixed &obj);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt(void) const;
		Fixed	&operator=(const Fixed &obj);
		bool	operator>(const Fixed obj)const;
		bool	operator<(const Fixed obj)const;
		bool	operator>=(const Fixed obj)const;
		bool	operator<=(const Fixed obj)const;
		bool	operator==(const Fixed obj)const;
		bool	operator!=(const Fixed obj)const;
		Fixed	operator+(const Fixed obj)const;
		Fixed	operator-(const Fixed obj)const;
		Fixed	operator*(Fixed const obj)const;
		Fixed	operator/(const Fixed obj)const;
		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);
		static const	Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed	&min(Fixed &a, Fixed &b);
		static const	Fixed	&max(const Fixed &a, const Fixed &b);
		Fixed	&max(Fixed &a, Fixed &b);
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
