#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed():fixed_point(0),nb(8){
	std::cout<<"Default constructor called"<<std::endl;
}
Fixed::Fixed(const int intiger_nb):nb(8){
	std::cout<<"Int constructor called"<<std::endl;
	this->fixed_point = intiger_nb << nb;
};
Fixed::Fixed(const float	float_nb):nb(8){
	std::cout<<"Float constructor called"<<std::endl;
	fixed_point = (int)(std::round(float_nb * std::pow(2, nb)));
};
Fixed::Fixed(const Fixed & obj):nb(obj.nb){
    std::cout<<"Copy constructor called"<<std::endl;
	*this = obj;
};
Fixed & Fixed::operator=(const Fixed &obj)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	this->fixed_point = obj.getRawBits();
	return (*this);
};
int		Fixed::getRawBits(void) const{
    return (this->fixed_point);
}
void	Fixed::setRawBits(int const raw){
    this->fixed_point = raw;
}

Fixed::~Fixed(){
	std::cout<<"Destructor called"<<std::endl;
};

float	Fixed::toFloat(void)const{
	return ((float)fixed_point / std::pow(2, nb));
}
int Fixed::toInt( void ) const 
{
	return (fixed_point >> nb);
}
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}