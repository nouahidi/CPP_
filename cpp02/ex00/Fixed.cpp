#include "Fixed.hpp"

Fixed::Fixed():fract_point(8){
    (void)fract_point;
    std::cout<<"Default constructor called"<<std::endl;
    this->raw = 0;
};
Fixed::~Fixed(){
    std::cout<<"Destructor called"<<std::endl;
};
Fixed::Fixed(const Fixed & FIXED):fract_point(8){
    std::cout<<"Copy constructor called"<<std::endl;
    *this = FIXED;
};
Fixed& Fixed::operator=(const Fixed & FIXED){
    std::cout<<"Copy assignment operator called"<<std::endl;
    this->raw = FIXED.getRawBits();
    return (*this);
};
int		Fixed::getRawBits(void) const{
    std::cout<<"getRawBits member function called"<<std::endl;
    return (this->raw);
}
void	Fixed::setRawBits(int const raw){
    this->raw = raw;
}