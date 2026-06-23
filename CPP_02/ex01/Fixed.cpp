#include "Fixed.hpp"

int32_t FloatToFixed(float value)
{
	return int32_t(value * float(1 << 16) + (16 >= 0 ? 0.5 : -0.5));
}

int Fixed::getRawBits( void )
{
	std::cout << "getRawBits member called." << std::endl;
	return (this->value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member called." << std::endl;
	this->value = raw;
}

Fixed::Fixed(void)
{
	std::cout << "Default constructor called." << std::endl;
	this->value = 0;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called." << std::endl;
	this->value
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called." << std::endl;
	this->value = value;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
	std::cout << "Copy constructor called." << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called." << std::endl;
}

Fixed &Fixed::operator=(const Fixed &otherFixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &otherFixed)
	{
		this->value = otherFixed.value;
	}
	return *this;
}