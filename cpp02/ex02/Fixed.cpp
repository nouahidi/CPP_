#include "Fixed.hpp"

const int	Fixed::nb = 8;

Fixed::Fixed(){
	this->fixed_point = 0;
}
Fixed::Fixed(const int intiger_nb){
	this->fixed_point=intiger_nb << nb;
}
Fixed::Fixed(const float	float_nb){
	this->fixed_point = (int)(std::round(float_nb * std::pow(2, nb)));
}

Fixed::Fixed(const Fixed & obj){
	*this = obj;
}

Fixed  &Fixed::operator=(Fixed const &obj)
{
	this->fixed_point = obj.getRawBits();
	return (*this);
}
Fixed::~Fixed(){}

bool	Fixed::operator>(Fixed const obj)const{
	return (this->toFloat() > obj.toFloat());
}
bool	Fixed::operator<(const Fixed obj)const{
	return (this->toFloat() < obj.toFloat());
}
bool	Fixed::operator>=(const Fixed obj)const{
	return (this->toFloat() >= obj.toFloat());
}
bool	Fixed::operator<=(const Fixed obj)const{
	return (this->toFloat() <= obj.toFloat());
}
bool	Fixed::operator==(const Fixed obj)const{
	return (this->toFloat() == obj.toFloat());
}
bool	Fixed::operator!=(const Fixed obj)const{
	return (this->toFloat() != obj.toFloat());
}
Fixed	Fixed::operator+(Fixed const obj)const{
	return (Fixed(this->toFloat() + obj.toFloat()));
}
Fixed	Fixed::operator-(const Fixed obj)const{
	return (Fixed(this->toFloat() - obj.toFloat()));
}
Fixed	Fixed::operator*(const Fixed obj)const{
	return Fixed((this->toFloat()) * obj.toFloat());
}
Fixed	Fixed::operator/(const Fixed obj)const{
	return (Fixed(this->toFloat() / obj.toFloat()));
}
Fixed &Fixed::operator++(){
	fixed_point++;
	return (*this);
}
Fixed Fixed::operator++(int){
	Fixed tmp(*this);
	fixed_point++;
	return (tmp);
}
Fixed &Fixed::operator--(){
	fixed_point--;
	return (*this);
}
Fixed Fixed::operator--(int){
	Fixed tmp(*this);
	fixed_point--;
	return (tmp);
}

const	Fixed	&Fixed::min(const Fixed &a, const Fixed &b){
	if (a.toFloat() <= b.toFloat())
		return (a);
	return (b);
}
Fixed	&Fixed::min(Fixed &a, Fixed &b){
	if (a.toFloat() <= b.toFloat())
		return (a);
	return (b);
}
Fixed	&Fixed::max(Fixed &a, Fixed &b){
	if (a.toFloat() >= b.toFloat())
		return (a);
	return (b);
}
const	Fixed	&Fixed::max(const Fixed &a, const Fixed &b){
	if (a.toFloat() >= b.toFloat())
		return (a);
	return (b);
}
int	Fixed::toInt(void)const
{
	return (this->fixed_point >> this->nb);
}
float	Fixed::toFloat( void ) const{
	return ((float)fixed_point / std::pow(2, nb));
}
int	Fixed::getRawBits(void)const{
	return (this->fixed_point);
}
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}
